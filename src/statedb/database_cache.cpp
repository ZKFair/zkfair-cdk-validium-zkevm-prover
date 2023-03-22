#include "database_cache.hpp"
#include "utils.hpp"
#include "scalar.hpp"

// DatabaseCache class implementation

// Add a record in the head of the cache. Returns true if the cache is full (or no cache), false otherwise
bool DatabaseCache::addKeyValue(const string &key, const void * value, const bool update) 
{
    if (maxSize == 0)
    {
        return true;
    }

    attempts++;
    if (attempts%1000000 == 0)
    {
        cout << "DatabaseCache::addKeyValue() name=" << name << " maxSize=" << maxSize << " currentSize=" << currentSize << " attempts=" << attempts << " hits=" << hits << " hit ratio=" << double(hits)*100.0/double(attempts) << "%" << endl;
    }

    DatabaseCacheRecord * record;
    // If key already exists in the cache return. The findKey also sets the record in the head of the cache
    if (findKey(key, record))
    {
        if (update)
        {
            updateRecord(record, value);
            return true;
        }
        else
        {
            hits++;
            return false;
        }
    }

    record = allocRecord(key, value);

    bool full = false;

    record->prev = NULL;
    if (head == NULL) 
    {
        record->next = NULL;
        last = record;
    } 
    else 
    {
        record->next = head;
        head->prev = record;
    }
    head = record;

    cacheMap[key] = record;

    currentSize += record->size;
    full = (currentSize > maxSize); 
    // remove lats records from the cache to be under maxSize
    while (currentSize > maxSize) 
    {
        // Set new last record
        DatabaseCacheRecord* tmp = last;
        if (last->prev != NULL) last->prev->next = NULL;
        last = last->prev;
        // Free old last record
        cacheMap.erase(tmp->key);
        freeRecord(tmp);
        // Update cache size
        currentSize -= tmp->size;      
    }

    //cout << "DatabaseCache::addRecord() key=" << key << " cacheCurrentSize=" << cacheCurrentSize << " cacheMap.size()=" << cacheMap.size() << " record.size()=" << record->size << endl;
    //printMemoryInfo(true);
    
    return full;
}

bool DatabaseCache::findKey(const string &key, DatabaseCacheRecord* &record) 
{
    unordered_map<string, DatabaseCacheRecord*>::iterator it = cacheMap.find(key);

    if (it != cacheMap.end())
    {
        record = (DatabaseCacheRecord*)it->second;

        // Move cache record to the top/head (if it's not the current head)
        if (head != record) 
        {
            // Remove record from the current position
            record->prev->next = record->next;

            // If record is the last then set record->prev as the new last
            if (last == record) last = record->prev;
            else record->next->prev = record->prev;
            
            // Put record on top/head of the list
            head->prev = record;
            record->prev = NULL;
            record->next = head;
            head = record;
        }
        return true;
    }
    return false;
}

void DatabaseCache::print(bool printContent)
{
    cout << "Cache current size: " << currentSize << endl;
    cout << "Cache max size: " << maxSize << endl;
    cout << "Head: " << (head != NULL ? head->key : "NULL") << endl;
    cout << "Last: " << (last != NULL ? last->key : "NULL") << endl;
    
    DatabaseCacheRecord* record = head;
    uint64_t count = 0;
    uint64_t size = 0;
    while (record != NULL) 
    {
        if (printContent)
        {
            cout << "key:" << record->key << endl;
        }
        count++;
        size += record->size;
        record = record->next;
    }
    cout << "Cache count: " << count << endl;
    cout << "Cache calculated size: " << size << endl;
}

DatabaseCache::~DatabaseCache()
{
    DatabaseCacheRecord* record = head;
    DatabaseCacheRecord* tmp;
    // Free cache records
    while (record != NULL) 
    {
        tmp = record->next;
        freeRecord(record);
        record = tmp;
    }
}

// DatabaseMTCache class implementation

// Add a record in the head of the MT cache. Returns true if the cache is full (or no cache), false otherwise
bool DatabaseMTCache::add(const string &key, const vector<Goldilocks::Element> &value, const bool update)
{
    lock_guard<recursive_mutex> guard(mlock);

    if (maxSize == 0) return true;

    return addKeyValue(key, (const void *)&value, update);
}

bool DatabaseMTCache::find(const string &key, vector<Goldilocks::Element> &value)
{
    lock_guard<recursive_mutex> guard(mlock);

    if (maxSize == 0) return false;

    DatabaseCacheRecord* record;
    bool found = findKey(key, record);
    if (found) 
    {
        value = *((vector<Goldilocks::Element>*) record->value);
    }

    return found;
}

DatabaseCacheRecord * DatabaseMTCache::allocRecord(const string key, const void * value)
{
    // Allocate memory
    DatabaseCacheRecord * pRecord = new(DatabaseCacheRecord);
    if (pRecord == NULL)
    {
        cerr << "Error: DatabaseMTCache::allocRecord() failed calling new(DatabaseCacheRecord)" << endl;
        exitProcess();
    }
    vector<Goldilocks::Element>* pValue = new(vector<Goldilocks::Element>);
    if (pValue == NULL)
    {
        cerr << "Error: DatabaseMTCache::allocRecord() failed calling new(vector<Goldilocks::Element>)" << endl;
        exitProcess();
    }

    // Copy vector
    *pValue = *(const vector<Goldilocks::Element> *)value;

    // Assign values to record
    pRecord->value = pValue;
    pRecord->key = key;
    pRecord->size = 
        sizeof(DatabaseCacheRecord)+
        (pRecord->key.capacity()+1)+
        sizeof(vector<Goldilocks::Element>)+
        sizeof(Goldilocks::Element)*pValue->capacity();
        
    return pRecord;
}

void DatabaseMTCache::freeRecord(DatabaseCacheRecord* record)
{
    delete (vector<Goldilocks::Element>*)(record->value);
    delete record;
}

void DatabaseMTCache::updateRecord(DatabaseCacheRecord* record, const void * value)
{
    *(vector<Goldilocks::Element>*)(record->value) = *(vector<Goldilocks::Element>*)(value);
}

// DatabaseProgramCache class implementation
// Add a record in the head of the Program cache. Returns true if the cache is full (or no cache), false otherwise
bool DatabaseProgramCache::add(const string &key, const vector<uint8_t> &value, const bool update)
{
    lock_guard<recursive_mutex> guard(mlock);

    if (maxSize == 0) return true;

    return addKeyValue(key, (const void *)&value, update);
}

bool DatabaseProgramCache::find(const string &key, vector<uint8_t> &value)
{
    lock_guard<recursive_mutex> guard(mlock);

    if (maxSize == 0) return false;

    DatabaseCacheRecord* record;
    bool found = findKey(key, record);
    if (found) 
    {
        value = *((vector<uint8_t>*) record->value);
    }

    return found;
}

DatabaseCacheRecord * DatabaseProgramCache::allocRecord(const string key, const void * value)
{
    // Allocate memory
    DatabaseCacheRecord * pRecord = new(DatabaseCacheRecord);
    if (pRecord == NULL)
    {
        cerr << "Error: DatabaseProgramCache::allocRecord() failed calling new(DatabaseCacheRecord)" << endl;
        exitProcess();
    }
    vector<uint8_t>* pValue = new(vector<uint8_t>);
    if (pValue == NULL)
    {
        cerr << "Error: DatabaseProgramCache::allocRecord() failed calling new(vector<uint8_t>)" << endl;
        exitProcess();
    }

    // Copy vector
    *pValue = *(const vector<uint8_t> *)value;

    // Assign values to record
    pRecord->value = pValue;
    pRecord->key = key;
    pRecord->size = 
        sizeof(DatabaseCacheRecord)+
        (pRecord->key.capacity()+1)+
        sizeof(vector<uint8_t>)+
        sizeof(uint8_t)*pValue->capacity();
        
    return pRecord;
}

void DatabaseProgramCache::freeRecord(DatabaseCacheRecord* record)
{
    delete (vector<uint8_t>*)(record->value);
    delete record;
}

void DatabaseProgramCache::updateRecord(DatabaseCacheRecord* record, const void * value)
{
    *(vector<uint8_t>*)(record->value) = *(vector<uint8_t>*)(value);
}

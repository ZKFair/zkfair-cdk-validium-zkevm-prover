#include "statedb_test.hpp"
#include <nlohmann/json.hpp>
#include "statedb_client.hpp"
#include "scalar.hpp"
#include "zkassert.hpp"
#include <random>
#include <cmath>
#include <iostream>
#include "database.hpp"
#include <thread>
#include "timer.hpp"
#include "goldilocks_base_field.hpp"
#include "statedb_client.hpp"
#include "statedb_factory.hpp"
#include "statedb_test_perf.hpp"
#include "statedb_test_load.hpp"

using namespace std;

#define PERF_SET 1
#define PERF_GET 2
#define PERF_TEST PERF_SET
const uint64_t TEST_COUNT = 50000;

void runStateDBPerfTest (const Config& config)
{
    new thread {stateDBPerfTestThread, config};
}

void* stateDBPerfTestThread (const Config& config)
{
    cout << "StateDB performance test started" << endl;
    Goldilocks fr;

    string sTest;
    #if PERF_TEST == PERF_SET
        sTest = "SET";
    #elif PERF_TEST == PERF_GET
        sTest = "GET";
    #endif

    StateDBClient* client = StateDBClientFactory::createStateDBClient(fr, config);

    SmtSetResult setResult;
    SmtGetResult getResult;

    Goldilocks::Element root[4]={0,0,0,0};
    Goldilocks::Element newRoot[4]={0,0,0,0};
    Goldilocks::Element key[4]={0,0,0,0};
    mpz_class value;
    mpz_class keyScalar;
    uint64_t r;

    pqxx::connection *pConnection;

    // Random generator
    std::random_device rd;  
    std::mt19937_64 gen(rd()); 
    std::uniform_int_distribution<unsigned long long> distrib(0, std::llround(std::pow(2,64)));

    try
    {
        string uri = "postgresql://zkstatedb:zkstatedb@127.0.0.1:5532/perf_db";
        pConnection = new pqxx::connection{uri};
        if (!loadRoot(fr, pConnection, 100, root)) return NULL;
        cout << "Root=[" << fr.toString(root[0]) << "," << fr.toString(root[1]) << "," << fr.toString(root[2]) << "," << fr.toString(root[3]) << "]" << endl;
    }
    catch (const std::exception &e)
    {
        cerr << "stateDBPerfTestThread: database.exception: " << e.what() << endl;
        delete pConnection;
        return NULL;
    } 

    if (config.stateDBURL=="local") {
        cout << "Executing " << TEST_COUNT << " " << sTest << " operations using local client..." << endl;
    } else {    
        cout << "Executing " << TEST_COUNT << " " << sTest << " operations using remote client..." << endl;
    }

    struct timeval tset;
    gettimeofday(&tset, NULL);
    for (uint64_t i=1; i<=TEST_COUNT; i++) {
        keyScalar = 0;
        for (int k=0; k<4; k++) {
            r = distrib(gen); 
            keyScalar = (keyScalar << 64) + r;
        }
    
        scalar2key(fr, keyScalar, key);
        value=i;

        #if PERF_TEST == PERF_SET
            client->set(root, key, value, true, newRoot, &setResult);
            for (int j=0; j<4; j++) root[j] = setResult.newRoot[j];
        #elif PERF_TEST == PERF_GET
            client->get(root, key, value, &getResult);
        #endif
    }
    #if PERF_TEST == PERF_SET
        if (config.dbAsyncWrite) client->flush();
    #endif    
    uint64_t totalTimeUS = TimeDiff(tset);

    #if PERF_TEST == PERF_SET  
        cout << "Saving new root..." << endl;
        saveRoot (fr, pConnection, 100, root);
    #endif

    cout << "Total Execution time (us): " << totalTimeUS << endl;
    cout << "Time per " << sTest << ": " << totalTimeUS/TEST_COUNT << "us" << endl;
    cout << sTest << "s per second: " << (float)1000000/(totalTimeUS/TEST_COUNT) << endl;

    cout << "StateDB performance test done" << endl;
    delete pConnection;
    return NULL;
}

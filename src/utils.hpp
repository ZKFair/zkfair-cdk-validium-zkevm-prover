#ifndef UTILS_HPP
#define UTILS_HPP

#include <sys/time.h>
#include "ff/ff.hpp"
#include "context.hpp"
#include "config.hpp"
#include "reference.hpp"
#include "zk-prover.grpc.pb.h"
#include "input.hpp"
#include "proof.hpp"
#include "definitions.hpp"

/*********/
/* Print */
/*********/

// These functions log information into the console

void printRegs(Context &ctx);
void printVars(Context &ctx);
void printMem(Context &ctx);
#ifdef USE_LOCAL_STORAGE
void printStorage(Context &ctx);
#endif
void printDb(Context &ctx);

void printReg(Context &ctx, string name, FieldElement &V, bool h = false, bool bShort = false);
void printU64(Context &ctx, string name, uint64_t v);
void printU32(Context &ctx, string name, uint32_t v);
void printU16(Context &ctx, string name, uint16_t v);

void printReference(FiniteField &fr, Reference &ref);
string calculateExecutionHash(FiniteField &fr, Reference &ref, string prevHash);

string printFea(Context &ctx, Fea &fea);

void printBa(uint8_t * pData, uint64_t dataSize, string name);
void printBits(uint8_t * pData, uint64_t dataSize, string name);

#define zkmin(a, b) ((a >= b) ? b : a)
#define zkmax(a, b) ((a >= b) ? a : b)

// Returns timestamp in UTC, e.g. "2022-01-28_08:08:22_348"
string getTimestamp(void);

// Returns a new UUID, e.g. "8796757a-827c-11ec-a8a3-0242ac120002"
string getUUID (void);

// Converts a json into/from a file
void json2file(const json &j, const string &fileName);
void file2json(const string &fileName, json &j);

// Converts grpc objects
void inputProver2Input (FiniteField &fr, const zkprover::v1::InputProver &inputProver, Input &input);
void input2InputProver (FiniteField &fr, const Input &input, zkprover::v1::InputProver &inputProver);
void proof2ProofProver (FiniteField &fr, const Proof &proof, zkprover::v1::Proof &proofProver);

// Maps memory into a file
void * mapFile (const string &fileName, uint64_t size, bool bOutput);
void unmapFile (void * pAddress, uint64_t size);

#endif
#include "zkresult.hpp"

struct {
    int code;
    const char* message;
} resultdesc[] = {
    { ZKR_UNSPECIFIED, "ZKR_UNSPECIFIED" },
    { ZKR_SUCCESS, "ZKR_SUCCESS" },
    { ZKR_DB_KEY_NOT_FOUND, "ZKR_DB_KEY_NOT_FOUND" },
    { ZKR_DB_ERROR, "ZKR_DB_ERROR" },
    { ZKR_INTERNAL_ERROR, "ZKR_INTERNAL_ERROR" },
    { ZKR_SM_MAIN_ASSERT, "ZKR_SM_MAIN_ASSERT" },
    { ZKR_SM_MAIN_ARITH, "ZKR_SM_MAIN_ARITH" },
    { ZKR_SM_MAIN_BINARY, "ZKR_SM_MAIN_BINARY" },
    { ZKR_SM_MAIN_HASHP, "ZKR_SM_MAIN_HASHP" },
    { ZKR_SM_MAIN_HASHK, "ZKR_SM_MAIN_HASHK" },
    { ZKR_SM_MAIN_STORAGE, "ZKR_SM_MAIN_STORAGE" },
    { ZKR_SM_MAIN_MEMORY, "ZKR_SM_MAIN_MEMORY" },
    { ZKR_SM_MAIN_MEMALIGN, "ZKR_SM_MAIN_MEMALIGN" },
    { ZKR_SM_MAIN_ADDRESS, "ZKR_SM_MAIN_ADDRESS" },
    { ZKR_SMT_INVALID_DATA_SIZE, "ZKR_SMT_INVALID_DATA_SIZE" },
    { ZKR_SM_MAIN_BATCH_L2_DATA_TOO_BIG, "ZKR_SM_MAIN_BATCH_L2_DATA_TOO_BIG" },
    { ZKR_AGGREGATED_PROOF_INVALID_INPUT, "ZKR_AGGREGATED_PROOF_INVALID_INPUT" },
    { ZKR_SM_MAIN_OOC_ARITH, "ZKR_SM_MAIN_OOC_ARITH" },
    { ZKR_SM_MAIN_OOC_BINARY, "ZKR_SM_MAIN_OOC_BINARY" },
    { ZKR_SM_MAIN_OOC_MEM_ALIGN, "ZKR_SM_MAIN_OOC_MEM_ALIGN" },
    { ZKR_SM_MAIN_OOC_KECCAK_F, "ZKR_SM_MAIN_OOC_KECCAK_F" },
    { ZKR_SM_MAIN_OOC_PADDING_PG, "ZKR_SM_MAIN_OOC_PADDING_PG" },
    { ZKR_SM_MAIN_OOC_POSEIDON_G, "ZKR_SM_MAIN_OOC_POSEIDON_G" },
    { ZKR_STATEDB_GRPC_ERROR, "ZKR_STATEDB_GRPC_ERROR" },
    { ZKR_SM_MAIN_OUT_OF_STEPS, "ZKR_SM_MAIN_OUT_OF_STEPS" },
    { ZKR_SM_MAIN_INVALID_FORK_ID, "ZKR_SM_MAIN_INVALID_FORK_ID" },
    { ZKR_SM_MAIN_INVALID_UNSIGNED_TX, "ZKR_SM_MAIN_INVALID_UNSIGNED_TX" },
    { ZKR_SM_MAIN_BALANCE_MISMATCH, "ZKR_SM_MAIN_BALANCE_MISMATCH" },
    { ZKR_SM_MAIN_FEA2SCALAR, "ZKR_SM_MAIN_FEA2SCALAR" },
    { ZKR_SM_MAIN_TOS32, "ZKR_SM_MAIN_TOS32" },
    { ZKR_SM_MAIN_BATCH_INVALID_INPUT, "ZKR_SM_MAIN_BATCH_INVALID_INPUT" }
};

const char* zkresult2string (int code)
{
    for (int i = 0; resultdesc[i].message; i++)
        if (resultdesc[i].code == code)
            return resultdesc[i].message;
    return "unknown";
}
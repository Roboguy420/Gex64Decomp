#include "common.h"

#include "types/GameState.h"
#include "types/Remotes.h"

INCLUDE_ASM("asm/nonmatchings/1A6A0", func_80019AA0);

INCLUDE_ASM("asm/nonmatchings/1A6A0", func_80019B1C);

INCLUDE_ASM("asm/nonmatchings/1A6A0", func_80019F18);

INCLUDE_ASM("asm/nonmatchings/1A6A0", func_8001A1D8);

void GetRemoteCount(RemoteCount* remotes) {
    const int c_RedRemoteEntries = 14;
    int bits, i;

    for (remotes->gold = 0, bits = gpGameState8->gold_remote_bits; bits != 0; bits >>= 1)
    {
        remotes->gold += bits & 1;
    }

    for (remotes->silver = 0, bits = gpGameState8->silver_remote_bits; bits != 0; bits >>= 1)
    {
        remotes->silver += bits & 1;
    }

    for(remotes->red = 0, i = 0; i < c_RedRemoteEntries; ++i)
    {
        for (bits = gpGameState8->red_remote_bits[i]; bits != 0; bits >>= 1)
        {
            remotes->red += bits & 1;
        }
    }
}

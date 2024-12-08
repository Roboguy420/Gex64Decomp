#include "common.h"

#include "types/GameState.h"
#include "types/Remotes.h"

extern int D_800D1810;
extern int D_800E5FDC;
extern int D_800EB8A0;
extern int D_8014F35C;
extern int D_801539BC;
extern int D_80153A54;
void func_80019AA0(void) {
    int temp_v0;

    D_800E5FDC = func_80030BE0(0x10C);
    D_800D1810 = func_80030BE0(0x66B0);
    temp_v0 = func_80030BE0(0x11420);
    D_800EB8A0 = temp_v0;
    D_801539BC = temp_v0;
    D_80153A54 = func_80030BE0(0x2710);
    D_8014F35C = func_80030BE0(0x10);
    func_80030C50(0x10);
}

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

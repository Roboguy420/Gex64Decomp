#include "common.h"
#include "types/GameState.h"

#include "types/Level.h"

extern char* D_8006CFA0;
extern int D_8006CF60;
extern int D_80154840;

INCLUDE_ASM("asm/nonmatchings/intro_code", func_80159720_A8550);

void func_801598A4_A86D4(Level_t* level, int* arg1) {
    func_8002C1AC(0);
    level->_104--;
    if (level->_104 == 0xAF) {
        D_80154840 = 0x171;
        func_80052758();
    }
    if (level->_104 == 0) {
        ((short*)arg1)[0x9c/2] = -1;
        func_800396E0("map", "map5", gpGameState8);
        ((char*)gpGameState8)[0x4CDC] = 0;
        D_8006CF60 = 0;
    }
}

void func_80159944_A8774(Level_t* level)
{
    level->_104 = 0xB4;
    level->_40[4] = 0x1117;
    level->_40[5] = 0x76C;
    level->_40[6] = 0x288;
    level->_60[0] = 0x47E;
    level->_60[1] = 0x6EA;
    level->_60[2] = 0;
}

void func_8015997C_A87AC(Level_t* level)
{
    if (level->_104)
    {
        level->_104--;
        return;
    }
    else
    {
        if (level->_40[6] >= 0x95)
        {
            level->_40[6] -= 0x14;
        }
        D_8006CFA0[0x4E] = 0;
    }
}

void func_801599CC_A87FC(Level_t* level)
{
    level->_104 = 0xD2;
    level->_40[4] = 0xE56;
    level->_40[5] = 0x76C;
    level->_40[6] = 0x55;
    level->_60[0] = 0x400;
    level->_60[1] = 0x6D6;
    level->_60[2] = 0;
}

void func_80159A04_A8834(void) {
}

void func_80159A0C_A883C(Level_t* level)
{
    level->_104 = 0xD2;
    level->_40[4] = 0x13BA;
    level->_40[5] = 0x76C;
    level->_40[6] = 0x32;
    level->_60[0] = 0x400;
    level->_60[1] = 0x6D6;
    level->_60[2] = 0;
}

void func_80159A44_A8874(void) {
}

void func_80159A4C_A887C(Level_t* level)
{
    level->_104 = 0x12C;
    level->_40[4] = 0x157C;
    level->_40[5] = 0x708;
    level->_40[6] = 0x55;
    level->_60[0] = 0x4B0;
    level->_60[1] = 0x6D6;
    level->_60[2] = 0;
}

void func_80159A84_A88B4(void) {
}

void func_80159A8C_A88BC(Level_t* level)
{
    level->_104 = 0xFA;
    level->_40[4] = 0x1770;
    level->_40[5] = 0xC80;
    level->_40[6] = -0x384;
    level->_60[0] = 0x4B0;
    level->_60[1] = 0x708;
    level->_60[2] = 0;
}

void func_80159AC4_A88F4(Level_t* level)
{
    if (level->_104)
    {
        level->_104--;
    }

    if (level->_104 < 0x32)
    {
        level->_40[4] = 0xFA0;
    }
}

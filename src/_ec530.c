#include "common.h"
#include "types/GameState.h"

void func_80159720_EC530(int* arg0, int** arg1)
{
    arg0[0x10/4] |= 0xC00;
    arg1[0xC/4][0x10/4] |= 0x800;
}

extern int D_8006FA54;
extern char D_80078171;
extern int D_800B83C8;
extern int D_800E5CD4;
extern short D_800E5DB0;
extern int D_800E97CC;
extern char D_8014F34C;
extern char D_8014F354;
extern int D_80153A58;
extern int D_80156BDC;
extern int D_80157034;
extern int D_801574FC;

void func_8015974C_EC55C(void) {

    func_8002C1AC(0);
    switch (D_8006FA54-1) {
    case 0:
        D_8006FA54 = 2;
        func_800576F0(&D_80153A58, 1, 0);
    break;
    case 2:
        if (D_80156BDC != 0) {
            func_80040170(0xA);
            D_8006FA54 = 0xC;
            return;
        }
        D_80078171 = 1;
        D_8006FA54 = 8;
        func_800576F0(&D_80153A58, 3, 0);
        return;
    case 8:
        D_8006FA54 = 4;
        func_800576F0(&D_80153A58, 2, 0);
        return;
    case 4:
        if (D_80156BDC != 0) {
            func_80040170(0xA);
            D_8006FA54 = 0xC;
            return;
        }
        if (D_800E5DB0 & 0x1000) {
            if (D_800E97CC != 0) {
                D_800E5CD4 = 0;
                D_8006FA54 = 6;
                return;
            }
            func_80040170(0xC);
            D_8006FA54 = 0xC;
            return;
        }
        if ((D_800B83C8 < 0x100) || (D_800E97CC >= 0x10)) {
            D_8014F354 = 0;
            func_80040170(0x14);
        } else {
            D_8006FA54 = 0xD;
            return;
        }
        break;
    case 5:
        if ((D_80156BDC != 0) && (D_80156BDC != 5)) {
            func_80040170(0xA);
            D_8006FA54 = 0xC;
            return;
        }
        if (D_800E5CD4 < D_80157034) {
            D_8006FA54 = 7;
            func_800576F0(&D_80153A58, 4, 0);
            return;
        }
        D_8014F354 = 0;
        func_80040170(0xB);
        D_8014F34C = func_80014DD4(-1);
        D_801574FC = D_8014F34C;
        D_8006FA54 = 0xC;
        return;
        case 12:
        func_80040170(0x12);
        break;
    }
}

extern char D_8006CF20;
extern int D_8006FA54;

void func_801599A8_EC7B8(short* arg0, short** arg1) {
    D_8006CF20 = 0;
    D_8006FA54 = 0xD;
    ((int*)arg0)[0x104/4] = 0;
    ((int*)arg0)[0x10/4] |= 0x400;
    func_8002C1AC(0);
    arg1[0x8/4][0x30/2] = 0xFA0;
    arg0[0x60/2] = 0x3FE;
    arg0[0x62/2] = 0x6E1;
    arg0[0x64/2]= 1;
    arg0[0x48/2] = 0x10EC;
    arg0[0x4A/2] = 0x12C0;
    arg0[0x4C/2] = -0x460;
}

INCLUDE_RODATA("asm/nonmatchings/_ec530", D_8015A0A4_ECEB4);

extern unsigned short D_800E5DB2;
extern int D_8015A0A4_ECEB4;

void func_80159A3C_EC84C(int* arg0, int** arg1) {
    func_8002C1AC(0);
    arg1[0xC/4][0x10/4] |= 0x800;
    
    if (arg0[0x104/4] < 0x50) {
        arg0[0x104/4]++;
    }
    if ((D_800E5DB2 & 0x9000) || (arg0[0x104/4] == 0x50)) {
        func_800396E0(&D_8015A0A4_ECEB4, "logo1", gpGameState8);
    }
}

void func_80159AE4_EC8F4(int* arg0)
{
    ((short*)arg0)[0x64/2] = 0xC8;
    arg0[0x104/4] = 0x50;
    arg0[0x10/4] |= 0x400;
}

FORCE_INLINE void func_80159B04_EC914_dec(int* a)
{
    (*a)--;
}

void func_80159B04_EC914(int* arg0) {
    func_80159B04_EC914_dec(&arg0[0x104/4]);
    
    if ((D_800E5DB2 & 0x9000) != 0 || arg0[0x104/4] == 0)
    {
        func_800396E0(&D_8015A0A4_ECEB4, "logo2", gpGameState8);
    }
    
}

void func_80159B68_EC978(short* arg0, short** arg1)
{
    arg0[0x60/2] = 0x802;
    arg0[0x62/2] = -0x400;
    arg0[0x64/2] = 0;
    arg0[0x48/2] = arg1[0x8/4][0] + 0x32;
    arg0[0x4A/2] = 0x64;
    arg0[0x4C/2] = 0x64;
}

void func_80159BA0_EC9B0(void) {
}

extern short* D_8006CFA0;
void func_80159BA8_EC9B8(short* arg0, short** arg1)
{
    ((int*)arg0)[0x104/4] = 0;
    ((int*)arg0)[0x10/4] |= 0x400;
    func_8002C1AC(0);
    arg0[0x60/2] = 0x400;
    arg0[0x62/2] = 0x6D6;
    arg0[0x48/2] = 0x1306;
    arg0[0x4A/2] = 0x1194;
    arg0[0x64/2] = 0;
    arg0[0x4C/2] = -0x96;
    arg1[0x8/4][0x4/2] += 0xE6;
    arg1[0x8/4][0x2/2] -= 0xC8;
    arg1[0x8/4][0] = D_8006CFA0[0x48/2];
    ((char*)arg0)[0x4E] = 0;
    arg0[0x5E/2] = 0;
}

void func_80159C68_ECA78(int* arg0)
{
    if (arg0[0x104/4] < 0x50) {
        arg0[0x104/4]++;
    }
    
    if ((D_800E5DB2 & 0x9000) || (arg0[0x104/4] == 0x50)) {
        func_8001A790();
    }
}

extern int D_8006D578;
extern int* D_80157050;

void func_80159CC8_ECAD8(void) {
    int* temp;

    temp = D_80157050;
    D_80157050 += 2;
    temp[0] = 0x06000000;
    temp[1] = (int)&D_8006D578;
    func_80030DD8("THERE IS NO CONTROLLER", 0x44, 0x46, 1);
    func_80030DD8("CONNECTED IN CONTROLLER", 0x3E, 0x64, 1);
    func_80030DD8("SOCKET ONE. SHUT OFF", 0x48, 0x82, 1);
    func_80030DD8("POWER, INSERT A", 0x55, 0xA0, 1);
    func_80030DD8("CONTROLLER AND RESTART", 0x3D, 0xBE, 1);
    temp = D_80157050;
    D_80157050 += 2;
    temp[0] = 0xE7000000;
    temp[1] = 0;
}

INCLUDE_ASM("asm/nonmatchings/_ec530", func_80159DA0_ECBB0);

INCLUDE_ASM("asm/nonmatchings/_ec530", func_80159EF0_ECD00);

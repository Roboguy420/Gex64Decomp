#include "common.h"
#include "types/GameState.h"
#include "types/G2String.h"

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80041FD0);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80042120);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80042184);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80042330);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80042674);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80042A4C);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80042CC0);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_800434BC);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80043708);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_800437F0);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80043958);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80043B50);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80043BCC);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80044104);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80044428);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_800444B8);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80044518);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_800445F4);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80044A9C);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80044B2C);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80044B98);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80044C6C);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80044FF0);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80045200);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80045320);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_800454E4);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80045638);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80046148);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_800462C0);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80046660);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80046730);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_8004675C);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80046924);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80046978);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_800469A0);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80046A18);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80046AA0);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80046C48);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80046CB0);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80046CE4);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80046D04);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80046DA4);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80046DDC);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80046E70);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80046E88);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80046F20);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80047058);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80047240);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_800472A4);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_800472F0);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80047344);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_800473A4);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80047438);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80047724);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80047768);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80047904);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_800479AC);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80047D10);

extern int D_800785CC[];
extern char D_8007E720[8]; // "fpower__"

void func_80047D20(int arg0, int arg1) {
    int result;
    G2String*** temp_v0;

    result = D_800785CC[arg0];
    if (arg1 == 0) {
        temp_v0 = ((G2String******)gpGameState8)[3][8][0x4C];
        result = 0;
        if (temp_v0 != NULL) {
            result = G2String_Compare(temp_v0[6][8], D_8007E720);
        }
    }
    D_800785CC[arg0] = result;
}

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80047DB4);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80047DD4);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80047DF4);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80047E64);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80047F5C);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_800480AC);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_800480F8);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80048304);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80048454);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_8004848C);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_800484C4);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80048524);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_800485D4);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_800485F8);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_8004861C);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80048640);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80048828);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80048A4C);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80048CC8);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80048DE4);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80048E7C);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80049224);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80049250);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80049330);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80049340);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_800494C8);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80049684);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80049810);

INCLUDE_ASM("asm/nonmatchings/_42bd0", func_80049A58);

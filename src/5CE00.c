#include "common.h"

unsigned char* cstrchr(unsigned char* str, unsigned char c) {

    while(*str != c)
    {
        if (*str == '\0')
            return NULL;

        ++str;
    }

    return str;
}

int cstrlen(unsigned char* str) {

   unsigned char* c = str;
   while(*c != 0U)
       c++;

   return c - str;
}

char* cstrncpy(unsigned char* dst, char* src, int len) {
    int i;
    char* c = dst;

    for (i = len; i != 0; i--) {
        *(c++) = *(src++);
    }

    return dst;
}

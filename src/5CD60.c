#include "common.h"

unsigned char* _strchr(unsigned char* str, unsigned char c) {

    while(*str != c)
    {
        if (*str == '\0')
            return NULL;

        ++str;
    }

    return str;
}

int _strlen(char* str) {

   char* c = str;
   while(*c != 0U)
       c++;

   return c - str;
}

char* _strncpy(char* dst, char* src, int len) {
    int i;
    char* c = dst;

    for (i = len; i != 0; i--) {
        *(c++) = *(src++);
    }

    return dst;
}

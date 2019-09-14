#include<stdio.h>

typedef unsigned char BYTE;
int main(int argc, char *argv[])
{
    // static union { char c[4]; unsigned long mylong; } endian_test;
    static union { int x; char endian; } little = { '0' };
    // little.mylong = 0x12345678;
    printf("%x\n", little.x);
    return 0;
}
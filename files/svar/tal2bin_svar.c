/**
 * int 1: [0000...0001]
 * int 2: [0000...0010]
 * int 8: [0000...1000]
 * int -1:[1111...1111]
 */
#include <stdio.h>

int main()
{
    // // 3) definer tal=10
    //int tal = -10;
    // Loop over int tal, mellem -15 til 15, og print bit representationen for de givne tal ud.
    printf("\n");
    int INT_SZ_BITS = sizeof(int)*8;
    unsigned int mask = 1<<(INT_SZ_BITS-1);
    for (int tal = -15; tal < 15; tal++)
    {
    
    // 4) lav en variabel unsigned int mask = 1<<int_sz_bits-1;
    //  tal:1 [000...0001] << 31 : ? [1000...0000]


    printf("Tal: [%i]_10, [",tal);
    // For hvert bit i tallet tal (loop, med iterator i), gør følgende:
    for (int i = 0; i < INT_SZ_BITS; i++)
    {
        (tal & mask >> i) ? printf("1") : printf("0");
    }
    
    printf("]_2\n");
    }
    return 0;
}

#include <stdio.h>

int main()
{
    int tal = 514234;
    int int_size_bits = sizeof(int)*8; // 32

    unsigned int mask = 1<<int_size_bits-1; // bitshift 31 til venstre
    //[0000...00001] << 31 ==> 
    //[1000...0]
    // [0001] << 2 ==> [0100]

    for (int i = 0; i < int_size_bits; i++){

        if (tal & mask>>i){ 
            // mask:    [1000..0000] // itr 0
            // tal:     [0000..1010]

            // mask>>1  [0100..0000] // itr 1
            // tal:     [0000..1010]

            // ...
            // mask>>29 [0000..1000] // itr ?
            // tal:     [0000..1010] ==> [0000..1000] == 8
            printf("1");
        } else {
            printf("0");
        }

        (tal & mask>>i)? printf("1") : printf("0");

    }
    

    return 0;
}

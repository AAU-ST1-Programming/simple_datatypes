#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(200);

    printf("CHAR_BIT    :   %d\n", CHAR_BIT);
    printf("CHAR_MAX    :   %d\n", CHAR_MAX);
    printf("CHAR_MIN    :   %d\n", CHAR_MIN);
    printf("UCHAR_MAX   :   %d\n", UCHAR_MAX);
    printf("SCHAR_MAX   :   %d\n", SCHAR_MAX);
    printf("SCHAR_MIN   :   %d\n", SCHAR_MIN);
    printf("INT_MAX     :   %d\n", INT_MAX);
    printf("INT_MIN     :   %d\n", INT_MIN);
    printf("UINT_MAX    :   %u\n", UINT_MAX);
    printf("LONG_MAX    :   %ld\n", LONG_MAX);
    printf("LONG_MIN    :   %ld\n", LONG_MIN);
    printf("ULONG_MAX   :   %lu\n", ULONG_MAX);
    printf("SHRT_MAX    :   %d\n", SHRT_MAX);
    printf("SHRT_MIN    :   %d\n", SHRT_MIN);
    printf("USHRT_MAX   :   %d\n", USHRT_MAX);

}

void loop() {
  // put your main code here, to run repeatedly:

}

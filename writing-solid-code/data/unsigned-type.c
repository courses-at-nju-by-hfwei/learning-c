// File: unsigned-type.c
// Created by hengxin on 17-10-8.
//

#include <stdio.h>
#include <stdint.h>

void unsignedint_conversion();
void unsignedint_arithmetic();
void unsignedint_round();

int main() {
    unsignedint_conversion();
    unsignedint_arithmetic();
    unsignedint_round();
}

/**
 * Suggestion 2-5: Be careful with unsigned types
 * Code 1-6 and Code 1-8
 */
void unsignedint_conversion() {
    puts("***** In unsignedint_conversion() ***** ");

    int array[] = { 1, 2, 3, 4, 5 };
    int i = -1;

    /**
     * sizeof(): size_t which is of an unsigned type
     * i: int will converted to unsigned int
     * (unsigned int) -1 = 4294967295 (on my system)
     * Correction: i <= (int) sizeof(array)
     */
    printf("(unsigned int) -1 = %u\n", (unsigned int) -1);

    if (i <= sizeof(array))
        puts("i <= sizeof(array)");
    else
        puts("i > sizeof(array)");
}

/**
 * Suggestion 2-5: Be careful with unsigned types
 * Code 1-7
 */
void unsignedint_arithmetic() {
    puts("***** In unsignedint_arithmetic() ***** ");

    int a = 3;
    unsigned int b = 4;

    printf("%d\n", a - b);
    printf("%u\n", a - b);
    printf("%d\n", (a - b) >> 1);
}

/**
 * Suggestion 2-6: Preventing
 * Code 1-9 and Code 1-10
 */
void unsignedint_round() {
    puts("***** In unsignedint_round() ***** ");

    unsigned int a = UINT32_MAX;
    unsigned int b = 2;
    unsigned int c = 4;

    printf("a + b = %u\n", a + b);
    printf("b - c = %u\n", b - c);

    /**
     * Code 1-10: a solution
     */
    if (UINT32_MAX - a < b)
        printf("a (%u) + b (%u) is greater than UINT32_MAX.\n", a, b);
    else
        printf("a + b = %u\n", a + b);

    if (b < c)
        printf("b (%u) - c (%u) is a negative.\n", b, c);
    else
        printf("b - c = %u\n", b - c);
}

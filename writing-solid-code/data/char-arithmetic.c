// File: char-arithmetic.c
// Created by hengxin on 17-10-7.
// Suggestion 2-2: Using `signed char` or `unsigned char` explicitly
// Code 1-1 and 1-2

#include <stdio.h>

int main() {
    /*
     * GCC takes `char` as `signed char`. But 150 is beyond the range [-127, 127].
     */
    char c = 150;
    int i = 900;
    /**
     * The result on GCC is `-8`.
     * To get `6`, using `unsigned char c = 150`.
     */
    printf("i/c = %d\n", i/c);
    return 0;
}


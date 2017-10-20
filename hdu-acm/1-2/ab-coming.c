// File: ab-coming.c
// Created by hengxin on 17-10-11.

/**
 * Problem 1.2.2: A+B Coming
 *   Many classmates said to me that A+B is must needs.
 *   If you can’t AC this problem, you would invite me for night meal.
 *
 * Input:
 *   Input may contain multiple test cases.
 *   Each case contains A and B in one line.
 *   A, B are hexadecimal number.
 *   Input terminates by EOF.
 *
 * Sample Input:
 *   1 9
 *   A B
 *   a b
 *
 * Output:
 *   Output A+B in decimal number in one line.
 *
 * Sample Output:
 *   10
 *   21
 *   21
 */

#include <stdio.h>

int main(void) {
    unsigned int a = 0, b = 0;
    while (scanf("%x %x", &a, &b) != EOF)
        printf("%d\n", a + b);

    return 0;
}


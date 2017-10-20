// File: ab-III.c
// Created by hengxin on 17-10-10.

/**
 * Problem 1.1.3: A+B for Input-Output Practice (III)
 *   Your task is to Calculate a + b.
 *
 * Input:
 *   Input contains multiple test cases.
 *   Each test case contains a pair of integers a and b, one pair of integers per line.
 *   A test case containing 0 0 terminates the input and this test case is not to be processed.
 *
 * Sample Input:
 *   1 5
 *   10 20
 *   0 0
 *
 * Output:
 *   For each pair of input integers a and b you should output the sum of a and b in one line,
 *   and with one line of output for each line in input.
 *
 * Sample Output:
 *   6
 *   30
 */

#include <stdio.h>

int main(void) {
    int a = 0, b = 0;

    while (scanf("%d %d", &a, &b) != EOF) {
        if (a == 0 && b == 0)
            return 0;
        printf("%d\n", a + b);
    }

    return 0;
}
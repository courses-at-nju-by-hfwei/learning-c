// File: ab-VII.c
// Created by hengxin on 17-10-10.

/**
 * Problem 1.1.7: A+B for Input-Output Practice (VII)
 *
 * Input: The input will consist of a series of pairs of integers a and b,
 *   separated by a space, one pair of integers per line.
 *
 * Sample Input:
 *   1 5
 *   10 20
 *
 * Output: For each pair of input integers a and b
 *   you should output the sum of a and b, and followed by a blank line.
 *
 * Sample Output:
 *   6
 *
 *   30
 */

#include <stdio.h>

int main(void) {
    int a = 0, b = 0;

    while (scanf("%d %d", &a, &b) != EOF)
        printf("%d\n\n", a + b);

    return 0;
}
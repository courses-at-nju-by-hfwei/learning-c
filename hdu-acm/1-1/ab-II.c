// File: ab-II.c
// Created by hengxin on 17-10-10.

/**
 * Problem 1.1.2: A+B for Input-Output Practice (II)
 *   Your task is to Calculate a + b.
 *
 * Input:
 *   Input contains an integer N in the first line, and then N lines follow.
 *   Each line consists of a pair of integers a and b,
 *   separated by a space, one pair of integers per line.
 *
 * Sample Input:
 *   2
 *   1 5
 *   10 20
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
    int line_no = 0;
    scanf("%d", &line_no);

    int a = 0, b = 0;
    for (int i = 0; i < line_no; ++i) {
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }

    return 0;
}
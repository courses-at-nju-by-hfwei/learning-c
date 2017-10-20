// File: ab-VI.c
// Created by hengxin on 17-10-10.

/**
 * Problem 1.1.6: A+B for Input-Output Practice (VI)
 *   Your task is to Calculate a + b.
 *
 * Input:
 *   Input contains multiple test cases, and one case one line.
 *   Each case starts with an integer N, and then N integers follow in the same line.
 *
 * Sample Input:
 *   4 1 2 3 4
 *   5 1 2 3 4 5
 *
 * Output:
 *   For each test case you should output the sum of N integers in one line,
 *   and with one line of output for each line in input.
 *
 * Sample Output:
 *   10
 *   15
 */

#include <stdio.h>

int main(void) {
    int num = 0;
    while (scanf("%d", &num) != EOF) {
        int ele = 0, sum = 0;
        for (int i = 0; i < num; ++i) {
            scanf("%d", &ele);
            sum += ele;
        }

        printf("%d\n", sum);
    }

    return 0;
}

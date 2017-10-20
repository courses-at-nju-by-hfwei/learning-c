// File: ab-IV.c
// Created by hengxin on 17-10-10.

/**
 * Problem 1.1.4: A+B for Input-Output Practice (IV)
 *   Your task is to Calculate the sum of some integers.
 *
 * Input:
 *   Input contains multiple test cases.
 *   Each test case contains a integer N, and then N integers follow in the same line.
 *   A test case starting with 0 terminates the input and this test case is not to be processed.
 *
 * Sample Input:
 *   4 1 2 3 4
 *   5 1 2 3 4 5
 *   0
 *
 * Output:
 *   For each group of input integers you should output their sum in one line,
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
        if (num == 0)
            return 0;

        int ele = 0, sum = 0;
        for (int i = 0; i < num; ++i) {
            scanf("%d", &ele);
            sum += ele;
        }

        printf("%d\n", sum);
    }

    return 0;
}

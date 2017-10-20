// File: ab-V.c
// Created by hengxin on 17-10-10.

/**
 * Problem 1.1.5: A+B for Input-Output Practice (V)
 *   Your task is to calculate the sum of some integers.
 *
 * Input:
 *   Input contains an integer N in the first line, and then N lines follow.
 *   Each line starts with a integer M, and then M integers follow in the same line.
 *
 * Sample Input:
 *   2
 *   4 1 2 3 4
 *   5 1 2 3 4 5
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
    int line_no = 0;
    scanf("%d", &line_no);

    int num = 0;
    for (int i = 0; i < line_no; ++i) {
        scanf("%d", &num);

        int ele = 0, sum = 0;
        for (int j = 0; j < num; ++j) {
            scanf("%d", &ele);
            sum += ele;
        }

        printf("%d\n", sum);
    }

    return 0;
}
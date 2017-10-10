// File: ab-VIII.c
// Created by hengxin on 17-10-10.

/**
 * Problem 1.1.8: A+B for Input-Output Practice (VIII)
 *
 * Input: Input contains an integer N in the first line,
 *   and then N lines follow. Each line starts with a integer M,
 *   and then M integers follow in the same line.
 *
 * Output: For each group of input integers you should output their sum in one line,
 *   and you must note that there is a blank line between outputs.
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

        if (i == line_no - 1)
            printf("%d\n", sum);
        else
            printf("%d\n\n", sum);
    }

    return 0;
}

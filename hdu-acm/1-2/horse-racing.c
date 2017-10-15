// File: horse-racing.c
// Created by hengxin on 17-10-14.

/**
 * Problem 1.3.1: Tian Ji -- The Horse Racing
 *
 * Description:
 *
 * Input:
 *   The input consists of up to 50 test cases.
 *   Each case starts with a positive integer n (n <= 1000) on the first line,
 *   which is the number of horses on each side.
 *   The next n integers on the second line are the speeds of Tian’s horses.
 *   Then the next n integers on the third line are the speeds of the king’s horses.
 *   The input ends with a line that has a single 0 after the last test case.
 *
 * Output:
 *   For each input case, output a line containing a single number,
 *   which is the maximum money Tian Ji will get, in silver dollars.
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_HORSES_NUM 1000
#define OUTCOMES 3
enum OUTCOME { WIN, DRAW, LOSE };
#define DOLLARS_PER_ROUND 200

void winning_rounds(int *tian_horses, int *king_horses, int horses_num, int *outcome);
int compare(const void *a, const void *b);
int score(int *outcome);

int main() {
    int horses_num = 0;

    int tian_horses[MAX_HORSES_NUM];
    int king_horses[MAX_HORSES_NUM];
    int dollar = 0;

    while (scanf("%d", &horses_num) == 1 && horses_num != 0) {
        for (int i = 0; i < horses_num; ++i)
            scanf("%d", &tian_horses[i]);

        for (int i = 0; i < horses_num; ++i)
            scanf("%d", &king_horses[i]);

        qsort(tian_horses, horses_num, sizeof(int), compare);
        qsort(king_horses, horses_num, sizeof(int), compare);

        int outcome[OUTCOMES] = { 0, 0, 0 };
        winning_rounds(tian_horses, king_horses, horses_num, outcome);
        dollar = score(outcome) * DOLLARS_PER_ROUND;
        printf("%d\n", dollar);
    }

    return 0;
}

void winning_rounds(int *tian_horses, int *king_horses, int horses_num, int *outcome) {
    if (horses_num == 0)
        return;

    if (tian_horses[0] > king_horses[0]) {
        outcome[WIN]++;
        winning_rounds(tian_horses + 1, king_horses + 1, horses_num - 1, outcome);
    } else if (tian_horses[0] < king_horses[0]) {
        outcome[LOSE]++;
        winning_rounds(tian_horses + 1, king_horses, horses_num - 1, outcome);
    } else if (tian_horses[horses_num - 1] > king_horses[horses_num - 1]) {
        outcome[WIN]++;
        winning_rounds(tian_horses, king_horses, horses_num - 1, outcome);
    } else {// "<="
        if (tian_horses[0] < king_horses[horses_num - 1])
            outcome[LOSE]++;
        else // "=="
            outcome[DRAW]++;
        winning_rounds(tian_horses + 1, king_horses, horses_num - 1, outcome);
    }

}

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int score(int *outcome) {
    return outcome[WIN] - outcome[LOSE];
}

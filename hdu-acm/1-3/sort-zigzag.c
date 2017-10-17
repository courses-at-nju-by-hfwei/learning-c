// File: sort-zigzag
// Created by hengxin on 17-10-16.

/**
 * Problem 1.3.2: OrOrOrOrz (Zigzag Sorting)
 *   Give you a sequence of distinct integers, choose numbers as follows:
 *   first choose the biggest, then smallest, then second biggest, second smallest etc.
 *   Until all the numbers was chosen.
 *   For example, give you 1 2 3 4 5, you should output 5 1 4 2 3
 *
 * Input:
 *   There are multiple test cases, each case begins with one integer N(1 <= N <= 10000),
 *   following N distinct integers.
 *
 * Output:
 *   Output a sequence of distinct integers described above.
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_NUM_OF_INTEGERS 10000

int *zigzag(int *integers, int num);
int compare (const void * a, const void * b);

int main(void) {
    int num = 0;
    int integers[MAX_NUM_OF_INTEGERS];

    while (scanf("%d", &num) != EOF) {
        for (int i = 0; i < num; ++i)
            scanf("%d", &integers[i]);

        int *zigzag_integers = zigzag(integers, num);

        for (int i = 0; i < num - 1; ++i)
            printf("%d ", *(zigzag_integers + i));
        printf("%d\n", *(zigzag_integers + num - 1));
    }

    return 0;
}

int *zigzag(int *integers, int num) {
    qsort(integers, num, sizeof(int), compare);

    int *zigzag_integers = malloc(sizeof(*zigzag_integers) * num);

    int small_index = 0, large_index = num - 1, zigzag_index = 0;
    while (small_index < large_index) {
        zigzag_integers[zigzag_index++] = integers[large_index];
        zigzag_integers[zigzag_index++] = integers[small_index];

        small_index++;
        large_index--;
    }

    if (small_index == large_index) // when `num` is odd
        zigzag_integers[zigzag_index] = integers[small_index];

    return zigzag_integers;
}

int compare (const void * a, const void * b) {
    return ( *(int*)a - *(int*)b );
}

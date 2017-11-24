// File: c/pointers/function-pointer/filter-fp.c

// Created by hengxin on 17-11-22.

/*
 * Illustration of function pointers
 * using "filter" in functional programming
 *
 * For programming tutorial 1-5 on function pointers.
 */

#include <stdio.h>
#include "../../array/array.h"

typedef int (*predicate)(int n);

void filter(int *vals, int n, predicate cond);
int even(int n);
int gt_fifty(int n);

int main(void) {
    int n = 0;
    printf("%s", "Enter the size of the array: ");
    scanf("%d", &n);

    int *vals = generate_values(n);
    print(vals, n);

    printf("%s", "The even values are as followings: \n");
    filter(vals, n, even);

    printf("%s", "The values greater than 50 are as followings: \n");
    filter(vals, n, gt_fifty);
}

void filter(int *vals, int n, predicate cond) {
    for (int i = 0; i < n; ++i) {
        if (cond(vals[i]))  // call the actual function
            printf("%d ", vals[i]);
    }
    puts("");
}

int even(int n) {
    return (n % 2 == 0);
}

int gt_fifty(int n) {
    return n > 50;
}
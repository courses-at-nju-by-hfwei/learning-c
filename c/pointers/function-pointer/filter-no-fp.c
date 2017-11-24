// File: c/pointers/function-pointer/filter-no-fp.c

// Created by hengxin on 17-11-22.

/*
 * Implementing a filter without using function pointers.
 *
 * For programming tutorial 1-5 on function pointers.
 */

#include <stdio.h>
#include "../../../c/array/array.h"

int main(void) {
    int n = 0;
    scanf("%d", &n);

    int *vals = generate_values(n);

    for (int i = 0; i < n; ++i) {
        if (vals[i] % 2 == 0)
            printf("%d ", vals[i]);
    }
}

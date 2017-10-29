// File: test.c
// Created by hengxin on 17-10-29.
// Only for quick tests

#include <stdio.h>
#include <math.h>

int main(void) {
    // (int) cannot be removed
    printf("%d\n", (int) pow(2, 3));

    // initialization of array
    int array[5] = {1};
    for (int i = 0; i < 5; ++i) {
        printf("%d ", array[i]);
    }
}

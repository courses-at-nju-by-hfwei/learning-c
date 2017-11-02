// File: vla.c
// Created by hengxin on 17-11-2.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("%s", "Enter the number of ints: ");
    int n = 0;
    scanf("%d", &n);

    printf("Size of int[2] is: %lu.\n", sizeof(int[2]));
    // 1D vla from the heap
    int *pa = malloc(sizeof(int[n]));
    free(pa);

    // 2D vla from the heap
    printf("Size of int[2][5] is: %lu.\n", sizeof(int[2][5]));
    int (*ppa)[n] = malloc(sizeof(int[n][n]));
    free(ppa);
}

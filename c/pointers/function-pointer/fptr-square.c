// File: c/pointers/function-pointer/fptr-square.c

// Created by hengxin on 17-11-22.

/*
 * Illustration of function pointer.
 *
 * For programming tutorial 1-5 on function pointers.
 */

#include <stdio.h>

int (*fptr) (int);
int square(int n) {
    return n * n;
}

int main(void) {
    int n = 5;

    fptr = square;
    printf("The square of %d is %d.\n", n, fptr(n));

    int (*fptr2) (int) = square;
    printf("The square of %d is %d.\n", n, fptr2(n));

    // Error: cannot resolve the type "fptr"
//    fptr fp = square;
}

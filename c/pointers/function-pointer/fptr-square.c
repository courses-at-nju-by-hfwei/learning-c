// File: c/pointers/function-pointer/fptr-square.c

// Created by hengxin on 17-11-22.
// Illustration of function pointer.

#include <stdio.h>

int (*fptr) (int);
int square(int n) {
    return n * n;
}

int main(void) {
    int n = 5;
    fptr = square;

    printf("The square of %d is %d", n, fptr(n));
}

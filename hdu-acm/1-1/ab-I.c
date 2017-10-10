// File: ab-I
// Created by hengxin on 17-10-10.
// Problem 1.1.1: A+B for Input-Output Practice (I)

#include <stdio.h>

int main(void) {
    int a = 0, b = 0;

    while (scanf("%d %d", &a, &b) != EOF)
        printf("%d\n", a + b);

    return 0;
}


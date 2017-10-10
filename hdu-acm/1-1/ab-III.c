// File: ab-III.c
// Created by hengxin on 17-10-10.
// Problem 1.1.3: A+B for Input-Output Practice (III)

#include <stdio.h>

int main(void) {
    int a = 0, b = 0;

    while (scanf("%d %d", &a, &b) != EOF) {
        if (a == 0 && b == 0)
            return 0;
        printf("%d\n", a + b);
    }

    return 0;
}
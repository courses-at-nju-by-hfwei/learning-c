// File: ab-II.c
// Created by hengxin on 17-10-10.
// Problem 1.1.2: A+B for Input-Output Practice (II)

#include <stdio.h>

int main(void) {
    int line_no = 0;
    scanf("%d", &line_no);

    int a = 0, b = 0;
    for (int i = 0; i < line_no; ++i) {
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }

    return 0;
}
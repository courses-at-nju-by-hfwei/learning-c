// File: ab-V.c
// Created by hengxin on 17-10-10.
// Problem 1.1.5: A+B for Input-Output Practice (V)

#include <stdio.h>

int main(void) {
    int line_no = 0;
    scanf("%d", &line_no);

    int num = 0;
    for (int i = 0; i < line_no; ++i) {
        scanf("%d", &num);

        int ele = 0, sum = 0;
        for (int j = 0; j < num; ++j) {
            scanf("%d", &ele);
            sum += ele;
        }

        printf("%d\n", sum);
    }

    return 0;
}
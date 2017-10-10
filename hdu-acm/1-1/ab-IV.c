// File: ab-IV.c
// Created by hengxin on 17-10-10.
// Problem 1.1.4: A+B for Input-Output Practice (IV)

#include <stdio.h>

int main(void) {
    int num = 0;
    while (scanf("%d", &num) != EOF) {
        if (num == 0)
            return 0;

        int ele = 0, sum = 0;
        for (int i = 0; i < num; ++i) {
            scanf("%d", &ele);
            sum += ele;
        }

        printf("%d\n", sum);
    }

    return 0;
}

// File: c/pointers/function-pointer/op-evaluate-no-fptr.c
// Created by hengxin on 17-11-22.

#include <stdio.h>

int main(void) {
    char c;
    int left_operand = 0;
    int right_operand = 0;

    scanf("%c %d %d", &c, &left_operand, &right_operand);

    switch (c) {
        case '+':
            printf("%d", left_operand + right_operand);
        case '-':
            printf("%d", left_operand - right_operand);
        default:
            printf("Operation Undefined: %c", c);
    }

    return 0;
}

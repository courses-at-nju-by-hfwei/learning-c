// File: c/array/array.h
// Created by hengxin on 17-11-22.
//

#ifndef LEARNING_C_CPLUSPLUS_ARRAY_H
#define LEARNING_C_CPLUSPLUS_ARRAY_H

#include <stdlib.h>
#include <time.h>

int *generate_values(int n);
void print(int *values, int n);

int *generate_values(int n) {
    srand((unsigned) time(0));

    int *values = (int *) malloc(sizeof(int) * n);
    for (int i = 0; i < n; ++i) {
        values[i] = rand() % 100;
    }

    return values;
}

void print(int *values, int n) {
    for (int i = 0; i < n; ++i) {
        printf("%d\t", values[i]);
    }
    puts("");
}

#endif //LEARNING_C_CPLUSPLUS_ARRAY_H

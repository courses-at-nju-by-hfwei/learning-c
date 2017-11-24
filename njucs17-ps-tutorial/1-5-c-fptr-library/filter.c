// Created by hengxin on 17-11-24.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef int (*predicate)(int n);

int *generate_values(int n);
void print_values(int *vals, int n);
int even(int n);
int gt_fifty(int n);
void filter(int *vals, int n, predicate cond);

int main(void) {
    int n = 20;

    int *vals = generate_values(n);
    print_values(vals, n);

    filter(vals, n, even);

    filter(vals, n, gt_fifty);
}

void filter(int *vals, int n, predicate cond) {
    for (int i = 0; i < n; ++i) {
        if (cond(vals[i]))
            printf("%d ", vals[i]);
    }
    puts("");
}

int even(int n) {
    return n % 2 == 0;
}

int gt_fifty(int n) {
    return n > 50;
}

int *generate_values(int n) {
    srand((unsigned) time(0));

    int *values = (int *) malloc(sizeof(int) * n);
    for (int i = 0; i < n; ++i) {
        values[i] = rand() % 100;
    }

    return values;
}

void print_values(int *vals, int n) {
    for (int i = 0; i < n; ++i) {
        printf("%d\t", vals[i]);
    }
    puts("");
}

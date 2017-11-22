// File: c/pointers/function-pointer/compare.c
// Created by hengxin on 17-11-22.
// Illustration of "function pointer" using c "qsort"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *generate_values(int n);
void print(int *values, int n);

int compare(const void *a, const void *b) {
    return (*((int *) a)) - (*((int *) b));
}

int compare_reverse(const void *a, const void *b) {
    return (*((int *) b)) - (*((int *) a));
}

int compare_random(const void *a, const void *b) {
    int random_integer = rand() % 101 - 50;

    if (random_integer > 0) return 1;
    if (random_integer < 0) return -1;
    return 0;
}

int main(void) {
    // natural ordering
    int n = 100;
    int *values = generate_values(n);

    qsort(values, n, sizeof(int), compare);

    puts("The natural order is:");
    print(values, n);

    // reverse ordering
    values = generate_values(n);

    qsort(values, n, sizeof(int), compare_reverse);

    puts("\nThe reverse order is:");
    print(values, n);

    // random ordering
    values = generate_values(n);

    srand((unsigned) time(0));
    qsort(values, n, sizeof(int), compare_random);

    puts("\nThe random order is:");
    print(values, n);

    return 0;
}

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
}

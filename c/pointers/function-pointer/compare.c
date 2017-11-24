// File: c/pointers/function-pointer/compare.c
// Created by hengxin on 17-11-22.
// Illustration of "function pointer" using c "qsort"

#include <stdio.h>
#include "../../../c/array/array.h"

int compare(const void *a, const void *b) {
    return (*((int *) a)) - (*((int *) b));
}

int compare_reverse(const void *a, const void *b) {
    return (*((int *) b)) - (*((int *) a));
}

/*
 * Decide the ordering randomly,
 * ignoring the values of @param a and @param b.
 */
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

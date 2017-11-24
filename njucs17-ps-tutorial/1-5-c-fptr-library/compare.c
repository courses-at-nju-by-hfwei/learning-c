//
// Created by hengxin on 17-11-24.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *generate_values(int n);
void print_values(int *vals, int n);
int compare(const void *a, const void *b);
int compare_reverse(const void *a, const void *b);

int main(void) {
    int n = 20;
    int *vals = generate_values(n);

    qsort(vals, n, sizeof(int), compare);
    print_values(vals, n);

    qsort(vals, n, sizeof(int), compare_reverse);
    print_values(vals, n);
}

int compare(const void *a, const void *b) {
    return (*(int *) a) - (*(int *)b);
}

int compare_reverse(const void *a, const void *b) {
    return (*(int *) b) - (*(int *)a);
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

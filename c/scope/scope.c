// File scope.c
// Created by hengxin on 17-10-29.
// Get familiar with the concept of scope

#include <stdio.h>

void test_vla(int n);

int main(void) {
    int n = 100;

    test_vla(n);
}

void test_vla(int n) {
    int vla[n];
    for (int i = 0; i < n; ++i) {
        vla[i] = i + 1;
        printf("%d ", vla[i]);
    }
}

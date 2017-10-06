// File: uninitialization.c
// Created by hengxin on 17-10-6.
// Illustration of Cppcheck;
// See http://www.reactive-systems.com/c-runtime-errors.html

#include <stdio.h>

#define SIZE 5
int sum(int *arr, int n);

int main(int argc, char **argv) {
    int arr[SIZE] = {1, 2, 3, 4, 5};
    printf("The sum is: %d.\n", sum(arr, SIZE));
}

int sum(int *arr, int n) {
    int sum;

    // Uninitialized variable; though it may produce the correct result.
    for (int i = 0; i < n; i++)
        sum += arr[i];

    return sum;
}

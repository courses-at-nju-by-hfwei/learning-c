// File: josephus.c
// Created by hengxin on 17-10-27.
// Solving the Josephus puzzle

#include <stdio.h>
#include <stdlib.h>

int solve_josephus(int n);
int survive(int *soldiers, int n);
int next_alive(int *soldiers, int n, int pos);
void test_josephus(int n);

int main(void) {
    int n = 0;
    printf("%s", "Enter the number of soldiers: ");
    scanf("%d", &n);

    test_josephus(n);
//    int survivor = solve_josephus(n);
//    printf("%d", survivor + 1);
}

int solve_josephus(int n) {
    int *soldiers = malloc(sizeof(int) * n);
    for (int i = 0; i < n; ++i) {
        soldiers[i] = i + 1;
    }

    return survive(soldiers, n);
}


int survive(int *soldiers, int n) {
    int killer = 0;
    int killed = 0;

    for (int i = 0; i < n - 1; ++i) {
        killed = next_alive(soldiers, n, killer);
        soldiers[killed] = 0; // DEAD
        killer = next_alive(soldiers, n, killed);
    }

    return killer;
}

/**
 * Return the array index of the next soldier
 * who is still alive, starting from @param pos.
 *
 * If no other alive soldiers (except soldier[pos]) exist,
 * pos will be returned.
 *
 * Precondition: soldier[pos] != KILLED
 */
int next_alive(int *soldiers, int n, int pos) {
    do {
        pos = (pos + 1) % n;
    } while (soldiers[pos] == 0);

    return pos;
}

/**
 * Test the function `josephus` with 1 .. limit
 * as the numbers of soldiers.
 */
void test_josephus(int n) {
    for (int i = 1; i <= n; ++i) {
        int survivor = solve_josephus(i);
        printf("%d: %d\n", i, survivor + 1);
    }
}

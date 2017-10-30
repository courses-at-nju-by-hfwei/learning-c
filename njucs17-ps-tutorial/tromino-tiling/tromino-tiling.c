// File: tromino-tiling.c
// Created by hengxin on 17-10-29.

/**
 * Solving the Tromino Tiling puzzle.
 *
 * The Tromino Tiling puzzle:
 *
 * Input:
 *   The power k.
 *   Then the size of the dashboard is 2^k * 2^k.
 *
 * Output:
 *   The tiling of the dashboard.
 */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>

#define REMOVED 0
#define INIT (-1)

void alloc_dashboard(int size, int (**dashboard)[][size]);
void generate_dashboard(int size, int dashboard[][size]);
void show_dashboard(int size, int dashboard[][size]);

int main(void) {
    int power = 0;
    printf("%s", "Please enter the power k: ");
    scanf("%d", &power);

    // Error: undefined reference to `power` without `lm`
    int size = (int) pow(2, power);

    int (*dashboard)[size][size];

    alloc_dashboard(size, &dashboard);
    generate_dashboard(size, *dashboard);
    assert(dashboard != NULL);

    show_dashboard(size, *dashboard);

    free(dashboard);
}

void alloc_dashboard(int size, int (**dashboard)[size][size] ) {
//    int dashboard[size][size];
    *dashboard = malloc(sizeof(int[size][size]));
    assert(*dashboard != NULL);
}

void generate_dashboard(int size, int dashboard[size][size]) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            dashboard[i][j] = INIT;
        }
    }

    // [0, size - 1]
    srand(time(NULL));
    dashboard[rand() % size][rand() % size] = REMOVED;
}

void show_dashboard(int size, int dashboard[][size]) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            printf("%d\t", dashboard[i][j]);
        }
        printf("%s", "\n");
    }
}

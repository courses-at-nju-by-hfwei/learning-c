// File: hanoi.c
// Created by hengxin on 17-10-9.
// Solving the Tower of Hanoi problem

#include <stdio.h>

void hanoi(int n);
void solve_hanoi(int n, char src, char mid, char dest);

int main() {
    hanoi(5);
}

void hanoi(int n) {
    solve_hanoi(n, 'A', 'C', 'B');
}

void solve_hanoi(int n, char src, char mid, char dest) {
    if (n == 1)
        printf("%c -\> %c\n", src, dest);
    else {
        solve_hanoi(n - 1, src, dest, mid);
        printf("%c -\> %c\n", src, dest);
        solve_hanoi(n - 1, mid, src, dest);
    }
}


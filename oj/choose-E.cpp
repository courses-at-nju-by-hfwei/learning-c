// The First OJ Test (2017-09-30)
// Created by hengxin on 17-9-30.

/**
 * Problem: Computing \choose{n}{r}
 * Input: n, r
 * Output: C^n_r
 */

#include <iostream>
using namespace std;

long long factorial(int x) {
    if (x == 0)
        return 1;
    return x * factorial(x-1);
}

int main() {
    int n = 0, r = 0;

    cin >> n >> r;
    cout << factorial(n) / factorial(r) / factorial(n - r) << endl;

    return 0;
}

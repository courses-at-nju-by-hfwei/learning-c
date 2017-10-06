// File: factorial.cpp
// Created by hengxin on 17-10-4.
// For debugging.

#include<iostream>
using namespace std;

long factorial(int n);
long recursive_factorial(int n);

int main(int argc, char **argv) {
    int n = 0;

    cout << "Input an integer:" << endl;
    cin >> n;

    long val = factorial(n);
    cout << "factorial(" << n << ") is " << val << endl;

    long rval = recursive_factorial(n);
    cout << "recursive_factorial(" << n << ") is " << rval << endl;

    return 0;
}

/**
 * Illustration of a breakpoint and watches
 */
long factorial(int n) {
    long result = 1;

//    while(n--) {
//        result *= n;
//    }

    while (n) {
        result *= n;
        n --;
    }

    return result;
}

/**
 * Illustration of a conditional breakpoint: n < 0
 */
long recursive_factorial(int n) {
    if (n == 0)
        return 1;

    return n * recursive_factorial(n - 1);
}

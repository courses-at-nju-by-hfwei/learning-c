// The First OJ Test (2017-09-30)
// Created by hengxin on 17-9-30.

/**
 * Problem: Sum of Numbers
 *
 * Input: 10 numbers
 * Output: sum of all positives, sum of all negatives, and sum of total numbers
 */

#include <iostream>
#include <iomanip>  // std::setprecision

using namespace std;

const int NUM = 10;
const int PRECISION = 2;

int main() {
    float x = 0, pos_sum = 0, neg_sum = 0;

    for (int i = 0; i < NUM; i++) {
        cin >> x;

        if (x > 0)
            pos_sum += x;
        else
            neg_sum += x;
    }

    // For std::setprecision():   http://www.cplusplus.com/reference/iomanip/setprecision/
    cout << std::fixed
        << std::setprecision(PRECISION)
        << pos_sum << ","
        << neg_sum << ","
        << pos_sum + neg_sum
        << endl;

    return 0;
}

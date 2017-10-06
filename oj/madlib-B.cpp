// The First OJ Test (2017-09-30)
// Created by hengxin on 17-9-30.

/**
 * Problem: Mad Lib
 *
 * Input: 7 keywords
 * Output: a leave note automatically generated according to a template
 */

#include <iostream>
using namespace std;

const int NUM = 7;

int main() {
    string keywords[NUM];

    // input a string array
    for (int i = 0; i < NUM; i++)
        cin >> keywords[i];

    cout << "Dear Instructor " << keywords[0] << "," << endl
            << "I am sorry that I am unable to turn in my homework at this time. First, I ate a rotten "
            << keywords[2] << ", which made me turn "
            << keywords[5] << "and extremely ill. I came down with a fever of "
            << keywords[3] << ". Next, my "
            << keywords[4] << " pet "
            << keywords[6] << " must have smelled the remains of the "
            << keywords[2] << "on my homework, because he ate it. I am currently rewriting my homework and hope you will accept it late." << endl
            << "Sincerely," << endl
            << keywords[1]
            << endl;
    return 0;
}


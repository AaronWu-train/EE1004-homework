/*
 * Homework:      Homework 2 - Problem 3
 * Title:         Compound Interest
 * Author:        Aaron Wu (B13901011)
 * Date:          2024-09-25
 */

#include <iostream>
#include <cmath>
using namespace std;

int32_t main() {

	const int N = 12; 
	double s, r;
	cin >> s >> r;
	r /= 100.0;

	double value = s * (pow(1.0+r, (double) N) - 1) / r;

	cout << (int64_t)value << endl;

    return 0;

}



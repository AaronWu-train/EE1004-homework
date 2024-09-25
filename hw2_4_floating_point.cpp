/*
 * Homework:	Homework 2 - Problem 4
 * Title:		IEEE 754 Floating Point 
 * Author:		Aaron Wu (B13901011)
 * Date:		2024-09-25
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int32_t main() {
	
	int32_t x;
	cin >> x;

	// not considering sign since input x is positive
	int32_t exponent = x >> 23;

	// value = 1 + \sum_1^23{b_{23-i} * 2^{-i}} (latex math format)
	float fraction = 1.0f;
	for (int i = 1; i <= 23; i++) {
		bool mask = static_cast<bool>((1 << (23-i)) & x);
		fraction += (float)mask * (float)pow(2.0, (double)-i);
	}

	fraction *=	pow(2.0, double(exponent - 127)); 

	cout << fixed << setprecision(5) << fraction << endl;

    return 0;

}


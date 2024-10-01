/*
 * Homework:	Homework 2 - Problem 2
 * Title:		1A2B
 * Author:		Aaron Wu (B13901011)
 * Date:		2024-10-01
 */

#include <iostream>
using namespace std;

int32_t main() {
	
	string x, y;
	cin >> x >> y;
	
	const int n = 4;
	int a = 0, b = 0;

	for (int i = 0; i < n; ++i) {
		if(x[i] == y[i]) a++;
	}
	
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (i == j) continue;
			if (x[i] == y[j]) b++;
		}
	}
	
	cout << a << "A" << b << "B" << endl;

    return 0;

}



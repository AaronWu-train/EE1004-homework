/*
 * Homework:	Homework 4 - Problem 4
 * Title:		Hollow Rhombus
 * Author:		Aaron Wu (B13901011)
 * Date:		2024-10-08
 */

#include <iostream>
using namespace std;

int32_t main() {

	int n, w;
	cin >> n >> w;

	if (n % 2 == 0 || w == 0) {
		cout << "No such rhombus." << endl;
	} else if (2 * w >= n) {
		cout << "Not a hollow rhombus." << endl;
	} else {

		for (int i = 1; i <= n; i += 2) {

			for (int j = 0; j < (n-i)/2; ++j) cout << ' ';
			if (2 * w < i) {
				for (int j = 0; j < w; ++j) cout << '*';
				for (int j = 0; j < i - (w * 2); ++j) cout << ' ';
				for (int j = 0; j < w; ++j) cout << '*';
			} else {
				for (int j = 0; j < i; ++j) cout << '*';
			}
			cout << endl;

		}
		for (int i = n-2; i > 0; i -= 2) {

			for (int j = 0; j < (n-i)/2; ++j) cout << ' ';
			if (2 * w < i) {
				for (int j = 0; j < w; ++j) cout << '*';
				for (int j = 0; j < i - (w * 2); ++j) cout << ' ';
				for (int j = 0; j < w; ++j) cout << '*';
			} else {
				for (int j = 0; j < i; ++j) cout << '*';
			}
			cout << endl;

		}
	}

    return 0;

}


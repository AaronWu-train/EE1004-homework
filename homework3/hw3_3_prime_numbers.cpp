/*
 * Homework:	Homework 3 - Problem 1
 * Title:		Count Prime Numbers
 * Author:		Aaron Wu (B13901011)
 * Date:		2024-10-01
 */

#include <iostream>
#include <vector>
using namespace std;

int32_t main() {
	
	vector<bool> is_prime(1001, 1);
	is_prime[0] = is_prime[1] = 0;
	for (int i = 2; i <= 1000; ++i) {
		if (!is_prime[i]) continue;
		for (int j = i*i; j <= 1000; j+=i) {
			is_prime[j] = 0;
		}
	}
	
	int n; cin >> n;
	vector<int> arr(n);
	for (auto &i : arr) cin >> i;

	int cnt = 0;
	for (auto &i : arr) {
		if (is_prime[i]) cnt++;
	}
	cout << cnt << endl;

    return 0;

}



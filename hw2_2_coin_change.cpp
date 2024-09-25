#include <iostream>
#include <vector>

using namespace std;

int32_t main() {
	int n1, n2;
	cin >> n1 >> n2;

	int n3 = n1 - n2;

	vector<int> coin = {50, 10, 5, 1};
	for (auto &i : coin) {
		int cnt = 0;
		while (n3 >= i) {
			n3 -= i;
			cnt++;
		}
		cout << cnt << endl;
	}	

}

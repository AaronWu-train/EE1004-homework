/*
 * Homework:	Homework 3 - Problem 1
 * Title:		Vending Machine
 * Author:		Aaron Wu (B13901011)
 * Date:		2024-10-01
 */

#include <iostream>
#include <iomanip>
using namespace std;

int32_t main() {
	int prices[6] = {0, 59, 480, 263, 1107, 825};
	int changes[7] = {1000, 500, 100, 50, 10, 5, 1};

	int selection, paid;
	cin >> selection >> paid;

	if (paid < prices[selection]) {

		cout << "That's not enough. You still need to pay:" << endl;

		int remain = prices[selection] - paid;
		for (int value : changes) {
			int count = 0;
			while (remain >= value) {
				count++;
				remain -= value;
			}
			cout << "$" << std::left << setw(5) << value;
			cout << "x" << count << endl;
		}	

	} else {
		
		cout << "Here is your change:" << endl;

		int remain = paid - prices[selection];
		for (int value : changes) {
			int count = 0;
			while (remain >= value) {
				count++;
				remain -= value;
			}
			cout << "$" << std::left << setw(5) << value;
			cout << "x" << count << endl;
		}	

	}
	
    return 0;

}


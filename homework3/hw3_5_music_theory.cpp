/*
 * Homework:	Homework 3 - Problem 5
 * Title:		[題目名稱或簡短描述，例如 "Array Sorting"]
 * Author:		Aaron Wu (B13901011)
 * Date:		2024-10-01
 */

#include <iostream>
using namespace std;

int32_t main() {

	string note;
	int interval;
	cin >> note >> interval;
	interval--;

	if (note[0] >= 'C') note[1]--;

	note[1] += interval / 7;
	note[0] += interval % 7;

	if (note[0] > 'G') {
		note[1]++;
		note[0] -= 7;
	}
	if (note[0] >= 'C') note[1]++;

	cout << note << endl;
		
    return 0;

}


/*
 * Homework:	Homework 3 - Problem 4
 * Title:		Course Reminder
 * Author:		Aaron Wu (B13901011)
 * Date:		2024-10-01
 */

#include <iostream>
using namespace std;

enum Day {
	Zero,
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
	Sunday
};

int32_t main() {

	int n; 
	cin >> n;

	switch (n) {
		case Day::Tuesday :
		case Day::Wednesday :
			cout << "Computer Programming Lecture!" << endl;
			break;

		case Day::Saturday :
		case Day::Sunday :
			cout << "Weekend!" << endl;
			break;

		default:
			cout << "No class." << endl;
	}

    return 0;

}



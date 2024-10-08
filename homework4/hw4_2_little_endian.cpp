/*
 * Homework:	Homework 4 - Problem 2
 * Title:		Little Endian
 * Author:		Aaron Wu (B13901011)
 * Date:		2024-10-08
 */

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main() {
		
	uint32_t n;
	cin >> n;

	uint8_t* ptr = reinterpret_cast<uint8_t*>(&n);
	
	for (int i = sizeof(n); i > 0; --i) {
		cout << (uint32_t) ptr[i-1] << endl;
	}
	
    return 0;

}


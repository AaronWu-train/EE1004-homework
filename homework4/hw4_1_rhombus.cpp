/*
 * Homework:	Homework 4 - Problem 1
 * Title:		Rhombus
 * Author:		Aaron Wu (B13901011)
 * Date:		2024-10-08
 */

#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int32_t main() {
		
	ifstream fin("input.txt");
	if (!fin) {
		return 1;
	}

	int n;
	fin >> n;
	fin.close();

	ofstream fout("output.txt");
	if (!fout) {
		return 1;
	}

	if (n % 2 == 0) {
		fout << "No such rhombus." << endl;
	} else {
		for (int i = 1; i <= n; i += 2) {
			for (int j = 0; j < (n-i)/2; ++j) fout << ' ';
			for (int j = 0; j < i; ++j) fout << '*';
			for (int j = 0; j < (n-i)/2; ++j) fout << ' ';
			fout << endl;
		}
		for (int i = n-2; i > 0; i -= 2) {
			for (int j = 0; j < (n-i)/2; ++j) fout << ' ';
			for (int j = 0; j < i; ++j) fout << '*';
			for (int j = 0; j < (n-i)/2; ++j) fout << ' ';
			fout << endl;
		}
	}

	fout.close();

    return 0;

}


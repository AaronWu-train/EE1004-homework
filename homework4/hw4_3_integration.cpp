/*
 * Homework:	Homework 4 - Problem 3
 * Title:		Numerical Integration
 * Author:		Aaron Wu (B13901011)
 * Date:		2024-10-08
 */

#include <iostream>
#include <fstream>
#include <cassert>
#include <cmath>
using namespace std;

double func(double x) {
	if (x == 0) return 0;
	return 1000000 * sin(x) / x;
}


int32_t main() {

	fstream fin("input.bin", ios::in | ios::binary);
	fstream fout("output.bin", ios::out | ios::binary);

	double a, b;
	fin.read((char*) &a, sizeof(a));
	fin.read((char*) &b, sizeof(b));

	//cin >> a >> b;

	int flag = 1;
	if (a > b) {
		swap(a, b);
		flag = -1;
	}

	double dx = (b-a)/1000000;
	double ans = 0;

	for (double x = a; x < b; x += dx) {
		ans += (func(x) + func(x + dx)) / 2 * dx; 
	}

	int32_t ians = round(flag * ans);
	fout.write((char*) &ians, sizeof(ians));

	return 0;

}


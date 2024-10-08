#include <iostream> 
using namespace std; 

int main() 
{
    cout << "\n\n Find Size of fundamental data types :\n"; 
	cout << "------------------------------------------\n";
  
	cout << "The sizeof(char) is : \t\t\t" << sizeof(char) << " bytes\n";
	cout << "The sizeof(short) is : \t\t\t" << sizeof(short) << " bytes\n";
	cout << "The sizeof(int) is : \t\t\t" << sizeof(int) << " bytes\n";
	cout << "The sizeof(long) is : \t\t\t" << sizeof(long) << " bytes\n";
	cout << "The sizeof(long long) is : \t\t" << sizeof(long long) << " bytes\n";
	cout << "The sizeof(float) is : \t\t\t" << sizeof(float) << " bytes\n";
	cout << "The sizeof(double) is : \t\t" << sizeof(double) << " bytes\n";
	cout << "The sizeof(long double) is : \t" << sizeof(long double) << " bytes\n";
	cout << "The sizeof(bool) is : \t\t\t" << sizeof(bool) << " bytes\n";

    return 0; 
}


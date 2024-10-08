#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cout << "\n\n Formatting the output :\n";
	cout << "----------------------------\n";

    double pi = 3.14159265; // Initializing a double variable 'pi' with the value of pi
  
    //Set the output format to fixed with 4 decimal places
    cout << fixed << setprecision (4) << " The value of pi : " << pi << endl; // Displaying 'pi' with 4 decimal places
  
  	//Display 'pi' with 4 decimal places and a width of 8 and 10
    cout << " The value of pi 4 decimal place of total width 8   : |" << setw(8) << pi << "|" << endl;
    cout << " The value of pi 4 decimal place of total width 10  : |" << setw(10) << pi << "|"<< endl;

  	//Set the fill chatacter to '0', then display 'pi' with 4 decimal places and a width of 8 and 10
    cout << " The value of pi 4 decimal place of total width 8   : |" << setfill('0') << setw(8) << pi << "|" << endl;
    cout << " The value of pi 4 decimal place of total width 10  : |" << setfill('0') << setw(10) << pi << "|"<< endl;

  	//Set the output format to scientific notation
    cout << " The value of pi in scientific format is : " << scientific << pi << endl;

  	//Output symbols !"\%
  	cout <<  " Symbols Output: !\"\\%" << endl;
  
    return 0;
}


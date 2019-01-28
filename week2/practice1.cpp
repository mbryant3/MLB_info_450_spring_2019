/* practice1.cpp :a program that continually accepts positive values from the user, 
calculates the square of that value and outputs the results to the console. 
When the user enters '0', execution should stop.
*/
#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int value;
	double result;
	char again = 'Y';
	cout << "Welcome to the postive number squarer! follow the the next line of instructions if you want to try the program  or enter 0 to exit" << endl;
	while (again == 'y' || again == 'Y') {
		cout << "please enter in value" << "\n" << endl; // user enters in value 
		cin >> value; // program sets number from user input to value
		if (value == 0) {
			cout << "you have chosen 0 or have decided to exit" << endl;
			exit(0);
		}
		if (value > 0) {
			result = value * value; // value gets squared if it is greater than 0 
			cout << "the square  of " << value << " is " << result << endl; // program outputs result 
		}
		else {
			cout << "this value is invalid" << endl; //if value is less than 0 or not a number program displays this message
			return 0;
		}
		cout << "want to enter in another number (y/n)" << endl;
		cin >> again;
	}
	
	return 0;
}


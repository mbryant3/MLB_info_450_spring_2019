/* practice2.cpp : Write a program that continually accepts values from the user, 
determines if the value is a prime number and prints the result to the console. 
When the user enters a 0, then execution stops
*/

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int value;
	int i;
	cout << "Welcome to the Prime Number finder! follow the the next line of instructions if you want to try the program  or enter 0 to exit" << endl;
	while (1) {
		cout << "please enter in a postive number" << "\n" << endl; // user enters in value 
		cin >> value; // program sets number from user input to value

		for (i = 2; i < value; i++) {
			if (value % i == 0) // if user input equals zero after mod then its not a prime number
			{
				cout << value << " is Not prime number" << "\n" << endl;
				return 0;
			}

		}
		if (value == 0) {
			cout << "You entered in 0, goodbye " << endl; // if the user enters zero then program ends
			exit(0);
		}
		else {
			cout << value << " is  Prime Number" << endl; // if the value is a prime then this displays
		}

	}
}


/* week4program2.cpp : Write a program that inputs the names of the students in the class (to a max of 30 names)

Store them in a 2 - dimensional array

Then outputs the class list to the console when the user enters an empty string(by pressing enter)
*/

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int f = 0;
	int l = 0;
	string name ="";
	cout << "Welcome the class list 2-d array. you will be asked the enter 30 names" << endl;
	string ClassList[5][6];
	for (int f = 0; f < 5; f++)
	{
		for (int l = 0; l < 6; l++)
		{
			cout << "Enter in Student's Name" << endl; // where the user input happens
			getline(cin, name);
			if (name.empty())
			{
				ClassList[5][6] = '\0';
				cout << ClassList[f][l];
		
			else {
				ClassList[f][l] = name;
			}
		}
	} // where the list is printed at 
	int first = 0;
	int last = 0;
	for (first = 0; first < 5; first++)
	{
		for (last = 0; last < 6; last++) 
		{
			if (!ClassList[first][last].empty())
			{
				cout << ClassList[first][last];
				cout << "\n";
			}
			else {
				exit(0);

			}
				
		}

	}
}

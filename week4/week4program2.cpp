/* week4program2.cpp : Write a program that inputs the names of the students in the class (to a max of 30 names)

Store them in a 2 - dimensional array

Then outputs the class list to the console when the user enters an empty string(by pressing enter)
(may have problems with the empty string then output list on visual studio , works fine on online c++ compliers)
*/

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int f = 0;
	int l = 0;
	string name = "";
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
				ClassList[f][l] = '\0';
				cout  << ClassList[f][l] << endl;
				// where the list is printed at 
				int first = 0;
				int last = 0;
				for (first = 0; first < 5; first++)
				{
					for (last = 0; last < 6; last++)
					{
						if (!ClassList[first][last].empty())
						{
							cout << ClassList[first][last] << endl;
							cout << "\n";
						}

						else {
							exit(0);
						}

					}

				}
				exit(0);
			}
			else
			{
				ClassList[f][l] = name;

			}

		}

		cout << ClassList[f][l] << endl;
	}
}


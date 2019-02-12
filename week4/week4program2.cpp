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
	string name;
	cout << "Welcome the class list 2-d array. you will be asked the enter 30 names" << endl;
	string ClassList[5][6];
	for (int f = 0; f < 5; f++)
	{
		for (int l = 0; l < 6; l++)
		{
			cout << "Enter in Student's Name" << endl;
			getline(cin, name);
			if (name.empty())
			{
				ClassList[f][l] = '\0';
				int i;
				int j;
				for (int i = 0; i < 5; i++)
				{
					for (int j = 0; j < 6; j++)
					{
						if (!ClassList[i][j].empty())
						{
							cout << ClassList[i][l];
							cout << "\n";
						}
						else
						{
							exit(0);
						}
						exit(0);
					}
			
				}
		
			
				
			
			}
			else {
				ClassList[f][l] = name;
			}
		}
	}
	int x = 0;
	int y = 0;
	for (x = 0; x < 5; x++)
	{
		for (y = 0; y < 6; y++) 
		{
			if (!ClassList[x][y].empty())
			{
				cout << ClassList[x][y];
				cout << "\n";
			}
			else {
				exit(0);

			}
				
		}

	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

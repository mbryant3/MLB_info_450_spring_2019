// two_d_array.cpp : Complete the following program to display the contents of the 2-d array
//

#include "pch.h"
#include <iostream>

using namespace std;
int main() {
	
	char t_d_array[5][7] = {
	 {'','/','\\','_','/','\\',' '},
	 {'/','','D','','D','','\\'},
	 {'(','=','=','O','=','=',')'},
	 {'\\',' ',' ','~',' ',' ','/'},
	 {' ','-','-','-','-','-',' '},
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j= 0; j< 7; i++))
		{
		cout << t_d_array[i][j]<< " ";
}
	}
	cout << endl;
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

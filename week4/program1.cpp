/* one_d_array.cpp : Write a program that reads a set of 10 whole numbers from the user into an array.

Once read in, it calculates the mean and the standard deviation of the numbers then displays the results to the console.

    Find the mean (the simple average of the numbers)
    Then, for each number, subtract the mean and square the result.
    Then, work out the mean of those squared differences.
    Take the square root of that, and we're done!
*/

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int numbers[10];
	int i=0;
	double total=0;
	double difference=0 ;
	double mean=0;
	double New_mean=0;
	for (int i = 0; i < 10; i++)
	{
		cout << "Please enter 10 numbers for the program:" << endl;
		cin >> numbers[i];
		total = total + numbers[i];
		numbers[i] = sqrt(numbers[i] - (total / 10));
		difference = difference + numbers[i];
	}
	mean = total / 10;
	New_mean = difference / 10;
	cout << "Your original mean was :" << mean << endl;
	cout << "Your new mean is :" << New_mean << endl;
	cout << "The square root of the new mean:" << sqrt(New_mean/10) << endl;
	return 0;
	}



	// circumference.cpp : Write a program that asks the user for the radius of a circle and using a function, calculate the circumference of the circle.
//

#include "pch.h"
#include <iostream>
using namespace std;
const double pi = 3.14;
double calculateCircumference(double radius);
int main()
{
	double radius;
	cout << "Enter the raidus of circle" << endl; // where the user enters raidus of circle
	cin >> radius;
	cout << "circumference of circle:" << calculateCircumference(radius)<< endl; // where the function outputs the circumference for circle after the users enters a raidus
	return 0;
}
double calculateCircumference(double raidus) // calculates the circumference for the circle
{
	double circumference ;
	circumference = pi * raidus *2;
	return circumference;
}


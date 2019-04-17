// week9program2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string.h>
#include <string>
#include <cstdio>
#include <stdlib.h>
#include <fstream>
using namespace std;

class Car {
private:
	int wheels;
	int passengers;
	string type;
	int cargo;
	string AutoorTruck;
	string car;
	Car*next;
public:
	void input(string car, int wheels, int passengers, int cargo, string type);
	Car(string motor, int tires, int riders, int storage, string variant);
	void Print();
};
Car::Car(string motor, int tires, int  riders, int storage, string variant) {
	wheels = tires;
	passengers = riders;
	type = variant;
	cargo = storage;
	//AutoorTruck = autoortruck;
	car = motor;
	next = NULL;

}
void Car::input(string car, int wheels, int passengers, int cargo, string type) {
	if (next != NULL) {
		next->input(car, wheels, passengers, cargo, type);
	}
	else {
		next = new Car(car, wheels, passengers, cargo, type);
	}
}
void Car::Print() {
	Car*placeholder = next;
	cout << "\Road_vehicle\" : \"" << placeholder->car << ",";
	cout << "\Wheels\" : \"" << placeholder->wheels << ",";
	cout << "\Passengers\" : \"" << placeholder->passengers << ",";
	if (placeholder->car == "automobile") {
		cout << "\Type\" : \"" << placeholder->type << ",";
	}
	else
	{
		cout << "\Cargo\" : \"" << placeholder->cargo << ",";
	}
	placeholder = placeholder->next;
}

int main()
{
	string info;
	string car;
	int wheels;
	string type;
	int cargo;
	int passengers;
	Car*head = new Car("", 0, 0, 0, "");
	ifstream output;
	output.open("output.txt");
	if (!output) {
		cout << "Cannot open file" << endl;
	}
	if (output.is_open()) {
		{
			while (getline(output, info)) {
				output >> car >> wheels >> passengers >> type >> cargo;
				
				if (car == "autombile") {
					
					head->input(car, wheels, passengers, cargo, "");
				}
				else {
					
					head->input(car, wheels, passengers, cargo, " ");
				}


			}
		}
		output.close();
		head->Print();

	}
	else
	{
		cout << "file didnt open please try again";
	}
}




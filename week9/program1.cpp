// week9Program1.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
	//void sample(string AutoorTruck, int wheels, int passengers, char type);
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
/*class Truck :public Car {
public:
	int getCargo() {
		int cargo;
		cin >> cargo;
		cout << "Would you like to enter another vehicle? Please enter in yes or no";
		return cargo;
	}
};*/
/*class Automobile : public Car {
public:
	int getType() {
		cout << "What type of automobile is this ? Please enter in van , car , wagon";
		string type;
		cin >> type;
		return type;
	}

};*/
void Car::input(string car, int wheels, int passengers, int cargo, string type) {
	if (next != NULL) {
		next->input(car, wheels, passengers, cargo, type);
	}
	else {
		next = new Car(car, wheels, passengers, cargo, type);
	}
}
void Car::Print() {
	ofstream output;
	output.open("output.txt");
		if (output.is_open()) {
			Car*placeholder = next;
			while (placeholder != NULL)
			{
				cout << "Vehicle:" << placeholder->car << "\n" << endl;
				output << placeholder->car;
				output << "\n";
				cout << "Wheels:" << placeholder->wheels << "\n" << endl;
				output << placeholder->wheels ;
				output << "\n";
				cout << "Passengers:" << placeholder->passengers << "\n" << endl;
				output << placeholder->passengers ;
				output << "\n";
				if (placeholder->car =="automobile" ) {
					cout << "Type:" << placeholder->type << "\n" << endl;
					output << placeholder->type ;
					output << "\n";
				}
				else {
					cout << "Cargo:" << placeholder->cargo << "\n" << endl;
					output << placeholder->cargo ;
					output << "\n";
				}
				placeholder = placeholder->next;
			}
			output.close();
	}
		else {
			cout << "your file did not open , please try to fix your problem." << endl;
		}
}
int main()
{
	cout << "test" << endl;
	bool cont = true;
	char retry []="yes"  ;
	Car*head = new Car(" ", 0, 0, 0, " ");
	while (retry[0] == 'y' && retry[1] == 'e' && retry[2] == 's') {
		//cout << "test" << endl;
		string car;
		cout << "IS this an automobile or a truck? Enter 'automobile' or 'truck'";
		getline(cin, car);
		cout << car;
			if ((car.compare("autombile"))==0)
			{
				cout << "How many wheels does this vehicle have ?";
				int wheels;
				cin >> wheels;
				cout << "How many passengers can this vehicle hold?";
				int passengers;
				cin >> passengers;
				cout << "What type of automobile is this ? Please enter in van , car , wagon";
				string type;
				cin >> type;
				head->input(car, wheels, passengers, 0, type);
				cout << "Would you like to enter another vehicle? Please enter in yes or no";
				cin >> retry;
			}
			if ((car.compare("truck")) == 0)
			{
				cout << "How many wheels does this vehicle have ?";
				int wheels;
				cin >> wheels;
				cout << "How many passengers can this vehicle hold?";
				int passengers;
				cin >> passengers;
				cout << "How much cargo (in pounds) can this vehicle hold?";
				int cargo;
				cin >> cargo;
				head->input(car, wheels, passengers, cargo, " ");
				cout << "Would you like to enter another vehicle? Please enter in yes or no";
				cin >> retry;
			}
	}
	head->Print();
}

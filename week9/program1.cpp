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
	int wheels ;
	int passengers;
	string type;
	char cargo;
	string AutoorTruck;
	Car*next;
public:
	//void sample(string AutoorTruck, int wheels, int passengers, char type);
	void input(string AutoorTruck, int wheels, int passengers, int cargo, string type);
	Car(string autoortruck, int tires , int riders ,int storage , string variant);
	void Print();
};
Car::Car(string autoortruck, int tires, int  riders, int storage, string variant) {
	wheels = tires;
	passengers = riders;
	type = variant;
	cargo = storage;
	AutoorTruck = autoortruck;
	next = NULL;

}
void Car::input(string AutoorTruck, int wheels, int passengers, int cargo, string type) {
	if (next != NULL) {
		next->insert(AutoorTruck, wheels, passengers, cargo, type);
	}
	else {
		next = new Car(AutoorTruck, wheels, passengers, cargo, type);
	}
}
void Car::Print() {
	ofstream output;
	output.open("output.txt");
		if (output.is_open()) {
			Car*placeholder = next;
			while (placeholder != NULL)
			{
				cout << "Vehicle:" << placeholder->AutoorTruck << "\n" << endl;
				output << placeholder->AutoorTruck + "\n";
				cout << "Wheels:" << placeholder->wheels << "\n" << endl;
				output << placeholder->wheels + "\n";
				cout << "Passengers:" << placeholder->passengers << "\n" << endl;
				output << placeholder->passengers + "\n";
				if (placeholder->AutoorTruck =="Automobile" ) {
					cout << "type:" << placeholder->type << "\n" << endl;
					outout << placeholder->type + "\n";

				}
				else {
					cout << "Cargo:" << placeholder->cargo << "\n" << endl;
					output << placeholder->cargo + "\n";
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

	char entry[]= "yes" ;
	Car*head = new Car(" " ,0 , 0 , 0 , " ");
	while(entry[0] == 'yes'){
		string vehicle[50];
		cout << "IS this an automobile or a truck? Enter 'automobile' or 'truck'";
		cin.getline(vehicle, 50);
		if (strcmp(vehicle, "automobile") 
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
			
		}
		if (strcmp(vehicle, "truck") 
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
		}
		else {
			cout << "you entered invalid answer please enter in truck or automobile";
		}
		cout << "Would you like to enter another vehicle? Please enter in yes or no";
		cin >> entry;
		return 0;
	}
	head->Print();
	

}


// week9Program1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string.h>
#include <string>
#include <cstdio>
#include <stdlib.h>
#include <fstream>
#pragma warning(disable : 4996)
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
	void insert(string AutoorTruck, int wheels, int passengers, int cargo, string type);
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
void Car::insert(string AutoorTruck, int wheels, int passengers, int cargo, string type) {
	if (next == NULL) {
		next->insert(AutoorTruck, wheels, passengers, cargo, type);
	}
	else {
		next = new Car(AutoorTruck, wheels, passengers, cargo, type);
	}
}
void Car::Print() {
	ofstream out;
	out.open("output.txt");
		if (out.is_open()) {
			Car*placeholder = next;
			while (placeholder != NULL)
			{
				cout << "Vehicle:" << placeholder->AutoorTruck << "\n" << endl;
				out << placeholder->AutoorTruck + "\n";
				cout << "Wheels:" << placeholder->wheels << "\n" << endl;
				out << placeholder->wheels + "\n";
				cout << "Passengers:" << placeholder->passengers << "\n" << endl;
				out << placeholder->passengers + "\n";
				if (placeholder->AutoorTruck =="Automobile" ) {
					cout << "type:" << placeholder->type << "\n" << endl;
					out << placeholder->type + "\n";

				}
				else {
					cout << "Cargo:" << placeholder->cargo << "\n" << endl;
					out << placeholder->cargo + "\n";
				}
				placeholder = placeholder->next;
			}
			out.close();
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
		char input[50];
		cout << "IS this an automobile or a truck? Enter 'automobile' or 'truck'";
		cin >> input;
		if ( input == "automobile"){
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
		if (input == "truck")
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
	}
	head->Print();

}


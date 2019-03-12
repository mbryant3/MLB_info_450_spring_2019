/*employeeinfo.cpp -
    Write a class Employee that has some private data members:
        first name
        last name
        employee type, an indicator (true/false),
        true, the compensation is entered as an hourly amount
        false, the compensation is entered as an annual amount
        compensation
    Member functions that allow the user to enter this information and display it
    Write a main function that allows a user to enter data for 3 employees then prints it.
        For employee type the program should check for the value HOURLY or EXEMPT, and re-prompt on others
        When entering the employee information, prompt in the order the items are listed above.
        Output, print out in this format:
        'Last Name', 'First Name': $'Annual Compensation'\n
        There are 2,000 work hours in a year
 */


#include "pch.h"
#include <iostream>
#include <string.h>
#include <cstdio>

using namespace std;
class Employee {
private:
	char firstname[255];
	char lastname[255];
	char type[20];
	bool is_hourlyorannual;
	char compensation[255];
public:
	void set_firstname(const char* in_name) { strcpy(firstname, in_name); }
	void set_lastname(const char* in_lname) { strcpy(lastname, in_lname); }
	void set_type(const char* in_type) { strcpy(type, in_type); }
	void set_compensation(const char* in_comp) { strcpy(compensation, in_comp); }
	void set_is_hourlyorannual(bool in_hoa) { is_hourlyorannual = in_hoa; }
	void printEntry() {
		if (!is_hourlyorannual) {
			cout << lastname << "," << firstname << ":" << "" << compensation << "\n" << endl;
			cout << firstname << ":" << endl;
			cout << compensation << endl;
		}
		else {
			cout << lastname << "," << firstname << ":" << "$" << compensation << "\n" << endl;
		}
	}
};
int main()
{
	const int MAX = 3;
	Employee entries[MAX];
	for (int x=0; x < MAX; x++) {
		cout << "Entry: " << x << endl;
		char *value = (char *)malloc(255);
		cout << "enter employees first name:" << endl;
		cin.getline(value, 255);
		entries[x].set_firstname(value);
		cout << "enter employee's last name:" << endl;
		cin.getline(value, 255);
		entries[x].set_lastname(value);
		cout << "what type of employee are you please enter true for hourly or false for annual:" << endl;
		cin.getline(value, 20);
			if (strcmp(value, "true")==0) {
				cout << "you are a hourly employee . Please enter in your compenstation in a hourly rate (example $/hr):" << endl;
				cin.getline(value, 255);
				entries[x].set_compensation(value);
			}
			else if(strcmp(value, "false")==0){
				cout << "you are a annual employee. Please enter in your compenstation in a yearly rate (example $/yr):" << endl;
				cin.getline(value, 255);
				entries[x].set_compensation(value);
			}
			else {
				cout << "you made a mistake" << endl;
			}
		
	}
	for (int x = 0; x < MAX; x++) {
		entries[x].printEntry();
	}
}





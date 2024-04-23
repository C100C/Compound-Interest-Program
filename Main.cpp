/*

Creston Getz
4/4/24

This program is a compound intrest calculator. The user can enter year, an intrest rate, an optional monthly deoposit, and an initial amount.
The program will output 2 reports based on the users input and will ask if they would like to stop or print more reports.

The code uses a class/object called balance that stores and manipulates the data that the user enters. See Balance.cpp and Balance.h

*/

#include <iostream>
using namespace std;     
#include "Balance.h"

void getUserInput(int& userYears, double& userIntrestRate, double& userInitalAmount, double& userMonthlyDeposit); // funtion to get user input

int main() {

	// user input varables
	int userYears;
	double userIntrestRate, userInitialAmount, userMonthlyDeposit;
	char userChar;

	Balance NewBalance;// create object class 
	int loop = 0; // keeps track of the number of loops in main

	while (true) {
		loop += 1;
		if (loop != 1) { // if its not the first loop ask the user if they want to stop
			cout << "Enter y to continue or n to stop: ";
			cin >> userChar;
			cout << endl;
			if (userChar == 'n' || userChar == 'N') {
				break;
			}
		}

		// gets user input
		getUserInput(userYears, userIntrestRate, userInitialAmount, userMonthlyDeposit);

		// prints out 2 static reports. One with monthly deposit and one without
		NewBalance.calculateBalanceWithoutMonthlyDeposit(userInitialAmount, userIntrestRate, userYears);
		NewBalance.balanceWithMonthlyDeposit(userInitialAmount, userMonthlyDeposit, userIntrestRate, userYears);
	}
	return 0;
}

// gets and validates user input
void getUserInput(int& userYears, double& userIntrestRate, double& userInitalAmount, double& userMonthlyDeposit) {

	cout << "Enter data to see how it's compounded" << endl;
	cout << endl;

	//reads in user years
	cout << "Enter Number Of Years: ";
	cin >> userYears;
	while (userYears <= 0) {
		cout << "Enter a valid number of years, 1 or more: ";
		cin >> userYears;
	}
	cout << endl;

	// reads in user Intrest rate
	cout << "Enter Yearly Intrest Rate: ";
	cin >> userIntrestRate;
	while (userIntrestRate <= 0) {
		cout << "Enter a valid Intrest Rate, 0.1 or more: ";
		cin >> userIntrestRate;
	}
	cout << endl;
	
	// reads in the user Initial Invesment Amount 
	cout << "Enter Initial Invesment Amount: ";
	cin >> userInitalAmount;
	while (userInitalAmount <= 0) {
		cout << "Enter a valid Amount, 1 or more: ";
		cin >> userInitalAmount;
	}
	cout << endl;

	// reads in user monthly deposit
	cout << "Enter a Monthly Deposit Amount: ";
	cin >> userMonthlyDeposit;
	while (userMonthlyDeposit < 0) {
		cout << "Enter a valid number, 0 or more: ";
		cin >> userMonthlyDeposit;
	}
	cout << endl;

}
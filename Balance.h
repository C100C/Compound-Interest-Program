#pragma once
#ifndef BALANCE_H
#define BALANCE_H


// creates a Balance class. Where the user can enter years, an intrest rate, initial deposit, and or a monthly deposit and see how it will grow over time.
// The amount will compound monthly with or without a monthly deposit.
class Balance {

public:
	//public methods
	void printDetails(int year, double yearEndBalance, double interestEarned); // prints report
	double balanceWithMonthlyDeposit(double initialInvestment, double monthlyDeposit, double interestRate, int numberOfYears); // gets balance w/ monthly depost
	double calculateBalanceWithoutMonthlyDeposit(double initialInvestment, double interestRate, int numberOfYears); // get balacne w/ out monthly deposit
	 
	Balance(); // deafult constructor

private:
	double m_openingAmount, m_closingBalance, m_earnedIntrest;

	const int WIDTH = 30; // width for the output of each sention. Used in printHeader and printDetails methods
	const int totalWidth = 3 * WIDTH + 2; // Total width for the line

};

#endif // !BALANCE_H

/*

Balance.cpp file

Holds method and funtion definitions

*/


#include <iostream>
#include <iomanip>
using namespace std;
#include "Balance.h"

void printHeader(int header, int t_width);


Balance::Balance() { // deafault constructor. Sets all to 0
    m_earnedIntrest = 0;
    m_openingAmount = 0;
    m_closingBalance = 0;
}

// finds and outputs the balance without a monthly deposit
double Balance::calculateBalanceWithoutMonthlyDeposit(double initialInvestment, double interestRate, int numberOfYears) {
    
    m_openingAmount = initialInvestment; // sets opening amount to the inital amount
    double monthlyIntrestRate = (interestRate / 100.0) / 12.0; // finds the monthly Intrest rate

    printHeader(1, WIDTH); // prints header for no monthly deposit.

    // loops over numberOfYears and compounds the initialInvesment
    for (int i = 0; i < numberOfYears; ++i) {
        double totalIntrest = 0.0; // resets total Intrest at the end of each year

        for (int month = 0; month < 12; ++month) { // loops over 12 months to compound monthly
            m_earnedIntrest = (m_openingAmount * monthlyIntrestRate); // calculates the amount of interest
            m_openingAmount += m_earnedIntrest; // adds intrest to balance
            totalIntrest += m_earnedIntrest;
        }

        // prints out info
        int year = i + 1;
        printDetails(year, m_openingAmount, totalIntrest);
    }
    cout << setfill('-') << setw(totalWidth) << "-" << endl; // prints a line to seperate output
 
    m_closingBalance = m_openingAmount; // sets and returns the total closing balance
    return m_closingBalance;
}


// finds and outputs the balance with a monthly deposit
double Balance::balanceWithMonthlyDeposit(double initialInvestment, double monthlyDeposit, double interestRate, int numberOfYears) {

    double monthlyIntrestRate = (interestRate / 100.0) / 12.0; // finds the monthly Intrest rate
    m_openingAmount = initialInvestment;

    printHeader(2, WIDTH);// prints header for monthly deposit

    //loops over the number of years and months
    for (int i = 0; i < numberOfYears; ++i) {
        double totalIntrest = 0.0; // resets total intrest at the end of each year

        for (int month = 0; month < 12; ++month) { // loops over 12 months in a year
            m_earnedIntrest = (m_openingAmount * monthlyIntrestRate); // calculates the amount of interest
            m_openingAmount += m_earnedIntrest + monthlyDeposit; // adds the intrest and the monthly deposit to total
            totalIntrest += m_earnedIntrest;
        }

        //prints out info
        int year = i + 1; // takes the index + 1
        printDetails(year, m_openingAmount, totalIntrest);
    }
    cout << setfill('-') << setw(totalWidth) << "-" << endl; // prints a line to seperate output

    m_closingBalance = m_openingAmount; // sets and returns closing balance with a monthly deposit
    return m_closingBalance;
}

//prints report based on user Input. this is used in the calculate functions.
void  Balance::printDetails(int year, double yearEndBalance, double interestEarned) {
    cout << setfill(' ') << setw(WIDTH) << left << year << " ";
    cout << setfill(' ') << setw(WIDTH) << left << fixed << setprecision(2) << yearEndBalance << " ";
    cout << setfill(' ') << setw(WIDTH) << left << fixed << setprecision(2) << interestEarned << " " << endl;
}

// prints the header for output. Takes a int as parameter: 1 prints without monthly deposit and 2 prints with monthly depsoit. If it is any other number it will print an error.
void printHeader(int header, int t_width) {

    int headerWidth = 3 * t_width + 2; // Total width for the Headerline

    if (header == 1) {
        cout << setfill('-') << setw(headerWidth) << "-" << endl;
        cout << "Balacne Without Monthly Deposit" << endl;
        cout << setfill('-') << setw(headerWidth) << "-" << endl;
        cout << setfill(' ') << setw(t_width) << left << "Year ";
        cout << setfill(' ') << setw(t_width) << left << "Year End Balance ";
        cout << setfill(' ') << setw(t_width) << left << "Year End Intrest Eanred" << endl;
        cout << setfill('-') << setw(headerWidth) << "-" << endl;

    } 

    else if (header == 2) {
        cout << setfill('-') << setw(headerWidth) << "-" << endl;
        cout << "Balance With Monthly Deposit" << endl;
        cout << setfill('-') << setw(headerWidth) << "-" << endl;
        cout << setfill(' ') << setw(t_width) << left << "Year ";
        cout << setfill(' ') << setw(t_width) << left << "Year End Balance ";
        cout << setfill(' ') << setw(t_width) << left << "Year End Intrest Eanred" << endl;
        cout << setfill('-') << setw(headerWidth) << "-" << endl;

    }
    else {
        cout << "Error: PrintHeader" << endl;
    }
}

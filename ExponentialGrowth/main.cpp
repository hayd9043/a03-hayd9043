//**********************************************************************
// File:				main.cpp
// Author:			Bryant Hayden
// Date:				9/28/21
// Class:				CS150-1
// Assignment:	a03
// Purpose:
// Hours:       .8
//**********************************************************************

#include<iostream>
#include<iomanip>

using namespace std;

int main() {
	const int PERCENT_CONVERSION = 100;
	double accountValue = -1, amountWithdrawn = -1, rateOfReturn = -1,
		endingBalance, beginningBalance, earnings;
	int currentYear = 1;

	cout << fixed << setprecision(2);

	cout << "*** How Long Will My Retirement Last? ***" << endl << endl;

	while (accountValue < 0) {
		cout << "Enter Retirement Account Value: $ ";
		cin >> accountValue;
	}

	while (amountWithdrawn < 0 || amountWithdrawn >= accountValue) {
		cout << "Enter Amount Withdrawn Yearly: $ ";
		cin >> amountWithdrawn;
	}

	while (rateOfReturn < 0) {
		cout << "Enter Rate of Return: % ";
		cin >> rateOfReturn;
	}

	rateOfReturn = rateOfReturn / PERCENT_CONVERSION;

	cout << endl;
	cout << setw(12) << "Beginning" << setw(15) << "Amount"
		<< setw(15) << "Earnings" << setw(17) << "Ending"
		<< setw(9) << "Year" << endl;

	cout << setw(12) << "Balance" << setw(15) << "Withdrawn"
		<< setw(15) << "" << setw(17) << "Balance"
		<< setw(9) << "" << endl;

	cout << setw(12) << "-----------" << setw(15) << "----------"
		<< setw(15) << "----------" << setw(17) << "------------"
		<< setw(9) << "----" << endl;

	beginningBalance = accountValue;
	endingBalance = accountValue;

	while (endingBalance >= amountWithdrawn) {
		beginningBalance = endingBalance;
		earnings = (beginningBalance - amountWithdrawn) * rateOfReturn;
		endingBalance = beginningBalance - amountWithdrawn + earnings;

		cout << "$" << setw(11) << beginningBalance << setw(6) << "$"
			<< setw(9) << amountWithdrawn << setw(6) << "$"
			<< setw(9) << earnings << setw(6) << "$" << setw(11)
			<< endingBalance << setw(9) << currentYear << endl;
		currentYear += 1;
	}

	return EXIT_SUCCESS;
}
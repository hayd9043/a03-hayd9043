//**********************************************************************
// File:				main.cpp
// Author:			Bryant Hayden
// Date:				9/28/21
// Class:				CS150-1
// Assignment:	Exponential Growth
// Purpose:
// Hours:
//**********************************************************************

#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main() {
	const int MONTHS_PER_YEAR = 12, PERCENT_CONVERSION = 100;

	const double monthlyInterestRate = (0.06 / 12);

	double salary, percentInvested, rateOfReturn, beginningBalance = 0,
		additionalInvestment, interestEarned ,
		endingBalance = 0;

	int endMonth, endYear, currentMonth = 1, currentYear = 1;
	char monthYear;
	string time;




	cout << fixed << setprecision(2);

	cout << "*** When can I Retire ***" << endl << endl;

	cout << "Enter Annual Salary: $ ";
	cin >> salary;

	cout << "Enter Percent of Salary Invested: % ";
	cin >> percentInvested;

	//convert percent from int to a functional decimal
	percentInvested = percentInvested / PERCENT_CONVERSION;

	cout << "Enter Investment Rate of Return % ";
	cin >> rateOfReturn;

	cout << "Enter Years Until Retirement: ";
	cin >> endYear;

	cout << endl;
	cout << "Print Results [ M)onth, Y)early ] : ";
	cin >> monthYear;

	while(monthYear != 'Y' && monthYear != 'M') {
		cout << "Invalid Input/Enter 'M' or 'Y' : ";
		cin >> monthYear;
	}


	cout << endl;

	if (monthYear == 'Y') {
		time = "Year";
	}
	else {
		time = "Month";
	}

	cout << setw(12) << "Beginning" << setw(15) << "Additional"
		<< setw(15) << "Interest" << setw(17) << "Ending"
		<< setw(9) << time << endl;

	cout << setw(12) << "Balance" << setw(15) << "Investment"
		<< setw(15) << "Earned" << setw(17) << "Balance"
		<< setw(9) << "" << endl;

	cout << setw(12) << "-----------" << setw(15) << "----------"
		<< setw(15) << "----------" << setw(17) << "------------"
		<< setw(9) << "----" << endl;

	if (monthYear == 'Y') {
		endYear = endYear;
		while (currentYear <= endYear) {
			beginningBalance = endingBalance;
			additionalInvestment = salary * percentInvested;
			interestEarned = (beginningBalance + additionalInvestment) *
				(monthlyInterestRate);
			endingBalance = beginningBalance + interestEarned
				+ additionalInvestment;

			cout << setw(12) << beginningBalance << setw(15)
				<< additionalInvestment << setw(15) << interestEarned
				<< setw(17) << endingBalance << setw(9) << currentYear << endl;
			currentYear += 1;
		}
	}
	else if (monthYear == 'M') {
		endMonth = endYear * MONTHS_PER_YEAR;
		while (currentMonth <= endMonth) {
			additionalInvestment = salary * percentInvested/MONTHS_PER_YEAR;
			beginningBalance = endingBalance;
			additionalInvestment = salary * percentInvested / MONTHS_PER_YEAR;
			interestEarned = (beginningBalance + additionalInvestment) *
				monthlyInterestRate;
			endingBalance = beginningBalance + interestEarned
				+ additionalInvestment;

			cout << setw(12) << beginningBalance << setw(15)
				<< additionalInvestment << setw(15) << interestEarned
				<< setw(17) << endingBalance << setw(9) << currentMonth << endl;
			currentMonth += 1;
		}
	}

	cout << endl;

	return EXIT_SUCCESS;
}
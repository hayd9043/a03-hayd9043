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

	double salary, percentInvested, rateOfReturn, years;
	char monthYear;
	string time;




	cout << fixed << setprecision(2);

	cout << "*** When can I Retire ***" << endl << endl;

	cout << "Enter Annual Salary: $ ";
	cin >> salary;

	cout << "Enter Percent of Salary Invested: % ";
	cin >> percentInvested;

	cout << "Enter Investment Rate of Return % ";
	cin >> rateOfReturn;

	cout << "Enter Years Until Retirement: ";
	cin >> years;

	cout << endl;
	cout << "Print Results [ M)onth, Y)early ] : ";
	cin >> monthYear;

	while(monthYear != 'Y' && monthYear != 'M') {
		cout << "Invalid Input/Enter 'M' or 'Y' : ";
		cin >> monthYear;
	}

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

	cout << salary << " " << percentInvested << " "
		<< rateOfReturn << " " << years << " " << monthYear;

	return EXIT_SUCCESS;
}
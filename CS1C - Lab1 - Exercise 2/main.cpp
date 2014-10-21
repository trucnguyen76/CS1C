/**********************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* LAB 1 		: Exercise 2
* CLASS         : CS1C
* SECTION       : T TH 6 - 8:50
* DUE DATE      : 8/20/2014
**********************************************************************************/
#include "header.h"
/**********************************************************************************
*
* Exercise 2
* _________________________________________________________________________________
* This program will prompt the user for the date input in in the format mm/dd/yyyy.
* 		Then it will output the date back in the format Month dd, yyyy
* 		(e.g. 07/06/1995 -> July 06, 1995)
* _________________________________________________________________________________
* INPUTS:
* 		 date			: The date from the user
*
* OUTPUTS:
* 		date			: The day and the year will be extracted and output back
**********************************************************************************/
int main()
{
	stringstream convert;	//CALC 		- String Stream Var to Convert str to int 
	string monthStr;		//CALC 		- Month as a string
	int monthInt;			//CALC 		- Month as an int
	Month month;			//CALC 		- Month as an enum type
	string date;			//IN & OUT	- The Date from the user

	//OUTPUT - Class Headings
	cout << PrintHeader("Elva Nguyen", 'l', "Exercise 2", 1);

	cout << "Enter a date in the format mm/dd/yyyy: ";
	getline(cin,date);

	//Store the month as a string in monthStr (Ex: 07)
	monthStr = date.substr(0,2);

	//Store the month as a string in the string stream convert
	convert << monthStr;

	//The month in the string stream being stored to month1 type enum Month
	convert >> monthInt;

	//Enum type start at 0 -> JANUARY = 0;
	month = Month(monthInt - 1);

	//Switch - Output month to the console
	switch (month)
	{
		case JANUARY:
			cout << "January";
			break;
		case FEBRUARY:
			cout << "February";
			break;
		case MARCH:
			cout << "March";
			break;
		case APRIL:
			cout << "April";
			break;
		case MAY:
			cout << "May";
			break;
		case JUNE:
			cout << "June";
			break;
		case JULY:
			cout << "July";
			break;
		case AUGUST:
			cout << "August";
			break;
		case SEPTEMBER:
			cout << "September";
			break;
		case OCTOBER:
			cout << "October";
			break;
		case NOVEMBER:
			cout << "November";
			break;
		case DECEMBER:
			cout << "December";
			break;
	}

	cout << " " << date.substr(3, 2) << ", " << date.substr(6,4) << endl;

	return 0;
}

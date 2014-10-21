/**********************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* ASSIGNMENT 7	: Virtual Function
* CLASS         : CS1C
* SECTION       : T TH 6 - 8:50
* DUE DATE      : 10/07/2014
**********************************************************************************/
#include "Header.h"
/**********************************************************************************
*
* Math Student
* _________________________________________________________________________________
* This program will test Print All the Student, CS1CStudent, MathStudent students
* 		info
* _________________________________________________________________________________
* INPUTS:
* 		 <none>
*
* OUTPUTS:
* 		This program will output information of the students
**********************************************************************************/
int main()
{
	/******************************************************************************
	 * CONSTANTS
	 * ----------------------------------------------------------------------------
	 * LINE_LENGTH 	 	: The length of the line
	 *****************************************************************************/
	const int LINE_LENGTH 		= 60;

	//Student Trout
	Student		trout("Mike Trout", 778899, 2495551234, 22, 'm', "Freshman", 4.0);
	//Student Cebrera
	Student 	cebrera("Miguel Cabrera", 456789, 2485555555, 29, 'M', "Sophomore",
																			3.33);
	//Student Reilly
	Student 	reilly("Bill O’Reilly", 87654, 2037031234, 57, 'M',
														"Sophomore", 3.8);
	//Student Winfrey
	Student 	winfrey("Oprah Winfrey", 777744, 2135556789, 50, 'F',
														"Freshman", 3.23);
	//CS1C Student Pujols
	CS1CStudent pujols("Alberto Pujols", 668899, 2496651234, 35, 'M', "Freshman",
												3.3, 778899, true, 5, 12, 2016);
	//CS1C Student Kershaw
	CS1CStudent kershaw("Clayton Kershaw", 156789, 2485556543, 29, 'M',
									"Sophomore", 2.5, 456789, false, 5, 11, 2015);
	//CS1C Student Rome
	CS1CStudent rome("Jim Rome", 876545, 2037037654, 40, 'M', "Sophomore", 3.2,
												778899, true, 5, 11, 2015);

	//Math Student Calculus
	MathStudent calculus("Joe Calculus",668888, 2495551234, 23, 'm', "Freshman",
							3.3, "1234 Main", "Laguna Niguel", "CA", 92677);

	//Math Student Algebra
	MathStudent algebra("Mary Algebra",777777, 2785551234, 29, 'f', "Sophomore",
							3.5, "3333 Marguerite", "Mission Viejo", "CA", 92646);

	//Math Student Trig
	MathStudent trig("Jo Trig",123456, 2035551234, 59, 'f', "Sophomore",
								3.8, "9876 Elm", "New York", "NY", 12345);

	//OUTPUT - Class Headings
	cout << PrintHeader("Elva Nguyen", 'a', "Virtual Function", 7);

	//OUTPUT - Student's Initial Info
	cout << setfill('-');
	PrintAll(trout);
	cout << setw(LINE_LENGTH) << '-' << endl;
	PrintAll(cebrera);
	cout << setw(LINE_LENGTH) << '-' << endl;
	PrintAll(reilly);
	cout << setw(LINE_LENGTH) << '-' << endl;
	PrintAll(winfrey);
	cout << setw(LINE_LENGTH) << '-' << endl;
	PrintAll(pujols);
	cout << setw(LINE_LENGTH) << '-' << endl;
	PrintAll(kershaw);
	cout << setw(LINE_LENGTH) << '-' << endl;
	PrintAll(rome);
	cout << setw(LINE_LENGTH) << '-' << endl;
	PrintAll(calculus);
	cout << setw(LINE_LENGTH) << '-' << endl;
	PrintAll(trig);
	cout << setw(LINE_LENGTH) << '-' << endl;

	return 0;
}


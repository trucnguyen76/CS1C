/**********************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* ASSIGNMENT 5	: Math Student
* CLASS         : CS1C
* SECTION       : T TH 6 - 8:50
* DUE DATE      : 9/29/2014
**********************************************************************************/
#include "Header.h"
/**********************************************************************************
*
* Math Student
* _________________________________________________________________________________
* This program will test Math Student object's methods and output those students
* 	info
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
	 * LINE_LENGTH 	 : The length of the line
	 *****************************************************************************/
	const int LINE_LENGTH 	= 60;

	//OUT - Math Student Calculus
	MathStudent calculus("Joe Calculus",668888, 9495551234, 23, 'm', "Freshman",
							3.3, "1234 Main", "Laguna Niguel", "CA", 92677);

	//OUT - Math Student Algebra
	MathStudent algebra("Mary Algebra",777777, 2785551234, 29, 'f', "Sophomore",
							3.5, "3333 Marguerite", "Mission Viejo", "CA", 92646);

	//OUT - Math Student Trig
	MathStudent trig("Jo Trig",123456, 7035551234, 59, 'f', "Sophomore",
								3.8, "9876 Elm", "New York", "NY", 12345);

	//OUT - Math Student Algebra
	MathStudent algebra1;

	//OUTPUT - Class Headings
	cout << PrintHeader("Elva Nguyen", 'a', "Math Student", 5);

	//OUTPUT - Student's Initial Info
	cout << setfill('-');
	cout << "Calculus 's Info \n";
	cout << calculus.outputStudent();
	cout << setw(LINE_LENGTH) << '-' << endl;

	cout << "Algebra 's Info \n";
	cout << algebra.outputStudent();
	cout << setw(LINE_LENGTH) << '-' << endl;

	cout << "Trig 's Info \n";
	cout << trig.outputStudent();
	cout << setw(LINE_LENGTH) << '-' << endl;

	cout << setfill('=') << setw(LINE_LENGTH) << '=' << endl;

	cout << "Change Calculus' address to: 4321 Main" << endl;
	calculus.setAddress("4321 Main");

	cout << setfill('-');
	cout << "Calculus 's Info \n";
	cout << calculus.outputStudent();
	cout << setw(LINE_LENGTH) << '-' << endl;

	cout << "Change Algebra's city to: Aliso Viejo" << endl;
	algebra.setCity("Aliso Viejo");

	cout << "Algebra 's Info \n";
	cout << algebra.outputStudent();
	cout << setw(LINE_LENGTH) << '-' << endl;

	cout << "Change Trig's state to: CA" << endl;
	trig.setState("CA");

	cout << "Chage Trig's zip code to: 95623\n";
	trig.setZipCode(95623);

	cout << "Trig 's Info \n";
	cout << trig.outputStudent();
	cout << setw(LINE_LENGTH) << '-' << endl;

	//OUT - Math Student Trig1
	MathStudent trig1 = PassAndReturnByCopy(trig);

	cout << "Return to main from PassAndReturnByCopy function\n\n";

	cout << "Trig 1's Info \n";
	cout << trig1.outputStudent();
	cout << setw(LINE_LENGTH) << '-' << endl;

	cout << "Copy Algebra's info to trig1\n\n";

	trig1.copyFrom(algebra);

	cout << "Trig 1's Info \n";
	cout << trig1.outputStudent();
	cout << setw(LINE_LENGTH) << '-' << endl;

	algebra1 = PassAndReturnByReference(algebra);

	cout << "Return to main from PassAndReturnByReference function\n\n";




	return 0;
}


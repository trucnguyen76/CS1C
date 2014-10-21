/**********************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* ASSIGNMENT 5	: Math Student
* CLASS         : CS1C
* SECTION       : T TH 6 - 8:50
* DUE DATE      : 9/29/2014
**********************************************************************************/
#include "Header.h"

//Pass by copy and return by copy
MathStudent PassAndReturnByCopy(MathStudent student1)
{
	cout << "Pass and Return by Copy Function " << endl << endl;
	cout << "Student1 's Info \n";
	cout << student1.outputStudent();
	cout << setw(60) << '-' << endl;

	return student1;
//	cout << "After return statement: student1.getAddress()" << student1.getAddress() << endl;

}

//Pass by reference and return by reference
MathStudent& PassAndReturnByReference(MathStudent &student1)
{
	cout << "Pass and Return by Reference Function " << endl << endl;

	return student1;
}




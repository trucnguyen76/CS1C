/**********************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* ASSIGNMENT 8	: Friend Functions and Operator Overloading
* CLASS         : CS1C
* SECTION       : T TH 6 - 8:50
* DUE DATE      : 10/14/2014
**********************************************************************************/
#include "Header.h"
/**********************************************************************************
*
* Friend Functions and Operator Overloading
* _________________________________________________________________________________
* This program will test the CheckID friend function, == operator, additional
* 		member function which added an integer to age, and the + operator to add
* 		a constant to a CS1CStudent's age
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

	int addedAge;			//The years being added to the student's age

	addedAge = 5;

	//CS1C Student Pujols
	CS1CStudent pujols("Alberto Pujols", 668899, 2496651234, 35, 'M', "Freshman",
												3.3, 778899, true, 5, 12, 2016);
	//CS1C Student Kershaw
	CS1CStudent kershaw("Clayton Kershaw", 156789, 2485556543, 29, 'M',
									"Sophomore", 2.5, 456789, false, 5, 11, 2015);

	//Math Student Calculus
	MathStudent calculus("Joe Calculus",668888, 2495551234, 23, 'm', "Freshman",
							3.3, "1234 Main", "Laguna Niguel", "CA", 92677);

	//OUTPUT - Class Headings
	cout << PrintHeader("Elva Nguyen", 'a',
								"Friend Functions and Operator Overloading", 8);

	cout << setfill('-');
				//1 - Test Friend Function CheckID
	cout << "Test CheckID Friend Funtion" << endl << endl;
	cout << "Calculus's ID: " 	<< calculus.getID() << endl;
	cout << "Pujols' ID:"		<< pujols.getID()	<< endl;
	//Check ID of Pujols and Calculus
	cout << (CheckID(calculus, pujols)? "Same": "Not the same") << endl << endl;

	//Change Pujols' ID to Calculus' ID
	cout << "Change Pujols' ID" << endl << endl;
	pujols.setID(calculus.getID());

	cout << "Calculus's ID: " 	<< calculus.getID() << endl;
	cout << "Pujols' ID:"		<< pujols.getID()	<< endl;
	cout << (CheckID(calculus, pujols)? "Same": "Not the same") << endl;
	cout << setw(LINE_LENGTH)	<< '-' << endl;

				//2 - Test == operator of CS1CStudent
	cout << "Test == Operator of CS1CStudent\n" << endl;
	cout << "Kershaw's ID: " 	<< kershaw.getID() << endl;
	cout << "Pujols' ID:"		<< pujols.getID()	<< endl;
	cout << (pujols == kershaw? "Same": "Not the same") << endl << endl << endl;

	//Change Pujols' ID to Kershaw's ID
	cout << "Change Pujols' ID\n" << endl;
	pujols.setID(kershaw.getID());

	cout << "Kershaw's ID: " 	<< kershaw.getID() << endl;
	cout << "Pujols' ID:"		<< pujols.getID()	<< endl;
	cout << (pujols == kershaw? "Same": "Not the same") << endl;
	cout << setw(LINE_LENGTH)	<< '-' << endl;

				//3 - Test the additional member function which add the age
	cout <<"Test the additional member function which added an integer to age\n\n";
	cout << "Pujols' initial age: " << pujols.getAge() << endl;
	pujols.ChangeAge(addedAge);
	cout << addedAge 	<< " is added to the student's age.\n";;
	cout << "Pujols' current age: " << pujols.getAge() << endl;
	cout << setw(LINE_LENGTH)	<< '-' << endl;

			//4 - Test the + operator to add a constant to a CS1CStudent's age
	cout << "Test the + operator to add a constant to a CS1CStudent's age\n\n";
	cout << "Kershaw' initial age: " << kershaw.getAge() << endl;
	kershaw = kershaw + addedAge;
	cout << addedAge 	<< " is added to the student's age.\n";;
	cout << "Kershaw' current age: " << kershaw.getAge() << endl;
	cout << setw(LINE_LENGTH)	<< '-' << endl;



	return 0;
}


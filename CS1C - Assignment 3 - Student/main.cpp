/**********************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* ASSIGNMENT 3	: Student
* CLASS         : CS1C
* SECTION       : T TH 6 - 8:50
* DUE DATE      : 9/9/2014
**********************************************************************************/
#include "Header.h"
/**********************************************************************************
*
* Student
* _________________________________________________________________________________
* This program will output regular students and CS1C students' initial info. Then
* 	it will change a CS1C's info and output the change
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


	//Student Trout
	Student		trout;
	//Student Cebrera
	Student 	cebrera("Miguel Cabrera", 456789);
	//Student Reilly
	Student 	reilly("Bill O’Reilly", 87654, 7037031234, 57, 'M',
														"Sophomore", 3.8);
	//Student Winfrey
	Student 	winfrey("Oprah Winfrey", 777744, 2135556789, 50, 'F',
														"Freshman", 3.23);
	//CS1C Student Pujols
	CS1CStudent pujols;
	//CS1C Student Kershaw
	CS1CStudent kershaw("Clayton Kershaw", 156789);
	//CS1C Student Rome
	CS1CStudent rome("Jim Rome", 876545, 7037037654, 40, 'M', "Sophomore", 3.2,
												778899, true, 5, 11, 2015);

	//OUTPUT - Class Headings
	cout << PrintHeader("Elva Nguyen", 'a', "Student", 3);

	//Set Trout' Info
	trout.setName("Mike Trout");
	trout.setID(778899);
	trout.setPhoneNumber(9495551234);
	trout.setAge(22);
	trout.setGender('m');
	trout.setClassStanding("Freshman");
	trout.setGPA(4.0);

	//Set's Cebrera's Info
	cebrera.setPhoneNumber(2485555555);
	cebrera.setAge(29);
	cebrera.setGender('M');
	cebrera.setClassStanding("Sophomore");
	cebrera.setGPA(3.33);

	//Set Pujols' Info
	pujols.setName("Alberto Pujols");
	pujols.setID(668899);
	pujols.setPhoneNumber(9496651234);
	pujols.setAge(35);
	pujols.setGender('M');
	pujols.setClassStanding("Freshman");
	pujols.setGPA(3.3);
	pujols.setTotalScore(778899);
	pujols.setPythonKnowledge(true);
	pujols.setGradDate(5, 12, 2016);

	//Set Kershaw's Info
	kershaw.setPhoneNumber(2485556543);
	kershaw.setAge(29);
	kershaw.setGender('M');
	kershaw.setClassStanding("Sophomore");
	kershaw.setGPA(2.5);
	kershaw.setTotalScore(456789);
	kershaw.setPythonKnowledge(false);
	kershaw.setGradDate(5, 11, 2015);

	//OUTPUT - Student's Initial Info
	cout << setfill('-');
	cout << "Student's Info Before\n";
	cout << trout.outputStudent();
	cout << setw(LINE_LENGTH) << '-' << endl;
	cout << cebrera.outputStudent();
	cout << setw(LINE_LENGTH) << '-' << endl;
	cout << reilly.outputStudent();
	cout << setw(LINE_LENGTH) << '-' << endl;
	cout << winfrey.outputStudent();
	cout << setw(LINE_LENGTH) << '-' << endl;
	cout << pujols.outputStudent();
	cout << setw(LINE_LENGTH) << '-' << endl;
	cout << kershaw.outputStudent();
	cout << setw(LINE_LENGTH) << '-' << endl;
	cout << rome.outputStudent();
	cout << setw(LINE_LENGTH) << '-' << endl;

	//Change Student's Info
	pujols.setID(112233);
	pujols.setPhoneNumber(9491234567);
	pujols.setAge(40);
	pujols.setGender('M');
	pujols.setClassStanding("Junior");
	pujols.setGPA(3.7);
	pujols.setTotalScore(956235);
	pujols.setPythonKnowledge(true);
	pujols.setGradDate(5, 20, 2017);
	cout << "Alberto Pujols' Info After: \n";
	cout << pujols.outputStudent();
	cout << setw(LINE_LENGTH) << '-' << endl;

	return 0;
}


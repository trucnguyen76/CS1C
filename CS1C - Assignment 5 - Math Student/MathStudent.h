/**********************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* ASSIGNMENT 5	: Math Student
* CLASS         : CS1C
* SECTION       : T TH 6 - 8:50
* DUE DATE      : 9/29/2014
**********************************************************************************/
#ifndef MATHSTUDENT_H_
#define MATHSTUDENT_H_

#include "Student.h"
#include <iomanip>
#include <iostream>

using namespace std;

class MathStudent : public Student
{

public:
						/**********************
						 -----CONSTRUCTORS-----
						 **********************/
	/******************************************************************************
	 * MathStudent()
	 * 	This default constructor will create a Student object
	 *****************************************************************************/
	MathStudent();

	/******************************************************************************
	 * MathStudent()
	 * 	This constructor will receive the student's name and id and create a
	 * 		student object with that info
	 *****************************************************************************/
	MathStudent(string	studentName,		//The Student's Name
				int		studentId);			//The Student's ID
	/******************************************************************************
	 * MathStudent()
	 * 	This copy constructor will read in a Math Student Object, and do a deep
	 * 		copy to the math student  object being created
	 *****************************************************************************/
	MathStudent(const MathStudent &anotherMathStudent);	//Another Math Student
	/******************************************************************************
	 * MathStudent()
	 * 	This constructor will receive a math student's full info and create a math
	 * 		student object with that info
	 *****************************************************************************/
	MathStudent(string		studentName,		//The Student's Name
				int			studentId,			//The Student's ID
				long long	studentPhoneNum,	//The Student's Phone Number
				int			studentAge,			//The Student's Age
				char		studentGender,		//The Student's Gender
				string		studentClass,		//The Student's Class Standing
				double		studentGPA,			//The Student's GPA
				char*		studentAdress,		//The Student's Address
				char*		studentCity,		//The Student's City
				char* 		studentState,		//The Student's State
				int			studentZipCode);	//The Student's Zip Code

						/**********************
						 ------DESTRUCTORS-----
						 **********************/
	/******************************************************************************
	 * ~MathStudent()
	 * 	This default destructor will delete the Student object
	 *****************************************************************************/
	~MathStudent();

						/******************
						 -----MUTATORS-----
						 ******************/
	/******************************************************************************
	 * setAddress()
	 * 	This method receive a pointer points to Student's address from the
	 * 		parameter and change the student's address
	 *****************************************************************************/
	void setAddress(char* studentAddress);//The Pointer points to Student's Address

	/******************************************************************************
	 * setCity()
	 * 	This method receive a pointer points to Student's city from the
	 * 		parameter and change the student's city
	 *****************************************************************************/
	void setCity(char* studentCity);		//The Pointer points to Student's City

	/******************************************************************************
	 * setState()
	 * 	This method receive a pointer points to Student's state from the
	 * 		parameter and change the student's state
	 *****************************************************************************/
	void setState(char* studentState);		//The Pointer points to Student's State

	/******************************************************************************
	 * setZipCode()
	 * 	This method receive Student's zip code from the parameter and change the
	 * 		student's zip code
	 *****************************************************************************/
	void setZipCode(int studentZipCode);	//The Student's Zip Code

	/******************************************************************************
	 * CopyFrom()
	 * 	This method receive a Math Student Object, then copy the info from that
	 * 		math student object to the Math Student Object call the function
	 *****************************************************************************/
	void copyFrom(MathStudent anotherMathStudent);	//Another Math Student Object


						/********************
						-----ACCESSORS-----
						********************/
	/******************************************************************************
	 * getAddress()
	 * 	This method return the pointer points to the Student Address
	 *****************************************************************************/
	char* getAddress()							const;

	/******************************************************************************
	 * getCity()
	 * 	This method return the pointer points to the Student City
	 *****************************************************************************/
	char* getCity()								const;

	/******************************************************************************
	 * getState()
	 * 	This method return the pointer points to the Student State
	 *****************************************************************************/
	char* getState()							const;

	/******************************************************************************
	 * getZipCode()
	 * 	This method return the Student Zip Code
	 *****************************************************************************/
	int getZipCode()							const;

	/******************************************************************************
	 * outputStudent()
	 * 	This method output the student's info
	 *****************************************************************************/
	string outputStudent(int promptLength = 27)	const;	//The length of the prompt

private:
	char* address;		//The pointer point to the Student's Dddress
	char* city;			//The pointer point to the Student's City
	char* state;		//The pointer point to the Student's State
	int   zipCode;		//The Student's Zip Code

};
#endif// MATHSTUDENT_H_


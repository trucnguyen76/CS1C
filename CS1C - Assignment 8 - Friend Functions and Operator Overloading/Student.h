/**********************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* ASSIGNMENT 8	: Friend Functions and Operator Overloading
* CLASS         : CS1C
* SECTION       : T TH 6 - 8:50
* DUE DATE      : 10/14/2014
**********************************************************************************/
#ifndef STUDENT_H_
#define STUDENT_H_

#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

class Student
{

public:
						/**********************
						 -----CONSTRUCTORS-----
						 **********************/
	/******************************************************************************
	 * Student()
	 * 	This default constructor will create a Student object
	 *****************************************************************************/
	Student();

	/******************************************************************************
	 * Student()
	 * 	This constructor will receive the student's name and id and create a
	 * 		student object with that info
	 *****************************************************************************/
	Student(string	studentName,		//The Student's Name
			int		studentId);			//The Student's ID

	/******************************************************************************
	 * Student()
	 * 	This constructor will receive the student's name, id, phone number, age,
	 * 		class standing, gpa and create a student object with that info
	 *****************************************************************************/
	Student(string		studentName,		//The Student's Name
			int			studentId,			//The Student's ID
			long long	studentPhoneNum,	//The Student's Phone Number
			int			studentAge,			//The Student's Age
			char		studentGender,		//The Student's Gender
			string		studentClass,		//The Student's Class Standing
			double		studentGPA);		//The Student's GPA

						/**********************
						 ------DESTRUCTORS-----
						 **********************/
	/******************************************************************************
	 * ~Student()
	 * 	This default destructor will delete the Student object
	 *****************************************************************************/
	virtual ~Student();

						/******************
						 -----MUTATORS-----
						 ******************/
	/******************************************************************************
	 * setName()
	 * 	This method receive the Student's ID from the parameter and change the
	 * 		student's ID
	 *****************************************************************************/
	void setName(string studentName);				//The Student's Name

	/******************************************************************************
	 * setID()
	 * 	This method receive the Student's ID from the parameter and change the
	 * 		student's ID
	 *****************************************************************************/
	void setID(int studentId);						//The Student's Id

	/******************************************************************************
	 * setPhoneNumber()
	 * 	This method receive the Student's phone number from the parameter and
	 * 	change the student's phone number
	 *****************************************************************************/
	void setPhoneNumber(long long studentPhoneNum); //The Student's Phone Number

	/******************************************************************************
	 * setAge()
	 * 	This method receive the Student's age from the parameter and change the
	 * 		student's age
	 *****************************************************************************/
	void setAge(int studentAge);					//The Student's Age

	/******************************************************************************
	 * setGender()
	 * 	This method receive the Student's gender from the parameter and change the
	 * 		student's gender
	 *****************************************************************************/
	void setGender(char studentGender);					//The Student's Gender

	/******************************************************************************
	 * setClass()
	 * 	This method receive the Student's class from the parameter and change the
	 * 		student's class
	 *****************************************************************************/
	void setClassStanding(string studentClass);		//The Student's Class

	/******************************************************************************
	 * setGPA()
	 * 	This method receive the Student's GPA from the parameter and change the
	 * 		student's GPA
	 *****************************************************************************/
	void setGPA(double studentGPA);					//The Student's GPA

						/********************
						-----ACCESSORS-----
						********************/
	/******************************************************************************
	 * getName()
	 * 	This method return the Student's Name
	 *****************************************************************************/
	string getName()							const;

	/******************************************************************************
	 * getID()
	 * 	This method return the Student's ID
	 *****************************************************************************/
	int getID()									const;

	/******************************************************************************
	 * getPhoneNumber()
	 * 	This method return the Student's Phone Number
	 *****************************************************************************/
	long long getPhoneNumber()					const;

	/******************************************************************************
	 * getAge()
	 * 	This method return the Student's Age
	 *****************************************************************************/
	int getAge()								const;

	/******************************************************************************
	 * getGender()
	 * 	This method return the Student's gender as a char
	 *****************************************************************************/
	char getGender()							const;

	/******************************************************************************
	 * getClass()
	 * 	This method return the Student's Class
	 *****************************************************************************/
	string getClassStanding()					const;

	/******************************************************************************
	 * getGPA()
	 * 	This method return the Student's GPA
	 *****************************************************************************/
	double getGPA()								const;

	/******************************************************************************
	 * outputPhoneNumber()
	 * 	This method return the student's phone number as a string
	 *****************************************************************************/
	string outputPhoneNumber()					const;

	/******************************************************************************
	 * outputStudent()
	 * 	This method return the student's gender as a string
	 *****************************************************************************/
	string outputGender()						const;

	/******************************************************************************
	 * outputStudent()
	 * 	This method output the student's info: name, id, phone number, age, class
	 * 		and gpa
	 *****************************************************************************/
	virtual string outputStudent(int promptLength = 25)	const;
									//promptLength : The length of the prompt

private:
	string 		name;			//The student's name
	int 		id;				//The student's id
	long long	phoneNum;		//The student's phone number
	int 		age;			//The student's age
	char		gender;			//The student's gender
	string		classStanding;	//The student's class standing
	double		gpa;			//The student's gpa

};
#endif// STUDENT_H_


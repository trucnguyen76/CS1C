/**********************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* ASSIGNMENT 8	: Friend Functions and Operator Overloading
* CLASS         : CS1C
* SECTION       : T TH 6 - 8:50
* DUE DATE      : 10/14/2014
**********************************************************************************/
#ifndef CS1CSTUDENT_H_
#define CS1CSTUDENT_H_

#include "Student.h"
#include "Date.h"

class MathStudent;

class CS1CStudent: public Student
{

/******************************************************************************
 * CheckID()
 * 	This friend function will check the ID of a math student and a CS1C student
 * 		and return a bool indicates whether the 2 IDs are the same
 *****************************************************************************/
friend bool CheckID(	MathStudent math,	//IN - The math student
						CS1CStudent cs1c);	//IN - The CS1C student
public:
						/**********************
						 -----CONSTRUCTORS-----
						 **********************/
	/******************************************************************************
	 * CS1CStudent()
	 * 	This default constructor will create a Student object
	 *****************************************************************************/
	CS1CStudent();

	/******************************************************************************
	 * CS1CStudent()
	 * 	This constructor will receive the student's name and id and create a
	 * 		student object with that info
	 *****************************************************************************/
	CS1CStudent(string	studentName,		//The Student's Name
				int		studentId);			//The Student's ID

	/******************************************************************************
	 * CS1CStudent()
	 * 	This constructor will receive the student's name, id, phone number, age,
	 * 		class standing, gpa and create a student object with that info
	 *****************************************************************************/
	CS1CStudent(string		studentName,		//The Student's Name
				int			studentId,			//The Student's ID
				long long	studentPhoneNum,	//The Student's Phone Number
				int			studentAge,			//The Student's Age
				char		studentGender,		//The Student's Gender
				string		studentClass,		//The Student's Class Standing
				double		studentGPA,			//The Student's GPA
				double 		studentTotalScore,	//The Student's Total  Scores
				bool 		studentPythonKnow,	//The Student's Python Knowledge
				int			studentGradMonth,	//The Student's Grad Month
				int			studentGradDay,		//The Student's Grad Day
				int			studentGradYear);	//The Student's Grad Year


						/**********************
						 ------DESTRUCTORS-----
						 **********************/
	/******************************************************************************
	 * ~Student()
	 * 	This default destructor will delete the Student object
	 *****************************************************************************/
	virtual ~CS1CStudent();

						/******************
						 -----MUTATORS-----
						 ******************/
	/******************************************************************************
	 * setPythonKnowledge()
	 * 	This method receive the Student's Python Knowledge as a bool from the
	 * 		parameter and change the student's Python Knowledge
	 *****************************************************************************/
	void setPythonKnowledge(bool studentPythonKnowledge);	//The Student's Name

	/******************************************************************************
	 * setGradDate()
	 * 	This method receive the Student's Projected Graduation Date from the
	 * 		parameter and change the student's Projected Graduation Date
	 *****************************************************************************/
	void setGradDate(	int	gradMonth, //Student's Projected Grad Month
						int	gradDay,   //Student's Projected Grad Day
						int	gradYear); //Student's Projected Grad Year

	/******************************************************************************
	 * setTotalScore()
	 * 	This method receive the Student's total assignment score from the parameter
	 * 		and change the student's total assignment score
	 *****************************************************************************/
	void setTotalScore(double studentTotalScore);	//The Student's Total Score

	/******************************************************************************
	 * setAssignmentScore()
	 * 	This method receive the Student's assignment score from the parameter
	 * 		and add that score to the student's total assignment score
	 *****************************************************************************/
	void setAssignmentScore(double assignmentSocre);  //Student's Assignment Score

	/******************************************************************************
	 * ChangeAge()
	 * 	This method receive an integer and adds that integer to the student's age
	 * 		-> return nothing
	 *****************************************************************************/
	void ChangeAge(int addedAge);			   //The age added to the student's age

	/******************************************************************************
	 * operator+
	 * 	This method will override the operator + definition. It will take an
	 * 		integer as a parameter and add that integer to the student age
	 * 		and return a student object with the updated age
	 *****************************************************************************/
	CS1CStudent operator+(int addedAge);		//The age being added

						/********************
						-----ACCESSORS-----
						********************/
	/******************************************************************************
	 * getPythonKnowledge()
	 * 	This method return the Student's Python Knowledge as a bool
	 *****************************************************************************/
	bool getPythonKnowledge()				const;

	/******************************************************************************
	 * getGradDate()
	 * 	This method return the Student's Projected Grad Date
	 *****************************************************************************/
	Date getGradDate()						const;

	/******************************************************************************
	 * getTotalScore()
	 * 	This method return the Student's Total Assignment Score
	 *****************************************************************************/
	double getTotalScore()					const;

	/******************************************************************************
	 * outputStudent()
	 * 	This method output the student's info: name, id, phone number, age, class
	 * 		and gpa
	 *****************************************************************************/
	virtual string outputStudent(int promptLength = 37)	const;
									//promptLength : The length of the prompt
	/******************************************************************************
	 * operator==
	 * 	This method will override the operator == definition. It will take a
	 * 		student object as a parameter and check if the ID of the object
	 * 		calling the function (left operand) is the same with the ID of the
	 * 		student object in the parameter (right operand)
	 *****************************************************************************/
	bool operator==(const CS1CStudent&) const;	//The other CS1CStudent



private:
	double 	totalScore;			//The Student's Total Assignments' Scores
	bool 	pythonKnowledge;	//The Student's Knowledge about Python
	Date	gradDate;			//The Student's Projected Graduation Date

#endif// CS1CSTUDENT_H_
};

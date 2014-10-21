/**********************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* ASSIGNMENT 3	: Student
* CLASS         : CS1C
* SECTION       : T TH 6 - 8:50
* DUE DATE      : 9/9/2014
**********************************************************************************/
#ifndef CS1CSTUDENT_H_
#define CS1CSTUDENT_H_

#include "Student.h"
#include "Date.h"

class CS1CStudent: public Student
{

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
	~CS1CStudent();

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
	string outputStudent(int promptLength = 37)	const;	//The length of the prompt

private:
	double 	totalScore;			//The Student's Total Assignments' Scores
	bool 	pythonKnowledge;	//The Student's Knowledge about Python
	Date	gradDate;			//The Student's Projected Graduation Date

#endif// CS1CSTUDENT_H_
};

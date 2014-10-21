/**********************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* ASSIGNMENT 8	: Friend Functions and Operator Overloading
* CLASS         : CS1C
* SECTION       : T TH 6 - 8:50
* DUE DATE      : 10/14/2014
**********************************************************************************/
#include "CS1CStudent.h"
#include "MathStudent.h"
/******************************************************************************
 * CheckID()
 * 	This friend function will check the ID of a math student and a CS1C student
 * 		and return a bool indicates whether the 2 IDs are the same
 *****************************************************************************/
bool CheckID(	MathStudent math,	//IN - The math student
				CS1CStudent cs1c)	//IN - The CS1C student
{
	return cs1c.getID() == math.getID();
}

					/**********************
					 -----CONSTRUCTORS-----
					 **********************/
/******************************************************************************
 * CS1CStudent()
 * 	This default constructor will create a Student object
 *****************************************************************************/
CS1CStudent::CS1CStudent() : Student()
{
	setTotalScore(0);
	setPythonKnowledge(false);
}

/******************************************************************************
 * CS1CStudent()
 * 	This constructor will receive the student's name and id and create a
 * 		student object with that info
 *****************************************************************************/
CS1CStudent::CS1CStudent(string	studentName,		//The Student's Name
						 int	studentId)			//The Student's ID
: 	Student(studentName, studentId)
{
	setTotalScore(0);
	setPythonKnowledge(false);
}
/******************************************************************************
 * CS1CStudent()
 * 	This constructor will receive the student's name, id, phone number, age,
 * 		class standing, gpa and create a student object with that info
 *****************************************************************************/
CS1CStudent::CS1CStudent(string		studentName,	   //Student's Name
						int			studentId,	   	   //Student's ID
						long long	studentPhoneNum,   //Student's Phone Number
						int			studentAge,		   //Student's Age
						char		studentGender,	   //Student's Gender
						string		studentClass,	   //Student's Class Standing
						double		studentGPA,		   //Student's GPA
						double 		studentTotalScore, //Student's Total Scores
						bool 		studentPythonKnow, //Student's Python Knowledge
						int			studentGradMonth,  //Student's Grad Month
						int			studentGradDay,	   //Student's Grad Day
						int			studentGradYear)   //Student's Grad Year
: Student(studentName, studentId,	studentPhoneNum, studentAge, studentGender,
		studentClass, studentGPA)
{
	setTotalScore(studentTotalScore);
	setPythonKnowledge(studentPythonKnow);
	setGradDate(studentGradMonth, studentGradDay, studentGradYear);
}
					/**********************
					 ------DESTRUCTORS-----
					 **********************/
/******************************************************************************
 * ~Student()
 * 	This default destructor will delete the Student object
 *****************************************************************************/
CS1CStudent::~CS1CStudent(){}

					/******************
					 -----MUTATORS-----
					 ******************/
/******************************************************************************
 * setPythonKnowledge()
 * 	This method receive the Student's Python Knowledge as a bool from the
 * 		parameter and change the student's Python Knowledge
 *****************************************************************************/
void CS1CStudent::setPythonKnowledge(bool studentPythonKnowledge) //Student's Name
{
	pythonKnowledge = studentPythonKnowledge;
}

/******************************************************************************
 * setGradDate()
 * 	This method receive the Student's Projected Graduation Date from the
 * 		parameter and change the student's Projected Graduation Date
 *****************************************************************************/
void CS1CStudent::setGradDate(	int		gradMonth, //Student's Projected Grad Month
								int		gradDay,   //Student's Projected Grad Day
								int		gradYear)  //Student's Projected Grad Year
{
	gradDate = Date(gradMonth, gradDay, gradYear);
}

/******************************************************************************
 * setTotalScore()
 * 	This method receive the Student's total assignment score from the parameter
 * 		and change the student's total assignment score
 *****************************************************************************/
void CS1CStudent::setTotalScore(double studentTotalScore) //Student's Total Score
{
	totalScore = studentTotalScore;
}

/******************************************************************************
 * setAssignmentScore()
 * 	This method receive the Student's assignment score from the parameter
 * 		and add that score to the student's total assignment score
 *****************************************************************************/
void CS1CStudent::setAssignmentScore(double assignmentScore)
									//assignmentScore - Student's Assignment Score
{
	totalScore += assignmentScore;
}
/******************************************************************************
 * ChangeAge()
 * 	This method receive an integer and adds that integer to the student's age
 * 		-> return nothing
 *****************************************************************************/
void CS1CStudent::ChangeAge(int addedAge)	//The age added to the student's age
{
	setAge(getAge() + addedAge);
}
/******************************************************************************
 * operator+
 * 	This method will override the operator + definition. It will take an
 * 		integer as a parameter and add that integer to the student age
 * 		and return a student object with the updated age
 *****************************************************************************/
CS1CStudent CS1CStudent::operator+(int addedAge)		//The age being added
{
	CS1CStudent tempStudent = *this;

	tempStudent.ChangeAge(addedAge);

	return tempStudent;
}


					/********************
					-----ACCESSORS-----
					********************/
/******************************************************************************
 * getPythonKnowledge()
 * 	This method return the Student's Python Knowledge as a bool
 *****************************************************************************/
bool CS1CStudent::getPythonKnowledge()		const
{
	return pythonKnowledge;
}

/******************************************************************************
 * getGradDate()
 * 	This method return the Student's Projected Grad Date
 *****************************************************************************/
Date CS1CStudent::getGradDate()				const
{
	return gradDate;
}

/******************************************************************************
 * getTotalScore()
 * 	This method return the Student's Total Assignment Score
 *****************************************************************************/
double CS1CStudent::getTotalScore()			const
{
	return totalScore;
}

/******************************************************************************
 * outputStudent()
 * 	This method output the student's info: name, id, phone number, age, class
 * 		and gpa
 *****************************************************************************/
string CS1CStudent::outputStudent(int promptLength)	const//The length of the prompt
{
	stringstream output;		//The string stream variable

	output << left;
	output << Student::outputStudent(promptLength);
	output << setw(promptLength) << "Student's Total Score: " << totalScore << endl;
	output << setw(promptLength) << "Student's Projected Graduation Date: "
								 << gradDate.outputDate() << endl;
	output << setw(promptLength) << "Student's Python Knowledge: ";
	output << (pythonKnowledge? "Yes": "No") << endl;

	return output.str();
}
/******************************************************************************
 * operator==
 * 	This method will override the operator == definition. It will take a
 * 		student object as a parameter and check if the ID of the object
 * 		calling the function (left operand) is the same with the ID of the
 * 		student object in the parameter (right operand)
 *****************************************************************************/
bool CS1CStudent::operator==(const CS1CStudent& anotherCS1C) const
														//The other CS1CStudent
{
	return (getID() == anotherCS1C.getID());
}




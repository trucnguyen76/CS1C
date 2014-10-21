/**********************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* ASSIGNMENT 5	: Math Student
* CLASS         : CS1C
* SECTION       : T TH 6 - 8:50
* DUE DATE      : 9/29/2014
**********************************************************************************/
#include "Student.h"
						/**********************
						 -----CONSTRUCTORS-----
						 **********************/
/******************************************************************************
 * Student()
 * 	This default constructor will create a Student object
 *****************************************************************************/
Student::Student()
{
	setName("");
	setID(0);
	setPhoneNumber(0);
	setAge(0);
	setClassStanding("");
	setGPA(0.0);
}

/******************************************************************************
 * Student()
 * 	This constructor will receive the student's name and id and create a
 * 		student object with that info
 *****************************************************************************/
Student::Student(string	studentName,		//The Student's Name
				int		studentId)			//The Student's ID
{
	setName(studentName);
	setID(studentId);
	setPhoneNumber(0);
	setAge(0);
	setClassStanding("");
	setGPA(0.0);
}
/******************************************************************************
 * Student()
 * 	This constructor will receive the student's name, id, phone number, age,
 * 		class standing, gpa and create a student object with that info
 *****************************************************************************/
Student::Student(	string	studentName,		//The Student's Name
					int		studentId,			//The Student's ID
					long long	studentPhoneNum,	//The Student's Phone Number
		   	   	   	int		studentAge,			//The Student's Age
		   	   	   	char	studentGender,		//The Student's Gender
		   	   	   	string	studentClass,		//The Student's Class Standing
		   	   	   	double	studentGPA)			//The Student's GPA
{
	setName(studentName);
	setID(studentId);
	setPhoneNumber(studentPhoneNum);
	setAge(studentAge);
	setGender(studentGender);
	setClassStanding(studentClass);
	setGPA(studentGPA);
}

						/**********************
						 ------DESTRUCTORS-----
						 **********************/
/******************************************************************************
 * ~Student()
 * 	This default destructor will delete the Student object
 *****************************************************************************/
Student::~Student(){}

						/******************
						 -----MUTATORS-----
						 ******************/
/******************************************************************************
 * setName()
 * 	This method receive the Student's ID from the parameter and change the
 * 		student's ID
 *****************************************************************************/
void Student::setName(string studentName)				//The Student's Name
{
	name = studentName;
}

/******************************************************************************
 * setID()
 * 	This method receive the Student's ID from the parameter and change the
 * 		student's ID
 *****************************************************************************/
void Student::setID(int studentId)						//The Student's Id
{
	id = studentId;
}

/******************************************************************************
 * setPhoneNumber()
 * 	This method receive the Student's phone number from the parameter and
 * 	change the student's phone number
 *****************************************************************************/
void Student::setPhoneNumber(long long studentPhoneNum)   //The Student's Phone Number
{
	phoneNum = studentPhoneNum;
}

/******************************************************************************
 * setAge()
 * 	This method receive the Student's age from the parameter and change the
 * 		student's age
 *****************************************************************************/
void Student::setAge(int studentAge)					//The Student's Age
{
	age = studentAge;
}

/******************************************************************************
 * setGender()
 * 	This method receive the Student's gender from the parameter and change the
 * 		student's gender
 *****************************************************************************/
void Student::setGender(char studentGender)				//The Student's Gender
{
	gender = toupper(studentGender);
}

/******************************************************************************
 * setClass()
 * 	This method receive the Student's class from the parameter and change the
 * 		student's class
 *****************************************************************************/
void Student::setClassStanding(string studentClass)		//The Student's Class
{
	classStanding = studentClass;
}

/******************************************************************************
 * setGPA()
 * 	This method receive the Student's GPA from the parameter and change the
 * 		student's GPA
 *****************************************************************************/
void Student::setGPA(double studentGPA)					//The Student's GPA
{
	gpa = studentGPA;
}
						/********************
						-----ACCESSORS-----
						********************/
/******************************************************************************
 * getName()
 * 	This method return the Student's Name
 *****************************************************************************/
string Student::getName()						const
{
	return name;
}
/******************************************************************************
 * getID()
 * 	This method return the Student's ID
 *****************************************************************************/
int Student::getID()							const
{
	return id;
}

/******************************************************************************
 * getPhoneNumber()
 * 	This method return the Student's Phone Number
 *****************************************************************************/
long long Student::getPhoneNumber()			const
{
	return phoneNum;
}

/******************************************************************************
 * getAge()
 * 	This method return the Student's Age
 *****************************************************************************/
int Student::getAge()							const
{
	return age;
}

/******************************************************************************
 * getGender()
 * 	This method return the Student's gender as a char
 *****************************************************************************/
char Student::getGender()						const
{
	return gender;
}

/******************************************************************************
 * getClass()
 * 	This method return the Student's Class
 *****************************************************************************/
string Student::getClassStanding()				const
{
	return classStanding;
}

/******************************************************************************
 * getGPA()
 * 	This method return the Student's GPA
 *****************************************************************************/
double Student::getGPA()						const
{
	return gpa;
}

/******************************************************************************
 * outputPhoneNumber()
 * 	This method return the student's phone number as a string
 *****************************************************************************/
string Student::outputPhoneNumber()				const
{
	stringstream output;		//The Stringstream variable
	output <<  (phoneNum / 10000000) << '-';
	output << (phoneNum % 10000000) / 10000 << '-';
	output << (phoneNum % 10000000) % 10000;

	return output.str();
}

/******************************************************************************
 * outputStudent()
 * 	This method return the student's gender as a string
 *****************************************************************************/
string Student::outputGender()					const
{
	string genderStr;		//The Student's Gender as a string

	//Return gender as a string based on the gender as a char
	switch(gender)
	{
	case 'F':
		genderStr = "Female";
		break;
	case 'M':
		genderStr = "Male";
		break;
	default:
		break;
	}

	return genderStr;
}

/******************************************************************************
 * outputStudent()
 * 	This method output the student's info: name, id, phone number, age, class
 * 		and gpa
 *****************************************************************************/
string Student::outputStudent(int promptLength)	const	//The
{
	stringstream output;		//The string stream variable

	output << left;
	output << setw(promptLength) << "Student's Name: " 		<< name	   << endl;
	output << setw(promptLength) << "Student's ID: " 		<< id      << endl;
	output << setw(promptLength) << "Student's Phone Number: "
															<< outputPhoneNumber()
																	   << endl;
	output << setw(promptLength) << "Student's Age: " 		<< age     << endl;
	output << setw(promptLength) << "Student's Gender: " 	<< outputGender()
																	   << endl;
	output << setw(promptLength) << "Student's Class: " 	<< classStanding
																	   << endl;
	output << setw(promptLength) << "Student's GPA: " 		<< gpa	   << endl;

	return output.str();
}


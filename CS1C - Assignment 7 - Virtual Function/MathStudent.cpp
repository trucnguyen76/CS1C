/**********************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* ASSIGNMENT 7	: Virtual Function
* CLASS         : CS1C
* SECTION       : T TH 6 - 8:50
* DUE DATE      : 10/07/2014
**********************************************************************************/
#include "MathStudent.h"
//#define TEST

						/**********************
						 -----CONSTRUCTORS-----
						 **********************/
/******************************************************************************
 * Student()
 * 	This default constructor will create a Student object
 *****************************************************************************/
MathStudent::MathStudent() :  Student()
{
#ifdef TEST
cout << "Default Constructor is Called" << endl << endl;
#endif

	setAddress("");
	setCity("");
	setState("");
	setZipCode(0);
}

/******************************************************************************
 * Student()
 * 	This constructor will receive the student's name and id and create a
 * 		student object with that info
 *****************************************************************************/
MathStudent::MathStudent(string	studentName,		//The Student's Name
						int		studentId)			//The Student's ID
: Student(studentName, studentId)
{
#ifdef TEST
cout << "Non-default Constructor is Called" << endl << endl;
#endif
	setAddress("");
	setCity("");
	setState("");
	setZipCode(0);
}
/******************************************************************************
 * MathStudent()
 * 	This copy constructor will read in a Math Student Object, and do a deep
 * 		copy to the math student  object being created
 *****************************************************************************/
MathStudent::MathStudent(const MathStudent &anotherMathStudent)
												//Another Math Student
{
#ifdef TEST
cout << "Copy Constructor is Called" << endl << endl;
#endif
	setName(anotherMathStudent.getName());
	setID(anotherMathStudent.getID());
	setPhoneNumber(anotherMathStudent.getPhoneNumber());
	setAge(anotherMathStudent.getAge());
	setGender(anotherMathStudent.getGender());
	setClassStanding(anotherMathStudent.getClassStanding());
	setGPA(anotherMathStudent.getGPA());
	setZipCode(anotherMathStudent.getZipCode());

	setAddress(anotherMathStudent.address);
	setCity(anotherMathStudent.city);
	setState(anotherMathStudent.state);
}

/******************************************************************************
 * MathStudent()
 * 	This constructor will receive a math student's full info and create a math
 * 		student object with that info
 *****************************************************************************/
MathStudent::MathStudent(string		studentName,	//The Student's Name
						int			studentId,		//The Student's ID
						long long	studentPhoneNum,//The Student's Phone Number
						int			studentAge,		//The Student's Age
						char		studentGender,	//The Student's Gender
						string		studentClass,	//The Student's Class Standing
						double		studentGPA,		//The Student's GPA
						char*		studentAddress,	//The Student's Address
						char*		studentCity,	//The Student's City
						char* 		studentState,	//The Student's State
						int			studentZipCode)	//The Student's Zip Code
: Student(studentName, studentId, studentPhoneNum, studentAge, studentGender,
				studentClass, studentGPA)
{
	#ifdef TEST
	cout << "Non-default Constructor is Called" << endl << endl;
	#endif
	setAddress(studentAddress);
	setCity(studentCity);
	setState(studentState);
	setZipCode(studentZipCode);
}

					/**********************
					 ------DESTRUCTORS-----
					 **********************/
/******************************************************************************
 * ~Student()
 * 	This default destructor will delete the Student object
 *****************************************************************************/
MathStudent::~MathStudent()
{
#ifdef TEST
cout << "Destructor is Called" << endl << endl;
#endif

	delete[] address;
#ifdef TEST
cout << "delete[] address is Called" << endl << endl;
#endif

	delete[] city;
#ifdef TEST
cout << "delete[] city is Called" << endl << endl;
#endif

	delete[] state;
#ifdef TEST
cout << "delete[] state is Called" << endl << endl;
#endif
}

					/******************
					 -----MUTATORS-----
					 ******************/
/******************************************************************************
 * setAddress()
 * 	This method receive a pointer points to Student's address from the
 * 		parameter and change the student's address
 *****************************************************************************/
void MathStudent::setAddress(char* studentAddress)	//Pointer points to Address
{
	address = new char[strlen(studentAddress) + 1];
	strcpy(address, studentAddress);
}

/******************************************************************************
 * setCity()
 * 	This method receive a pointer points to Student's city from the
 * 		parameter and change the student's city
 *****************************************************************************/
void MathStudent::setCity(char* studentCity)	//Pointer points to City
{
		city = new char[strlen(studentCity) + 1];
		strcpy(city, studentCity);
}

/******************************************************************************
 * setState()
 * 	This method receive a pointer points to Student's state from the
 * 		parameter and change the student's state
 *****************************************************************************/
void MathStudent::setState(char* studentState)		//Pointer points to State
{
		state = new char[strlen(studentState) + 1];
		strcpy(state, studentState);
}

/******************************************************************************
 * setZipCode()
 * 	This method receive Student's zip code from the parameter and change the
 * 		student's zip code
 *****************************************************************************/
void MathStudent::setZipCode(int studentZipCode)	//The Student's Zip Code
{
	zipCode = studentZipCode;
}

/******************************************************************************
 * copyFrom()
 * 	This method receive a Math Student Object, then copy the info from that
 * 		math student object to the Math Student Object call the function
 *****************************************************************************/
void MathStudent::copyFrom(MathStudent anotherMathStudent)	//Another Math Student
{
#ifdef TEST
cout << "Copy From(deep copy) is Called" << endl << endl;
#endif
	setName(anotherMathStudent.getName());
	setID(anotherMathStudent.getID());
	setPhoneNumber(anotherMathStudent.getPhoneNumber());
	setAge(anotherMathStudent.getAge());
	setGender(anotherMathStudent.getGender());
	setClassStanding(anotherMathStudent.getClassStanding());
	setGPA(anotherMathStudent.getGPA());
	setZipCode(anotherMathStudent.getZipCode());

	delete[] address;
	delete[] city;
	delete[] state;

	setAddress(anotherMathStudent.address);
	setCity(anotherMathStudent.city);
	setState(anotherMathStudent.state);
}


					/********************
					-----ACCESSORS-----
					********************/
/******************************************************************************
 * getAddress()
 * 	This method return the pointer points to the Student Address
 *****************************************************************************/
char* MathStudent::getAddress()								const
{
	return address;
}

/******************************************************************************
 * getCity()
 * 	This method return the pointer points to the Student City
 *****************************************************************************/
char* MathStudent::getCity()								const
{
	return city;
}

/******************************************************************************
 * getState()
 * 	This method return the pointer points to the Student State
 *****************************************************************************/
char* MathStudent::getState()								const
{
	return state;
}

/******************************************************************************
 * getZipCode()
 * 	This method return the Student Zip Code
 *****************************************************************************/
int MathStudent::getZipCode()								const
{
	return zipCode;
}


/******************************************************************************
 * outputStudent()
 * 	This method output the student's info
 *****************************************************************************/
string MathStudent::outputStudent(int promptLength)			const
										//The length of the prompt
{
	stringstream output;		//The String Stream Variable

	output << Student::outputStudent(promptLength);
	output << left;

	output << setw(promptLength) << "Student's Address: " 	<< address
															<< endl;
	output << setw(promptLength) << "Student's City:"	  	<< city
															<< endl;
	output << setw(promptLength) << "Student's State:"	  	<< state
							   	 << ", " << getZipCode()    << endl;

	return output.str();




}

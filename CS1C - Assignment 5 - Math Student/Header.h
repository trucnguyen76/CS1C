/**********************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* ASSIGNMENT 5	: Math Student
* CLASS         : CS1C
* SECTION       : T TH 6 - 8:50
* DUE DATE      : 9/29/2014
**********************************************************************************/
#ifndef HEADER_H_
#define HEADER_H_

#include "Student.h"
#include "MathStudent.h"
#include <iomanip>
#include <iostream>
#include <string>
/**********************************************************************************
 * PrintHeader
 * 	This function receives the programmer's name, assignment name, type
 * 		 and number then outputs the appropriate header
 * 		 -> return class headings
 *********************************************************************************/
string PrintHeader(	string  programmer,	//IN 		- programmer(s)'s name
					char 	asType, 	//IN 		- assignment type
					string 	asName,		//IN & OUT 	- assignment name
					int 	asNum);		//IN & OUT 	- assignment number

MathStudent PassAndReturnByCopy(MathStudent student1);

MathStudent& PassAndReturnByReference(MathStudent &student1);

#endif //HEADER_H_

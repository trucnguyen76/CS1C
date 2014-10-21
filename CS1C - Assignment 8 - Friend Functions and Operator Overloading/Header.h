/**********************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* ASSIGNMENT 8	: Friend Functions and Operator Overloading
* CLASS         : CS1C
* SECTION       : T TH 6 - 8:50
* DUE DATE      : 10/14/2014
**********************************************************************************/
#ifndef HEADER_H_
#define HEADER_H_

#include "Student.h"
#include "MathStudent.h"
#include "CS1CStudent.h"
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

#endif //HEADER_H_

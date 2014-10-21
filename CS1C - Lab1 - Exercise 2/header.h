/**********************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* LAB 1 		: Exercise 2
* CLASS         : CS1C
* SECTION       : T TH 6 - 8:50
* DUE DATE      : 8/20/2014
**********************************************************************************/
#ifndef HEADER_H_
#define HEADER_H_

#include <iomanip>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

enum Month
{
	JANUARY,
	FEBRUARY,
	MARCH,
	APRIL,
	MAY,
	JUNE,
	JULY,
	AUGUST,
	SEPTEMBER,
	OCTOBER,
	NOVEMBER,
	DECEMBER
};

//PROTOTYPES
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

#endif /* HEADER_H_ */

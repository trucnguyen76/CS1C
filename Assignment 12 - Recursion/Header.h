/*************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* ASSIGNMENT 12 : Recursion
* CLASS         : CS1C
* SECTION       : T - Th 6 - 9pm
* DUE DATE      : 11/13/2014
*************************************************************************/
#ifndef HEADER_H_
#define HEADER_H_

#include <string>
#include <iostream>
#include <iomanip>

#include "GetAndCheckNumInput.h"

using namespace std;

//PROTOTYPES

/**************************************************************************
 * PrintHeader
 * 	This function receives the programmer's name, assignment name, type
 * 		 and number then outputs the appropriate header
 * 		 -> return class headings
 ************************************************************************/
string PrintHeader(	string  programmer,	//IN 		- programmer(s)'s name
					char 	asType, 	//IN 		- assignment type
					string 	asName,		//IN & OUT 	- assignment name
					int 	asNum);		//IN & OUT 	- assignment number

/*******************************************************************************
 * ReverseString
 *  This function will read in a string and then return a reverse of that string
 *  	This function will use recursion. This function will keep on calling
 *  	itself until it reach the beginning character of the original string.
 *  	 Then it will return back to itself	(recursive) -> keep adding the
 *  	 characters in the reverse order
 *  -> return the string in reverse order
 ******************************************************************************/
string ReverseString	(string str);			//IN - The original string

#endif /* HEADER_H_ */





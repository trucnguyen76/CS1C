/**********************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* ASSIGNMENT 2	: Deck Of Cards
* CLASS         : CS1C
* SECTION       : T TH 6 - 8:50
* DUE DATE      : 9/2/2014
**********************************************************************************/
#ifndef HEADER_H
#define HEADER_H

#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>


using namespace std;

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




#endif /*HEADER_H */

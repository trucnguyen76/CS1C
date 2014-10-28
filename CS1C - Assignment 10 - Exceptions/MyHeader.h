/**************************************************************************
 * AUTHOR     	: Elva Nguyen
 * STUDENT ID 	: 366160
 * LAB #9		: Queue Template
 * CLASS      	: Computer Science 1C
 * SECTION    	: T - Th 6 - 9pm
 * DUE DATE   	: 10/21/14
 *************************************************************************/
#ifndef MYHEADER_H_
#define MYHEADER_H_

//PREPROCESSOR DIRECTIVES

#include <iomanip>
#include <iostream>
#include <string>
#include <limits>
#include <ios>
#include <sstream>
#include <queue>
#include "Queue.h"
using namespace std;



//PROTOTYPES

/**************************************************************************
 * PrintHeader
 * 		This function receives the programmer's name, assignment name, type
 * 		 and number then outputs the appropriate header
 * 		 -> return class headings
 ************************************************************************/
string PrintHeader(	string  programmer,	//IN 		- programmer(s)'s name
					char 	asType, 	//IN 		- assignment type
					string 	asName,		//IN & OUT 	- assignment name
					int 	asNum);		//IN & OUT 	- assignment number


#endif /* QUEUE_H_ */

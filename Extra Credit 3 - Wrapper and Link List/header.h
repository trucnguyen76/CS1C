/**************************************************************************
 * AUTHOR     	: Elva Nguyen
 * STUDENT ID 	: 366160
 * ASSIGNMENT 3	: Extra Credit 3 - Wrappers
 * CLASS      	: Computer Science 1C
 * SECTION    	: T - Th 6 - 9pm
 * DUE DATE   	: 12/2/14
 *************************************************************************/

#include "link5.h"
#include "linkedStack.h"
#include <string>
#include <sstream>
#include <iomanip>
#include <iostream>
using namespace std;

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

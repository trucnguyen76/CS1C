/**********************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* LAB 5			: Inheritance - Cylinder Type
* CLASS         : CS1C
* SECTION       : T TH 6 - 8:50
* DUE DATE      : 9/4/2014
**********************************************************************************/
#ifndef HEADER_H_
#define HEADER_H_

#include "Cylinder.h"
#include <iomanip>
#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include <ios>


enum Menu
{
	EXIT,					//Exit   the Program
	ENTER_RADIUS,			//Enter  the Radius
	ENTER_HEIGHT,			//Enter  the Height
	OUT_RADIUS,				//Output the Radius
	OUT_HEIGHT,				//Output the Height
	CALC_SURFACE_AREA,		//Output the Surface Area
	CALC_VOLUME,			//Output the Volume
	OUT_CYLINDER			//Output the Cylinder's info
};


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
/**********************************************************************************
 * GetAndCheckIntInput
 * 		This function receives the prompt, upper bound and lower bound number,
 * 		then will prompt for a number from the user, error check it then
 * 		-> return the valid input number
 *********************************************************************************/
int GetAndCheckIntInput(string  prompt,			//IN - The Prompt
						int		lowerBound,		//IN - The Lower Bound
						int	    upperBound);	//IN - The Upper Bound
#endif //HEADER_H_

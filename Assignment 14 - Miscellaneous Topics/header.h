/*********************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* ASSIGNMENT 13	: Link List
* CLASS         : CS1C
* SECTION       : T TH 6 - 8:50
* DUE DATE      : 11/20/2014
*********************************************************************************/
#ifndef HEADER_H_
#define HEADER_H_

#include <iomanip>
#include <iostream>
#include <string>
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
float CubeRoot(float number);			//IN - The number that takes cube root

float Cube (float number);				//IN - The number being cubed

void tabulate(float(*function)(float),	//IN - The function that return a float
										//		and have a float as a parameter
				float number);			//IN - The number for the func parameter



#endif /* HEADER_H_ */





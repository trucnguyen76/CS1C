/**************************************************************************
 * AUTHOR     	: Elva Nguyen, Nicole Nelson
 * STUDENT ID 	: 366160, 359877
 * LAB #9		: Implementing a Stack
 * CLASS      	: Computer Science 1B
 * SECTION    	: M-W 10am -12pm
 * DUE DATE   	: 4/2/14
 *************************************************************************/
#ifndef QUEUE_H_
#define QUEUE_H_

//PREPROCESSOR DIRECTIVES

#include <iomanip>
#include <iostream>
#include <string>
#include <limits>
#include <ios>
#include <sstream>
#include "Queue.h"
using namespace std;


//ENUM
enum MenuOptions
{
	EXIT,
	ENQUEUE,
	DEQUEUE,
	ISEMPTY,
	FRONT,
	SIZE,
	OUTPUT_LIST,
	CLEAR_QUEUE
};


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
/**************************************************************************
 * GetCharInput
 * 		This function prompts for a character from the user, then compare
 * 		it with the accepted characters.
 * 		-> return the valid input character
 ************************************************************************/

char GetCharInput (string prompt,			//IN - The Prompt
					char  acceptedChar1,	//IN - The 1st Accepted Character
					char  acceptedChar2);	//IN - The 2nd Accepted Character

/**************************************************************************
 * GetAndCheckNumInput
 * 		This function receives the prompt, upper bound and lower bound number,
 * 		then will prompt for a number from the user, error check it then
 * 		-> return the valid input number
 ************************************************************************/
int GetAndCheckNumInput(string  prompt,		//IN - The Prompt
						int		lowerBound,	//IN - The Lower Bound
						int	    upperBound);//IN - The Upper Bound

/**************************************************************************
 * GetStringInput
 * 		This function receives the prompt and prompt for a string from user
 * 		-> return the string
 ************************************************************************/
string GetStringInput (string prompt);	//IN - The Prompt

#endif /* QUEUE_H_ */

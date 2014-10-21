/**************************************************************************
 * AUTHOR     	: Elva Nguyen, Nicole Nelson
 * STUDENT ID 	: 366160, 359877
 * LAB #9		: Implementing a Stack
 * CLASS      	: Computer Science 1B
 * SECTION    	: M-W 10am -12pm
 * DUE DATE   	: 4/2/14
 *************************************************************************/
#include "MyHeader.h"
/**************************************************************************
 *
 * FUNCTION GetStringInput
 * ________________________________________________________________________
 * 	This function receives the prompt and prompt for a string from user
 * 		-> return the string
 * ________________________________________________________________________
 * PRE-CONDITIONS
 *		prompt	: The Prompt has to be previously defined
 *
 * POST-CONDITIONS
 * 		RETURN the string
 ************************************************************************/
string GetStringInput (string prompt)	//IN - The Prompt
{
	/**********************************************************************
	 * CONSTANTS
	 * --------------------------------------------------------------------
	 * PROMPT_COL	: The Width of the prompt
	 *********************************************************************/
	const int PROMPT_COL = 14;

	string str;	//IN - the input string from user

	cout << left;
	//Prompt for the input string
	cout << setw(PROMPT_COL) << prompt;
	getline (cin, str);

	cout << right;

	return str;
}

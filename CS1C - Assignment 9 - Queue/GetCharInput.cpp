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
 * FUNCTION GetCharInput
 * ________________________________________________________________________
 * 	This function prompts for a character from the user, then compare it with
 * 		the accepted characters.
 * 		-> return the valid input character
 * ________________________________________________________________________
 * PRE-CONDITIONS
 *	The following variable have to be previously defined:
 *		prompt			: The Prompt for the Character
 *		acceptedChar1	: The First Accepted Character
 *		acceptedChar2	: The Second Accepted Character
 *
 * POST-CONDITIONS
 * 		This function will return the valid character
 ************************************************************************/

char GetCharInput (string prompt,			//IN - The Prompt
					char  acceptedChar1,	//IN - The 1st Accepted Character
					char  acceptedChar2)	//IN - The 2nd Accepted Character
{
	/**********************************************************************
	 * CONSTANTS
	 * --------------------------------------------------------------------
	 * PROMPT_COL	: The Width of the Prompt
	 * ERROR_STR	: The Length of the Error Message
	 *********************************************************************/
	const int PROMPT_COL 	= 14;
	const int ERROR_STR		= 41;

	char input;		//IN & OUT 	- The input character
	bool valid;		//CALC 		- The validity of the character

	//Error check the input
	do
	{
		cout << left;
		cout << setw(PROMPT_COL) << prompt;
		cin.get(input);
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		input = toupper(input);
		acceptedChar1 = toupper(acceptedChar1);
		acceptedChar2 = toupper(acceptedChar2);

		valid = input == acceptedChar1 || input == acceptedChar2;
		/*If the character does not match with both the acceptedChar, output
			an error message */
		if (!valid)
		{
			cout << endl;
			cout << "**** " << input << setw(ERROR_STR - 6)
				 << " is an invalid entry " << " ****\n";
			cout << "**** Please input a letter, either "
				 << acceptedChar1 << " or " << acceptedChar2 << " ****\n\n";
		}

	}while(!valid);

	cout << right;

	return input;
}

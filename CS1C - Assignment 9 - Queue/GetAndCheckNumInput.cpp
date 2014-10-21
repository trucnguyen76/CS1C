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
 * FUNCTION GetAndCheckNumInput
 * ________________________________________________________________________
 * 	This function receives the prompt, upper bound and lower bound number,
 * 		then will prompt for a number from the user, error check it then
 * 		-> return the valid input number
 * ________________________________________________________________________
 * PRE-CONDITIONS
 *		prompt		: The Prompt has to be previously defined
 *		lowerBound	: The Lower Bound number has to be previously defined
 *		upperBound	: The Upper Bound number has to be previously defined
 *
 * POST-CONDITIONS
 * 		RETURN the valid input number
 ************************************************************************/

int GetAndCheckNumInput(string  prompt,		//IN - The Prompt
						int		lowerBound,	//IN - The Lower Bound
						int	    upperBound)	//IN - The Upper Bound

{
	/**********************************************************************
	 * CONSTANTS
	 * --------------------------------------------------------------------
	 * PROMPT_COL	: The Width of the prompt
	 *********************************************************************/
	const int PROMPT_COL		= 14;

	int input;				//IN & OUT 	- the input from the user
	bool valid;				//CALC 		- the validity of the input from the user
	int	errorMes1Length;	//CALC		- the length of the 1st error mes line
	int errorMes2Length;	//CALC		- the length of the 2nd error mes line
	string errorMes1;		//CALC		- the 1st line of the error message
	string errorMes2;		//CALC		- the 2nd line of the error message
	stringstream	convert;//CALC - convert an int to a string

	cout << left;

	//Error Check the Number
	do
	{
		cout << setw(PROMPT_COL) << prompt;
		/*If the user enter a character, this will check whether input buffer
		 * 	is in fail state of not */
		if (!(cin >> input))
		{
			cout << endl;
			cout << "**** Please input a NUMBER between " << lowerBound
				 << " and " << upperBound << " ****\n\n";

			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			valid = false;
		}
		//Check whether the input is in range or not
		else
		{
			valid = input >= lowerBound && input <= upperBound;

			//If the input is invalid, output the error message
			if(!valid)
			{
				/*************************************************************
				 * Use the stringstream variable to convert an int to a string,
				 * then put it in the error message string. Then take the
				 * length of the two lines, check which one is longer and use
				 * the length of the longer line for the setw
				 *************************************************************/
				convert << lowerBound;
				errorMes2 =  "**** Please input a number between " + convert.str();
				convert.str("");

				convert << upperBound;
				errorMes2 = errorMes2 + " and " + convert.str();
				convert.str("");


				convert << input;
				errorMes1 = "**** The number " + convert.str() + " is an invalid entry";
				convert.str("");

				errorMes1Length = errorMes1.length();
				errorMes2Length = errorMes2.length();

				cout << endl;
				if (errorMes1Length < errorMes2Length)
				{
					cout << setw(errorMes2Length) << errorMes1 << " ****\n";
					cout << setw(errorMes2Length) << errorMes2 << " ****\n\n";
				}
				else
				{
					cout << setw(errorMes1Length) << errorMes1 << " ****\n";
					cout << setw(errorMes1Length) << errorMes2 << " ****\n\n";
				}

			}
		}
	}while(!valid);

	cout << endl;
	cout << right;

	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	return input;
}

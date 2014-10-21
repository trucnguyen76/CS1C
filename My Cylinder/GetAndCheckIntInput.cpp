/**********************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* LAB 5			: Inheritance - Cylinder Type
* CLASS         : CS1C
* SECTION       : T TH 6 - 8:50
* DUE DATE      : 9/4/2014
**********************************************************************************/
#include "Header.h"
/**********************************************************************************
 *
 * FUNCTION GetAndCheckIntInput
 * ________________________________________________________________________________
 * 	This function receives the prompt, upper bound and lower bound number,
 * 		then will prompt for a number from the user, error check it then
 * 		-> return the valid int number
 * ________________________________________________________________________________
 * PRE-CONDITIONS
 *		prompt		: The Prompt has to be previously defined
 *		lowerBound	: The Lower Bound number has to be previously defined
 *		upperBound	: The Upper Bound number has to be previously defined
 *
 * POST-CONDITIONS
 * 		RETURN the valid int number
 *********************************************************************************/

int GetAndCheckIntInput(string  prompt,		//IN - The Prompt
						int		lowerBound,	//IN - The Lower Bound
						int	    upperBound)	//IN - The Upper Bound

{
	/******************************************************************************
	 * CONSTANTS
	 * ----------------------------------------------------------------------------
	 * PROMPT_COL	: The Width of the prompt
	 *****************************************************************************/

	long long input;		//IN & OUT 	- the input from the user
	bool valid;				//CALC 		- the validity of the input from user
	int	errorMes1Length;	//CALC		- the length of the 1st error mes line
	int errorMes2Length;	//CALC		- the length of the 2nd error mes line
	string errorMes1;		//CALC		- the 1st line of the error message
	string errorMes2;		//CALC		- the 2nd line of the error message
	stringstream	convert;//CALC 		- convert a mix of str and int to a str

	cout << left;

	//Error Check the Number
	do
	{
		cout <<  prompt;
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
				/******************************************************************
				 * Use the stringstream variable to convert store the int and
				 * the string portion of the error message, then convert
				 * everything into a string and store in the error message str,
				 * Then take the length of the two lines, check which one is
				 *  longer and use the length of the longer line for the setw
				 *****************************************************************/
				//Convert the first line of the error message
				convert << "**** The number " << input
						<< " is an invalid entry";

				errorMes1 = convert.str();
				convert.str("");
				//Convert the second line of the error message
				convert << "**** Please input a number between " << lowerBound
						<<  " and " << upperBound;

				errorMes2 = convert.str();
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

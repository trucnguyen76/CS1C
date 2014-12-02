/*************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* ASSIGNMENT 12 : Recursion
* CLASS         : CS1C
* SECTION       : T - Th 6 - 9pm
* DUE DATE      : 11/13/2014
*************************************************************************/

#ifndef GET_AND_CHECK_NUM_INPUT_H_
#define GET_AND_CHECK_NUM_INPUT_H_

#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <limits>
#include <ios>

using namespace std;

/**************************************************************************
 * GetAndCheckInput
 * 	This function receives the prompt, upper bound and lower bound number,
 * 		then will prompt for a number from the user, error check it then
 * 		-> return the valid number
 ************************************************************************/
template <class type>
int GetAndCheckNumInput(string  prompt,			//IN - The Prompt
						type	lowerBound,		//IN - The Lower Bound
						type    upperBound);	//IN - The Upper Bound

/**************************************************************************
 *
 * FUNCTION GetAndCheckIntInput
 * ________________________________________________________________________
 * 	This function receives the prompt, upper bound and lower bound number,
 * 		then will prompt for a number from the user, error check it then
 * 		-> return the valid int number
 * ________________________________________________________________________
 * PRE-CONDITIONS
 *		prompt		: The Prompt has to be previously defined
 *		lowerBound	: The Lower Bound number has to be previously defined
 *		upperBound	: The Upper Bound number has to be previously defined
 *
 * POST-CONDITIONS
 * 		RETURN the valid int number
 ************************************************************************/
template <class type>
int GetAndCheckNumInput(string  prompt,		//IN - The Prompt
						type	lowerBound,	//IN - The Lower Bound
						type    upperBound)	//IN - The Upper Bound

{
	/**********************************************************************
	 * CONSTANTS
	 * --------------------------------------------------------------------
	 * PROMPT_COL	: The Width of the prompt
	 *********************************************************************/

	type input;				//IN & OUT 	- the input from the user
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
				/*************************************************************
				 * Use the stringstream variable to convert store the int and
				 * the string portion of the error message, then convert
				 * everything into a string and store in the error message str,
				 * Then take the length of the two lines, check which one is
				 *  longer and use the length of the longer line for the setw
				 *************************************************************/
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

#endif /* GET_AND_CHECK_NUM_INPUT_H_ */

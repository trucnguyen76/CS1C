/*************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* ASSIGNMENT 12 : Recursion
* CLASS         : CS1C
* SECTION       : T - Th 6 - 9pm
* DUE DATE      : 11/13/2014
*************************************************************************/
#include <string>
#include <iomanip>
#include <iostream>
#include "Header.h"
using namespace std;

/*******************************************************************************
 * ReverseString Function
 * -----------------------------------------------------------------------------
 *  This function will read in a string and then return a reverse of that string
 *  	This function will use recursion. This function will keep on calling
 *  	itself until it reach the beginning character of the original string.
 *  	 Then it will return back to itself	(recursive) -> keep adding the
 *  	 characters in the reverse order
 *  -> return the string in reverse order
 *  ----------------------------------------------------------------------------
*  	PRE-CONDITION:
 *  	str		: The String being reversed has to be pre-defined
 *
 *  POST-CONDITION:
 *  	This function will return the string in the reverse order
 ******************************************************************************/
string ReverseString	(string str)			//IN - The original string
{
	/**************************************************************************
	 * If - else : If str.size() == 1, return the last character (the beginning
	 * 	character; otherwise, return the character at the end and call the
	 * 	function again with the substring without the last character
	 **************************************************************************/

	if(str.size() != 1)
	{
		return (str.at(str.size() - 1) +
				(ReverseString(str.substr(0, str.size() - 1))));
	}
	else
	{
		return str.substr(0,str.size());

	}

}





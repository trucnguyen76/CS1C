/**************************************************************************
* AUTHOR        : Luke Clements & Elva Nguyen
* STUDENT ID    : 874218, 366160
* LAB #13       : Inheritance, Overriding, Overloading
* CLASS         : CS1B
* SECTION       : M W 10-11:50
* DUE DATE      : 5/6/2014
**************************************************************************/
#include "MyHeader.h"
/**************************************************************************
 *
 * FUNCTION ConvertString
 * _________________________________________________________________________
 * 	This function receives a string then convert it to upper or lower case
 * 		-> return the converted string
 * _________________________________________________________________________
 * PRE-CONDITIONS
 *	The following variables have to be previously defined:
 *		str			: the string needs to be converted
 *		convertType	: the conversion type (lower,  upper or Camel case)
 *
 * POST-CONDITIONS
 * 		This function will return the converted string
 *************************************************************************/
string ConvertString(string str, 		//IN - the string to be converted
					 char 	convertType)//IN - the conversion type
										//		(upper case or lower case)
{
	int index;				//CALC 	 - the character's index in string
	int sizeStr;			//CALC 	 - the size of the string
	string convertedStr;	//OUT 	- the converted string

	index = 0;

	convertType = toupper(convertType);

	sizeStr = str.size();

	/**********************************************************************
	 * This switch statement will determine whether the string will be
	 * converted to upper case(u) or lower case (l)or Camel case(c)
	 *********************************************************************/

	switch (convertType)
	{
	case 'U':
				while(index < sizeStr)
				{
					/*toupper every single char in the string and
					 	 concatenate them to the converted string*/
					convertedStr += toupper(str[index]);
					index++;
				}
				break;

	case 'L':
				while(index < sizeStr)
				{
					/*tolower every single char in the string and
						 concatenate them to the converted string*/
					convertedStr += tolower(str[index]);
					index++;
				}
				break;

	case 'C':
				while(index < sizeStr)
				{
					/*toupper to the first char or the char that is right
					 * after a space */
					if(index == 0 || isspace(str[index - 1]))
					{
						convertedStr += toupper(str[index]);
					}
					//tolower the rest of the char
					else
					{
						convertedStr += tolower(str[index]);
					}
					index++;
				}
	}
	return convertedStr;

}

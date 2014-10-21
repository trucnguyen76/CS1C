/**********************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* ASSIGNMENT 6*	: Extra Credit
* CLASS         : CS1C
* SECTION       : T TH 6 - 8:50
* DUE DATE      : 9/30/2014
**********************************************************************************/
#include "Header.h"
/**************************************************************************
 *
 * FUNCTION ConvertString
 * _________________________________________________________________________
 * 	This function receives a c-string then convert it to upper or lower case
 * 		-> return the pointer to the converted c-string
 * _________________________________________________________________________
 * PRE-CONDITIONS
 *	The following variables have to be previously defined:
 *		str			: the c-string needs to be converted
 *		convertType	: the conversion type (lower,  upper or Camel case)
 *
 * POST-CONDITIONS
 * 		This function will return the pointer to the converted c-string
 *************************************************************************/
char* ConvertString( char* 	str, 			//IN - the string to be converted
					 char 	convertType)	//IN - the conversion type
											//		(upper case or lower case)
{
	int index;				//CALC 	 - the character's index in string
	int sizeStr;			//CALC 	 - the size of the string
	char* convertedStr;		//OUT 	- the converted string

	index = 0;

	convertType = toupper(convertType);

	convertedStr = new char(strlen(str) + 1);

	sizeStr = strlen(str);

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
					convertedStr[index] = toupper(str[index]);
					index++;
				}
				break;

	case 'L':
				while(index < sizeStr)
				{
					/*tolower every single char in the string and
						 concatenate them to the converted string*/
					convertedStr[index] = tolower(str[index]);
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
						convertedStr[index] = toupper(str[index]);
					}
					//tolower the rest of the char
					else
					{
						convertedStr[index] = tolower(str[index]);
					}
					index++;
				}
	}
	return convertedStr;

}




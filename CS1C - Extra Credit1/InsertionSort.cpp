/**********************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* ASSIGNMENT 6*	: Extra Credit
* CLASS         : CS1C
* SECTION       : T TH 6 - 8:50
* DUE DATE      : 9/30/2014
**********************************************************************************/
#include "header.h"
/**************************************************************************
 *
 * FUNCTION InsertionSort
 * _________________________________________________________________________
 * 	This function receives the array and the array's size, then sort it
 * 		-> return the elements back to the array
 * _________________________________________________________________________
 * PRE-CONDITIONS
 *		charAr[]	: The Array Being Sorted has to be previously defined
 *		AR_SIZE		: The Array Size has to be previously defined
 *
 * POST-CONDITIONS
 * 		This function will sort the entire array.
 ************************************************************************/
void InsertionSort (	  char* charAr[],	//IN & OUT - the array being sorted
					const int AR_SIZE)		//IN & CALC	- the array size
{
	char* temp;	   		//CALC - the value being compared to to sort
	int sortItemIndex;  //CACL - the value being sorted
	int tempIndex;		//CALC - the index for the temporary value in the
						//			holder

	//The for loop will go through the whole array and sort it
	for (tempIndex = 1; tempIndex < AR_SIZE; tempIndex++)
	{
		temp = new char[strlen(charAr[tempIndex] + 1)];
		strcpy(temp, charAr[tempIndex]);
		sortItemIndex = tempIndex - 1;
		/******************************************************************
		 * The while loop take the sortItem and compare it to the holder
		 * value, if its greater than the temp, then the value being sorted
		 *  will moved one to the right
		 * ***************************************************************/

		while (sortItemIndex >= 0 &&
strcmp(ConvertString(charAr[sortItemIndex], 'l'), ConvertString(temp, 'l'))  > 0)

		{
			charAr[sortItemIndex+1] = charAr[sortItemIndex];
			sortItemIndex = sortItemIndex - 1;
		}
		charAr[sortItemIndex + 1] = new char[strlen(temp + 1)];
		strcpy(charAr[sortItemIndex + 1], temp);
	}
}

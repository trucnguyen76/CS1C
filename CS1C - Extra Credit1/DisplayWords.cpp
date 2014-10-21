/**********************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* ASSIGNMENT 6*	: Extra Credit
* CLASS         : CS1C
* SECTION       : T TH 6 - 8:50
* DUE DATE      : 9/30/2014
**********************************************************************************/
#include "Header.h"
/**********************************************************************************
 *
 * FUNCTION DisplayWords
 * ________________________________________________________________________________
 * 	This function receives the array of pointer words, number of words, and a bool
 * 		of whether the user wants duplicate words or not. Then it will display
 * 		the words from the array of pointer words in alphabetical order, case
 * 		insensitive.
 * 		-> return nothing
 * ________________________________________________________________________________
 * PRE-CONDITIONS
 * 	The following variables need to be pre-defined:
 * 		words[]			: The array of pointers of words
 * 		NUM_OF_WORDS	: The number of the words
 * 		duplicate		: Bool variable whether user wants dupliate or not
 *
 * POST-CONDITIONS
 * 		This function will return nothing, but displaying the words in alphabetical
 * 			order
 *********************************************************************************/
void DisplayWords(	char*		words[], 	  //IN - The array of pointers of words
					const int	NUM_OF_WORDS, //IN - The number of the words
					bool		duplicate)	  //IN - Whether user want duplicate
{
	char* 	newWords[NUM_OF_WORDS];	//CALC 	- The array of pointers of words
	int 	index;					//CALC	- The index of the word in the array

	//Copy the words to a new pointer of array
	for(index = 0; index < NUM_OF_WORDS; index++)
	{
		newWords[index] = new char[strlen(words[index] + 1)];
		strcpy(newWords[index], words[index]);
	}

	//Sort the array in alphabetical order
	InsertionSort(newWords, NUM_OF_WORDS);

	//If - else : Display duplicate if the user wants to
	if(duplicate)
	{
		cout << "The words in alphabetical order(duplicate allowed): " << endl;
		//OUTPUT - The array in alphabetical order (duplicate allowed)
		for(index = 0; index < NUM_OF_WORDS; index++)
		{
			cout << newWords[index] << endl;
		}
	}
	else
	{
		cout << "The words in alphabetical order(duplicate not allowed): \n";
		//OUTPUT - The array in alphabetical order (duplicate not allowed)
		for(index = 0; index < NUM_OF_WORDS; index++)
		{
			if
	(strcmp(ConvertString(newWords[index], 'l'),
			ConvertString(newWords[index - 1], 'l'))!= 0)
			cout << newWords[index] << endl;
		}
	}


}





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
* Seperate Words
* _________________________________________________________________________________
* This program will read words from a text file and
* 	1/ display all the words (duplicates allowed) in alphabetical order
* 	2/ displays all the words(duplicates not allowed in alphabetical order)
* _________________________________________________________________________________
* INPUTS:
* 		 InFile.txt
*
* OUTPUTS:
* 		This program will:
* 			1/ display all the words (duplicates allowed) in alphabetical order
* 			2/ displays all the words(duplicates not allowed in alphabetical order)
**********************************************************************************/
int main()
{
	char inputString[100];	//IN 	- The input string
	char* words[80];		//CALC 	- The array of pointers of the words
	char* current;			//CALC	- The pointer points to the current letter
	int index;				//CALC	- The index of the the element in words array
	int stringLength;		//CALC	- The number of words of the input string

	index = 1;

	//OUTPUT - Class Headings
	cout << PrintHeader("Elva Nguyen", 'a', "Extra Credit", 6);

	//INPUT - Prompt for the words
	cout <<"Enter the words: " << endl;
	cin.getline(inputString, 100);

	//Have words[0] as well as current pointer points to the input String
	words[0] = inputString;
	current = words[0];

	/*Look for the closest space in the string, then have current pointer points to
		that whitespace */
	current = strchr(current, ' ');

	//While loop - Keep separating the words until it hits the end of the string
	while(current != NULL)
	{
		//Replace the space that current pointer is pointing to with NULL
		*current = '\0';
		//Move the current pointer to the next word(first letter of the next word)
		current ++;
		/*Have the next element in the words array point to the word current is
			pointing to */
		words[index++] = current;

		//Change LCV - Look for the next space
		current = strchr(current,' ');
	}

	stringLength = index;

	DisplayWords(words, stringLength, true);

	DisplayWords(words,stringLength, false);

	return 0;
}

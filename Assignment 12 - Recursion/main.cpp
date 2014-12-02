/*************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* ASSIGNMENT 12 : Recursion
* CLASS         : CS1C
* SECTION       : T - Th 6 - 9pm
* DUE DATE      : 11/13/2014
*************************************************************************/
#include "Header.h"
/****************************************************************************
 * Inverse Alphabet
 * __________________________________________________________________________
 *
 * 	This program will prompt the user for the indices, then it will reverse the
 * 		alphabet within these two indices and return the modified alphabet
 * 	_________________________________________________________________________
 * 	INPUT:
 * 		beginning		:	The First Index
 * 		end		:	The second index
 *
 * 	OUTPUT:
 * 		The modified alphabet
 ****************************************************************************/
 int main()
 {
	 /***********************************************************************
	  * CONSTANTS
	  * ---------------------------------------------------------------------
	  * ALPHABET	:	The English Alphabet
	  **********************************************************************/
	 const string ALPHABET = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	 int	beginning;		//IN - The First  Index
	 int	end;			//IN - The Second Index


	 //OUTPUT - Class Headings
	 cout << PrintHeader("Elva Nguyen", 'a', "Recursion", 12);

	 //INPUT - The indices to inverse the alphabet
	 beginning = GetAndCheckNumInput
			 ("Please enter the beginning index (-1 to end program): ", -1, 26);

	 while(beginning != -1)
	 {
		 end = GetAndCheckNumInput
				 	 	 	 ("Please enter the end index: ", beginning, 26);

		 //The indices for user start at 1
		 beginning--;
		 end--;

		 //Reverse function
		 cout << ALPHABET.substr(0, beginning)
			  << ReverseString(ALPHABET.substr(beginning, end - beginning + 1));
		 cout << ALPHABET.substr(end + 1,ALPHABET.size() - end) << endl<< endl;


		 beginning = GetAndCheckNumInput
				 ("Please enter the beginning index (-1 to end program): ", -1, 26);

	 }

	 cout << "Thank you for using the program. Have a nice day!!! (:";

	 return 0;
 }



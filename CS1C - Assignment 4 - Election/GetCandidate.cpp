/**********************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* ASSIGNMENT 4	: Election
* CLASS         : CS1C
* SECTION       : T TH 6 - 8:50
* DUE DATE      : 9/16/2014
**********************************************************************************/
#include "Header.h"
/**************************************************************************
 *
 * FUNCTION GetCandidate
 * ________________________________________________________________________
 * 	This function receives the head oft he candidate list, then add the
 * 		candidates to the front of the list
 * 		 -> return the head of the candidate list
 * ________________________________________________________________________
 * PRE-CONDITIONS
 *		*head		: The head of the candidate list has to be pre-defined
 *		INPUT_FILE	: The input file's name has to be pre-defined
 *
 * POST-CONDITIONS
 * 		This function will return the head of the candidate list
 ************************************************************************/
Candidate* GetCandidate(	Candidate *head,	//IN - The head of the link list
					const   string INPUT_FILE)  //IN - The input file's name
{
	ifstream inFile;			//CALC	-	The Input File Stream
	Candidate *candidatePtr;	//CALC	-	The Candidate Pointer

	candidatePtr = new Candidate;
	candidatePtr-> next = NULL;
	candidatePtr->prev 	= NULL;

	//Open the File
	inFile.open(INPUT_FILE.c_str());

	//Read in input
	while (inFile)
	{
		getline(inFile, candidatePtr->lastName);
		inFile >> candidatePtr->votes;
		inFile.ignore(numeric_limits<streamsize>::max(), '\n');

		//If the list is not empty then link the node to the list;
		if(head != NULL)
		{
			candidatePtr->next = head;
			head->prev = candidatePtr;

		}
		head = candidatePtr;

		candidatePtr = new Candidate;
	}

	delete candidatePtr;
	candidatePtr = NULL;
	inFile.close();

	return head;
}

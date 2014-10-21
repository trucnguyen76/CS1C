/**********************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* ASSIGNMENT 4	: Election
* CLASS         : CS1C
* SECTION       : T TH 6 - 8:50
* DUE DATE      : 9/16/2014
**********************************************************************************/
#include "Header.h"
/**********************************************************************************
 *
 * FUNCTION TheWinner
 * ________________________________________________________________________________
 * 	This function receives the head oft he candidate list, then go through each
 * 		node in the list and search for the candidate with the highest vote
 * 		 -> return the candidate pointer pointing to the winner
 * ________________________________________________________________________________
 * PRE-CONDITIONS
 *		*head		: The head of the candidate list has to be pre-defined
 *
 * POST-CONDITIONS
 * 		This function will return the candidate pointer pointing to the winner
 *********************************************************************************/
Candidate* TheWinner(Candidate* head)	//IN - The head of the link list
{
	Candidate *candidatePtr;			//CALC - The auxiliary candidate pointer
	Candidate *winnerCandidate;			//OUT - The pointer point to the candidate

	candidatePtr = head;
	winnerCandidate = head;

	//While loop - Go through the whole link list
	while (candidatePtr != NULL)
	{
		/*If the candidate vote is greater than winner Vote, then reassign the
		 	 winner pointer to whatever candidatePtr is pointing to*/
		if(candidatePtr->votes > winnerCandidate->votes)
		{
			winnerCandidate = candidatePtr;
		}

		candidatePtr = candidatePtr->next;
	}

	return winnerCandidate;
}




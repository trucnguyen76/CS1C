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
* Election
* _________________________________________________________________________________
* This program will prompt for the last names of 5 candidates from a local election
* 		as well as the number of votes received by each candidate. Then the program
* 		will output each candidate's name, the number of vaotes received, and the
* 		percentage of the total votes received by the candidate
* _________________________________________________________________________________
* INPUTS:
* 		 The candidates' names
* 		 The candidates' votes
*
* OUTPUTS:
* 		The candidates' names
* 		The candidates' votes
* 		The percentage of the total votes received by the candidates
**********************************************************************************/
int main()
{
	/******************************************************************************
	 * CONSTANTS
	 * ----------------------------------------------------------------------------
	 * NAME_COL			: The length of the candidate's name column
	 * VOTE_COL			: The length of the candidate's vote column
	 * PERCENTAGE_COL	: The length of the candidate's vote percentage column
	 *****************************************************************************/
	const int NAME_COL			=	20;
	const int VOTE_COL			= 	8;
	const int PERCENTAGE_COL 	=	30;

	Candidate* 	candidateList;	//Create the head of candidate list
	Candidate* 	candidatePtr;	//Auxiliary candidate pointer
	int			totalVote;		//The total vote of all candidates

	candidatePtr = NULL;
	candidateList = NULL;
	totalVote = 0;

	//OUTPUT - Class Headings
	cout << PrintHeader("Elva Nguyen", 'a', "Election", 4);

	//INPUT - Read in data
	candidateList = GetCandidate(candidateList, "InFile.txt");

	candidatePtr = candidateList;

	//PROCESSING - Calculate the percentage
	while(candidatePtr != NULL)
	{
		totalVote += candidatePtr->votes;

		candidatePtr = candidatePtr->next;
	}

	//OUTPUT - The list of candidates, votes, the percentage and the winner
	candidatePtr = candidateList;

	//Output the headers
	cout << left 	<< setw(NAME_COL) 		<< "Candidate Votes"
		 << right 	<< setw(VOTE_COL) 		<< "Received"
		 	 	 	<< setw(PERCENTAGE_COL)	<< "% of Total Votes Received" << endl;

	//Output the list of candidates
	cout << setprecision(2) << fixed;
	while(candidatePtr != NULL)
	{
		cout << left 	<< setw(NAME_COL) 		<< candidatePtr->lastName
			 << right 	<< setw(VOTE_COL) 		<< candidatePtr->votes
			 	 	 	<< setw(5 + PERCENTAGE_COL/2)
			 	 	 	<< ((float)candidatePtr->votes / totalVote) * 100
			 	 	 	<< endl;
		candidatePtr = candidatePtr-> next;
	}
	cout << left	<< setw(NAME_COL)		<< "Total"
		 << right	<< setw(VOTE_COL)		<< totalVote << endl << endl;

	cout << "The Winner of the Election is " << TheWinner(candidateList)->lastName
		 << endl;

	return 0;
}


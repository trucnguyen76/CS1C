/**********************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* ASSIGNMENT 4	: Election
* CLASS         : CS1C
* SECTION       : T TH 6 - 8:50
* DUE DATE      : 9/16/2014
**********************************************************************************/
#ifndef HEADER_H_
#define HEADER_H_

#include <iomanip>
#include <iostream>
#include <fstream>
#include <ios>
#include <limits>

using namespace std;

//Structs
struct Candidate
{
	Candidate 	*prev;		//The Prev Pointer
	string 		 lastName;	//The candidate's last name
	int			 votes;		//The number of votes
	Candidate 	*next;		//The Next Pointer
};
/**********************************************************************************
 * PrintHeader
 * 	This function receives the programmer's name, assignment name, type
 * 		 and number then outputs the appropriate header
 * 		 -> return class headings
 *********************************************************************************/
string PrintHeader(	string  programmer,	//IN 		- programmer(s)'s name
					char 	asType, 	//IN 		- assignment type
					string 	asName,		//IN & OUT 	- assignment name
					int 	asNum);		//IN & OUT 	- assignment number

/**********************************************************************************
 * GetCandidate
 * 	This function receives the head oft he candidate list, then add the
 * 		candidates to the front of the list
 * 		 -> return the head of the candidate list
 *********************************************************************************/
Candidate* GetCandidate(	Candidate *head,	//IN - The head of the link list
					const   string INPUT_FILE); //IN - The input file's name

/**********************************************************************************
 * TheWinner
 * 	This function receives the head oft he candidate list, then go through each
 * 		node in the list and search for the candidate with the highest vote
 * 		 -> return the candidate pointer pointing to the winner
 *********************************************************************************/
Candidate* TheWinner(Candidate* head);			//IN - The head of the link list


#endif /* HEADER_H_ */

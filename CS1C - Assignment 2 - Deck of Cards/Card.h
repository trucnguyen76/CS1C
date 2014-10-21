/**********************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* ASSIGNMENT 2	: Deck Of Cards
* CLASS         : CS1C
* SECTION       : T TH 6 - 8:50
* DUE DATE      : 9/2/2014
**********************************************************************************/
#ifndef CARD_H_
#define CARD_H_

#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

enum Suit
{
	SPADES,		//Spades Suit		u2660
	DIAMONDS,	//Diamonds Suit		u2666
	CLUBS,		//Clubs Suit		u2663
	HEARTS		//Hearts Suit		u2665
};

/**********************************************************************************
 * CONSTANTS
 * --------------------------------------------------------------------------------
 * CARD_RANK_MAX	:	The Max of Card Rank
 * CARD_RANK_MIN	:	The Min of Card Rank
 *********************************************************************************/
const int CARD_RANK_MAX = 13;
const int CARD_RANK_MIN = 1;

class Card
{

public:
						/**********************
						 -----CONSTRUCTORS-----
						 **********************/
	/******************************************************************************
	 * Card()
	 * 	This default constructor will create a Card object as an Ace of Spades
	 *****************************************************************************/
	Card();

	/******************************************************************************
	 * Card()
	 * 	This constructor will receive the rank and suit of the card's from the
	 * 		parameter and create the object with the specified rank and suit
	 *****************************************************************************/
	Card(	int theRank,		//The rank of the Card
			int theSuit);		//The suit of the Card

						/**********************
						 ------DESTRUCTORS-----
						 **********************/
	/******************************************************************************
	 * ~Card()
	 * 	This default destructor will delete the Card object
	 *****************************************************************************/
	~Card();

						/******************
						 -----MUTATORS-----
						 ******************/
	/******************************************************************************
	 * SetSuit()
	 * 	This method will receive the Card's suit from the parameter and change the
	 * 		object Card's suit
	 *****************************************************************************/
	void SetSuit(int theSuit);		//The Card's Suit the user want to change to

	/******************************************************************************
	 * SetRank()
	 * 	This method will receive the Card's rank from the parameter and change the
	 * 		object Card's rank
	 *****************************************************************************/
	void SetRank(int theRank);		//The Card's Rank the user want to change to

						/********************
						-----ACCESSORS-----
						********************/
	/******************************************************************************
	 * GetSuit()
	 * 	This method will return the Card's Suit as an int
	 *****************************************************************************/
	int GetSuit() 				const;

	/******************************************************************************
	 * GetRank()
	 * 	This method will return the Card's Rank as an int
	 *****************************************************************************/
	int GetRank() 				const;

	/******************************************************************************
	 * OutputSuit()
	 * 	This method will return the suit as a string
	 *****************************************************************************/
	string OutputSuit()			const;

	/******************************************************************************
	 * OutputRank()
	 * 	This method will return the card's rank as a string
	 *****************************************************************************/
	string OutputRank() 		const;

	/******************************************************************************
	 * OutputCard()
	 * 	This method will return a string of the card's rank and suit
	 *****************************************************************************/
	string OutputCard()			const;

	/******************************************************************************
	 * EqualTo()
	 * 	This method will receive a card in the parameter, then compare it to the
	 * 		Card object that call the method
	 * 		-> return a bool stating whether the 2 cards are the same
	 *****************************************************************************/
	bool EqualTo(Card card2)	const;		//The Card being compared to

private:
	int suit;		//The Card's Suit
	int rank;		//The Card's Rank

#endif// CARD_H_
};

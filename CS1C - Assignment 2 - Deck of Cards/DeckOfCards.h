/**********************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* ASSIGNMENT 2	: Deck Of Cards
* CLASS         : CS1C
* SECTION       : T TH 6 - 8:50
* DUE DATE      : 9/2/2014
**********************************************************************************/
#ifndef	DECK_OF_CARDS_H_
#define	DECK_OF_CARDS_H_


#include "Card.h"
#include <stdlib.h>
#include <time.h>
#include <sstream>
#include <iomanip>
#include <iostream>

#ifndef TEST
//#define TEST
#endif

const int CARD_MAX = 52;

class DeckOfCards
{

public:


							/**********************
							 -----CONSTRUCTORS-----
							 **********************/
	/******************************************************************************
	 * DeckOfCards()
	 * 	This default constructor will create a Deck of Cards object and assign the
	 * 		values of the cards in the the order from A->K for the suits in the
	 * 		order: Spades, Diamonds, Clubs, Hearts
	 *****************************************************************************/
	DeckOfCards();

							/**********************
							 ------DESTRUCTORS-----
							 **********************/
	/******************************************************************************
	 * ~DeckOfCards()
	 *	 This default destructor will delete the DeckOfCards object
	 *****************************************************************************/
	~DeckOfCards();

							/******************
							 -----MUTATORS-----
							 ******************/
	/******************************************************************************
	 * PerfectShuffle()
	 * 	The Perfect Shuffle: The 1st card followed by the 27th card followed by the
	 * 						2nd card followed by the 28th, etc.
	 * 	This method will perform a perfect shuffle on the DeckOfCards object by
	 * 		creating a temp deck. Copy the cards from the original Deck to the temp
	 * 		deck in the order of a perfect shuffle. Then copy the cards of the
	 * 		temp deck to the original deck.
	 * 		-> return nothing
	 *****************************************************************************/
	void PerfectShuffle();

	/******************************************************************************
	 * Shuffle()
	 * 	This method will generated 2 random numbers for the indexes of the cards in
	 * 		the deck. Then it will swap the position of those 2 cards.
	 * 		-> return nothing
	 *****************************************************************************/
	void Shuffle();

	/******************************************************************************
	 * SetCard()
	 * 	This method will modify a card in the deck with the index of the card, the
	 *		rank of the card and the suit of card, which come from the parameter
	 * 		-> return nothing
	 *****************************************************************************/
	void SetCard(	int index, 		//The Card's Index in the deck
					int theRank, 	//The Card's Rank
					int theSuit);	//The Card's Suit

	/******************************************************************************
	 * CopyDeck()
	 *  This method will receive a deck to copy from in the parameter and copy that
	 * 		deck to the deck object that calls the method
	 * 		-> return nothing
	 *****************************************************************************/
	void CopyDeck(DeckOfCards deckCopyFrom) ;	//The deck copy from

							/********************
							-----ACCESSORS-----
							********************/

	/******************************************************************************
	 * EqualTo()
	 * 	This method receive a deck of card from the parameter and compare it to the
	 * 		the DeckOfCards object that calls this method, by comparing each
	 * 		corresponding cards from both decks
	 * 		-> return a boolean value stating whether the decks are the same
	 *****************************************************************************/
	bool EqualTo(DeckOfCards deck2)	const ;	//The Deck being compared to

	/******************************************************************************
	 * OutputDeck()
	 * This method will output the deck of the cards in for rows, each rows have
	 * 		13 cards separated by a tab.
	 * 		-> return a string
	 *****************************************************************************/
	string OutputDeck()	const;

	/******************************************************************************
	 * GetCard()
	 *  This method will receive an index of the card and return the card at that
	 * 		index
	 * 		-> return the Card at the specified index
	 *****************************************************************************/
	Card GetCard(int index)	const ;		//The index of the card in the deck

private:
	Card deck[CARD_MAX];
};

#endif/* DECK_OF_CARDS_H_ */

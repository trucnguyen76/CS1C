/**********************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* ASSIGNMENT 2	: Deck Of Cards
* CLASS         : CS1C
* SECTION       : T TH 6 - 8:50
* DUE DATE      : 9/2/2014
**********************************************************************************/
#include "DeckOfCards.h"


						/**********************
						 -----CONSTRUCTORS-----
						 **********************/
/******************************************************************************
 * DeckOfCards()
 * ----------------------------------------------------------------------------
 * This default constructor will create a Deck of Cards object and assign the
 * 		values of the cards in the the order from A->K for the suits in the
 * 		order: Spades, Diamonds, Clubs, Hearts
 *****************************************************************************/
DeckOfCards::DeckOfCards()
{
	int cardRank;	//CALC - The card's rank
	int cardSuit;	//CALC - The card's suit
	int index;		//CALC - The card's index

	index = 0;

	//Initialize the deck in order
	for (cardSuit = SPADES; cardSuit <= HEARTS; cardSuit++)
	{
		for (cardRank = CARD_RANK_MIN; cardRank <= CARD_RANK_MAX; cardRank++)
		{
			deck[index] = Card(cardRank, cardSuit);

			index++;
		}
	}
}
						/**********************
						 ------DESTRUCTORS-----
						 **********************/
/******************************************************************************
 * ~DeckOfCards()
 * ----------------------------------------------------------------------------
 * This default destructor will delete the DeckOfCards object
 *****************************************************************************/
DeckOfCards::~DeckOfCards()
{}

						/******************
						 -----MUTATORS-----
						 ******************/
/******************************************************************************
 * PerfectShuffle()
 * ----------------------------------------------------------------------------
 * The Perfect Shuffle: The 1st card followed by the 27th card followed by the
 * 						2nd card followed by the 28th, etc.
 * This method will perform a perfect shuffle on the DeckOfCards object by
 * 		creating a temp deck. Copy the cards from the original Deck to the temp
 * 		deck in the order of a perfect shuffle. Then copy the cards of the
 * 		temp deck to the original deck.
 * 		-> return nothing
 *****************************************************************************/
void DeckOfCards::PerfectShuffle()
{
	DeckOfCards tempDeck;	//CALC - A temp Deck of Cards
	int oldDeckIndex;		//CALC - The Original Deck's Card's Index
	int tempDeckIndex;		//CALC - The New Deck's Card's Index

	tempDeckIndex = 0;

	/*For loop - Assign the old deck's cards' positions in the temp deck in the
		order of a perfect shuffle */
	for(oldDeckIndex = 0; oldDeckIndex < CARD_MAX/2; oldDeckIndex++)
	{
		tempDeck.SetCard(tempDeckIndex, deck[oldDeckIndex].GetRank(),
									  deck[oldDeckIndex].GetSuit());

		tempDeckIndex++;

		tempDeck.SetCard(tempDeckIndex, deck[oldDeckIndex + 26].GetRank(),
									  deck[oldDeckIndex + 26].GetSuit());

		tempDeckIndex++;
	}

//	//For loop - Copy the cards from the temp deck to the original deck
//	for(oldDeckIndex = 0; oldDeckIndex < CARD_MAX; oldDeckIndex++)
//	{
//		deck[oldDeckIndex].SetRank(tempDeck.GetCard(oldDeckIndex).GetRank());
//		deck[oldDeckIndex].SetSuit(tempDeck.GetCard(oldDeckIndex).GetSuit());
//
//	}

	this->CopyDeck(tempDeck);
}

/******************************************************************************
 * Shuffle()
 * ----------------------------------------------------------------------------
 * This method will generated 2 random numbers for the indexes of the cards in
 * 		the deck. Then it will swap the position of those 2 cards.
 * 		-> return nothing
 *****************************************************************************/
void DeckOfCards::Shuffle()
{
	int indexCard1;	//CALC - The index of the first card
	int indexCard2;	//CALC - The index of the second card
	Card temp;		//CALC - The temp card, which hold the value of the 1st
	int times;		//CALC - The number of times of the swap

	//Randomly generated 2 card's indexes
	srand(time(NULL));

	//For loop - Randomly generates 2 indexes of 2 cards and swap them for 52 times
	for(times = 1; times <= CARD_MAX; times++)
	{
		indexCard1 = rand()%CARD_MAX;
		indexCard2 = rand()%CARD_MAX;

		//Switch place of 2 cards
		temp = deck[indexCard1];
		deck[indexCard1] = deck[indexCard2];
		deck[indexCard2] = temp;
	}
}

/******************************************************************************
 * SetCard()
 * ----------------------------------------------------------------------------
 * This method will modify a card in the deck with the index of the card, the
 *		rank of the card and the suit of card, which come from the parameter
 * 		-> return nothing
 *****************************************************************************/
void DeckOfCards::SetCard(	int index, 		//The Card's Index in the deck
							int theRank, 	//The Card's Rank
							int theSuit)	//The Card's Suit
{
	deck[index].SetRank(theRank);
	deck[index].SetSuit(theSuit);
}

/******************************************************************************
 * CopyDeck()
 * ----------------------------------------------------------------------------
 * This method will receive a deck to copy from in the parameter and copy that
 * 		deck to the deck object that calls the method
 * 		-> return nothing
 *****************************************************************************/
void DeckOfCards::CopyDeck(DeckOfCards deckCopyFrom) //The deck copy from
{
	int index;		//CALC - The index of the card in the deck

	//For loop - Copy the cards from the temp deck to the original deck
	for(index = 0; index < CARD_MAX; index++)
	{
		deck[index].SetRank(deckCopyFrom.GetCard(index).GetRank());
		deck[index].SetSuit(deckCopyFrom.GetCard(index).GetSuit());
	}
}
						/********************
						-----ACCESSORS-----
						********************/

/******************************************************************************
 * EqualTo()
 * ----------------------------------------------------------------------------
 * This method receive a deck of card from the parameter and compare it to the
 * 		the DeckOfCards object that calls this method, by comparing each
 * 		corresponding cards from both decks
 * 		-> return a boolean value stating whether the decks are the same
 *****************************************************************************/
bool DeckOfCards::EqualTo(DeckOfCards deck2) const //The Deck being compared to
{
	int index;	//CALC 	- the index of the element in the Deck array
	bool equal;	//OUT	- Whether the decks are the same or not

	equal = true;
	index = 0;

	/**************************************************************************
	 * While loop - will run through the decks and compare each cards until it
	 * finds the cards whose index are the same but the value are difference
	 * or until it hits the end of the deck
	 *************************************************************************/
	while(equal && index < CARD_MAX)
	{
		equal = deck[index].EqualTo(deck2.GetCard(index));

		#ifdef TEST
			cout << "Deck1 card: " << deck[index].OutputCard() << '\t'
				 << "Deck2 card: " << deck2.GetCard(index).OutputCard()  << endl;
			if (equal)
			{
				cout << "Same!\n";
			}
			else
			{
				cout << "Not same!\n";
			}
		#endif

		index++;
	}


	return equal;
}

/******************************************************************************
 * OutputDeck()
 * ----------------------------------------------------------------------------
 * This method will output the deck of the cards in for rows, each rows have
 * 		13 cards separated by a tab.
 * 		-> return a string
 *****************************************************************************/
string DeckOfCards::OutputDeck()	const
{
	/**************************************************************************
	 * CONSTANTS
	 * ------------------------------------------------------------------------
	 * MAX_COLUMN	:	The max number of column
	 * MAX_ROW		:	The max number of row
	 *************************************************************************/
	const int MAX_COLUMN	= 4;
	const int MAX_ROW		= 13;

	stringstream output;
	int index;				//CALC - The index of the element in the Deck array
	int row;				//CALC - The number of the row
	int column;				//CALC - The number of the column

	index = 0;
	output << left;

	//For loop - go through all the rows
	for (row = 1; row <= MAX_ROW; row++)
	{
		//For loop - go through all the columns
		for(column = 1; column <= MAX_COLUMN; column++)
		{
			output << setw(17) << deck[index].OutputCard();
			index++;
		}
		output << endl;
	}

	output << right;

	return output.str();
}

/******************************************************************************
 * GetCard()
 * ----------------------------------------------------------------------------
 * This method will receive an index of the card and return the card at that
 * 		index
 * 		-> return the Card at the specified index
 *****************************************************************************/
Card DeckOfCards::GetCard(int index) const	//The index of the card in the deck
{
	return deck[index];
}

/**********************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* ASSIGNMENT 2	: Deck Of Cards
* CLASS         : CS1C
* SECTION       : T TH 6 - 8:50
* DUE DATE      : 9/2/2014
**********************************************************************************/
#include "Card.h"

						/**********************
						 -----CONSTRUCTORS-----
						 **********************/
/**********************************************************************************
 * Card()
 * --------------------------------------------------------------------------------
 * This default constructor will create a Card object as an Ace of Spades
 *********************************************************************************/
Card::Card()
{
	rank = 1;
	suit = SPADES;
}


/******************************************************************************
 * Card()
 * ----------------------------------------------------------------------------
 * 	This constructor will receive the rank and suit of the card's from the
 * 		parameter and create the object with the specified rank and suit
 *****************************************************************************/
Card::Card(	int theRank,		//The rank of the Card
			int theSuit)		//The suit of the Card
{
	SetSuit(theSuit);
	SetRank(theRank);
}
						/**********************
						 ------DESTRUCTORS-----
						 **********************/
/******************************************************************************
 * ~Card()
 * ----------------------------------------------------------------------------
 * This default destructor will delete the Card object
 *****************************************************************************/
Card::~Card()
{}

						/******************
						 -----MUTATORS-----
						 ******************/
/******************************************************************************
 * SetSuit()
 * ----------------------------------------------------------------------------
 * 	This method will receive the Card's suit from the parameter and change the
 * 		object Card's suit
 *****************************************************************************/
void Card::SetSuit(int theSuit)   //The Card's Suit the user want to change to
{
	suit = theSuit;
}

/******************************************************************************
 * SetRank()
 * ----------------------------------------------------------------------------
 * 	This method will receive the Card's rank from the parameter and change the
 * 		object Card's rank
 *****************************************************************************/
void Card::SetRank(int theRank)   //The Card's Rank the user want to change to
{
	rank = theRank;
}

						/********************
						-----ACCESSORS-----
						********************/
/******************************************************************************
 * GetSuit()
 * ----------------------------------------------------------------------------
 * 	This method will return the Card's Suit as an int
 *****************************************************************************/
int Card::GetSuit() 		const
{
	return suit;
}

/******************************************************************************
 * GetRank()
 * ----------------------------------------------------------------------------
 * 	This method will return the Card's Rank as an int
 *****************************************************************************/
int Card::GetRank() 		const
{
	return rank;
}

/******************************************************************************
 * OutputSuit()
 * ----------------------------------------------------------------------------
 * 	This method will return the card's suit as a string
 *****************************************************************************/
string Card::OutputSuit()	const
{
	string suitStr;		//OUT - The Card's Suit as a string

	//Switch - Assign the corresponding suit to the string suitStr
	switch(suit)
	{
	case CLUBS:
		suitStr = "Clubs";
		break;
	case DIAMONDS:
		suitStr = "Diamonds";
		break;
	case HEARTS:
		suitStr = "Hearts";
		break;
	case SPADES:
		suitStr = "Spades";
		break;
	}

	return suitStr;
}

/******************************************************************************
 * OutputRank()
 * ----------------------------------------------------------------------------
 * 	This method will return the card's rank as a string
 *****************************************************************************/
string Card::OutputRank() 	const
{
	stringstream output;				//CALC - The String Stream Variable

	//Switch - Assign the corresponding rank to the string rankStr
	switch(rank)
	{
	case 1:
		output << "A";
		break;
	case 11:
		output << "J";
		break;
	case 12:
		output << "Q";
		break;
	case 13:
		output << "K";
		break;
	default:
		output << rank;
		break;
	}

	return output.str();
}

/******************************************************************************
 * OutputCard()
 * ----------------------------------------------------------------------------
 * 	This method will return a string of the card's rank and suit
 *****************************************************************************/
string Card::OutputCard()	const
{
	string cardStr;				//CALC - The String Stream Variable

	cardStr = OutputRank() + " of " + OutputSuit();

	return cardStr;
}

/******************************************************************************
 * EqualTo()
 * ----------------------------------------------------------------------------
 * 	This method will receive a card in the parameter, then compare it to the
 * 		Card object that call the method
 * 		-> return a bool stating whether the 2 cards are the same
 *****************************************************************************/
bool Card::EqualTo(Card card2)	const
{
	return (rank == card2.GetRank() && suit == card2.GetSuit());
}



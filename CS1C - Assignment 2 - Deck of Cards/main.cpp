/**********************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* ASSIGNMENT 2	: Deck Of Cards
* CLASS         : CS1C
* SECTION       : T TH 6 - 8:50
* DUE DATE      : 9/2/2014
**********************************************************************************/
#include "header.h"
#include "DeckOfCards.h"
/**********************************************************************************
*
* Deck of Cards
* _________________________________________________________________________________
* 	This program will stimulate a real deck of cards and perform shuffle as well as
* 		perfect shuffle to the deck. Then it will find out how many perfect shuffle
* 		it needs so that the after-shuffle deck could be the same as the original
* 		deck
* _________________________________________________________________________________
* INPUTS:
* 		 <non>
*
* OUTPUTS:
* 	count	:	The times of the perfect shuffles
* 	Card1	: 	The first card
* 	Card2	: 	The second card
* 	Deck1	: 	The first Deck
**********************************************************************************/
int main()
{
	int count;			//OUT - The times of the perfect shuffles
	Card card1;			//OUT - The first card with default constructor
	Card card2(12, 1);	//OUT - The second card with specified suit and rank

	DeckOfCards deck1;	//OUT - The deck of card will be shuffle
	DeckOfCards deck2;	//OUT - The deck of card hold the original deck

	count = 0;

	//OUTPUT - Class headings
	cout << PrintHeader("Elva Nguyen", 'a', "Deck of Cards", 2);

	cout << "The card constructed by the default constructor: "
		 <<	card1.OutputCard() << endl;
	cout << "The card constructed by the constructor with specific rank and suit: "
		 << card2.OutputCard() << endl;

	cout << "The new Deck: \n" << deck1.OutputDeck() << endl;

	deck1.Shuffle();

	cout << "After shuffle, the initial deck: \n" << deck1.OutputDeck() << endl;

	deck2.CopyDeck(deck1);

	//Perform the first perfect shuffle
	deck1.PerfectShuffle();
	count++;
	cout << "The deck after the first perfect shuffle: \n" << deck1.OutputDeck();
	cout << endl;


	/******************************************************************************
	 * While loop: check whether the deck after the perfect shuffle is the same
	 * 	  with the original deck, if not, then keep performing the perfect shuffle
	 * 	  as well as keep track of the # of perfect shuffles being performed on the
	 * 	  deck
	******************************************************************************/
	while (!(deck1.EqualTo(deck2)))
	{
		deck1.PerfectShuffle();
		count++;
	}

	cout << "The deck will be the exact same of the initial deck after " << count
		 << " perfect shuffles\n\n";
	cout << "The final deck: \n" << deck1.OutputDeck() << endl;

	return 0;
}




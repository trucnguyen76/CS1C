/*#include "Card.h"

Card* CreateNewCard(Card *head)
{
	Card *cardPtr;

	cardPtr = new Card();

	cardPtr->next = head;

	head = cardPtr;

	if(cardPtr->next != NULL)
	{
		cardPtr->next->previous = cardPtr;
	}

	//Insert information for the card

	cardPtr = NULL;
	delete cardPtr;

	return head;
}*/

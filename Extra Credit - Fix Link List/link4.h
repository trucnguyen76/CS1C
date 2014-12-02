// link4.h
// to illustrate using a linked list with classes and recursion
//
	#include <iostream>
using namespace std;


//  SPECIFICATION FILE  DYNAMIC-LINKED SORTED LIST( slist2.h )


//typedef    int   ItemType ;  	// Type of each component
//				    	// is simple type or string type
template <class ItemType>
struct  NodeType
{
	ItemType    item ;					// data
	NodeType<ItemType>   *link ;		//  link to next node in list
} ;



//  	SPECIFICATION FILE  DYNAMIC-LINKED SORTED LIST
template <class ItemType>
class  SortedList
{
public :

	int           IsEmpty ( ) const ;

	void	      Print ( )  ;

	void          InsertTop ( /* in */  ItemType  item ) ;

	void          Insert ( /* in */  ItemType  item ) ;

	void          DeleteTop ( /* out  */  ItemType&  item ) ;

	void          Delete ( /* in */  ItemType  item );


	SortedList ( ) ;				// Constructor
	~SortedList ( ) ;				// Destructor
	SortedList ( const SortedList&  otherList ) ; // Copy-constructor

private :

	NodeType<ItemType>*  head;
	void          RevPrint ( NodeType<ItemType> *head );

} ;

// IMPLEMENTATION DYNAMIC-LINKED SORTED LIST

template <class ItemType>
void SortedList<ItemType> ::RevPrint ( NodeType<ItemType> *head )

//   Pre:   head points to an element of a list.
//  Post:  all elements of list pointed to by head have been printed
//             out in reverse order.   using recursion
{
     if  ( head != NULL )			// general case
	{
		RevPrint ( head-> link ) ;           //  process the rest
						// then print  this element
		cout  <<  head->item;
		cout  <<  endl ;
	}
			// Base case : if the list is empty, do nothing
}
template <class ItemType>
SortedList<ItemType> ::SortedList ( )       	// Constructor
// Post:	  head == NULL
{
	head = NULL ;
}

template <class ItemType>
SortedList<ItemType> :: ~SortedList (  )  	// Destructor
// Post:  All linked nodes deallocated
{
	ItemType  temp ;
					// keep deleting top node
	while  ( !IsEmpty ( ) )
		DeleteTop ( temp );
}

template <class ItemType>
int     SortedList<ItemType> ::IsEmpty ( ) const
// Postcondition
//   function value ==  true, if head == NULL
//                           ==  false, otherwise
{
	return (head==NULL);
}

template <class ItemType>
void	SortedList<ItemType> ::Print ( )
// print out link list in reverse order using recursion
{
	RevPrint(head);
}

template <class ItemType>
void  SortedList<ItemType> :: Insert( /* in */  ItemType  item )
//  Pre: 	item is assigned &&  list components in ascending order
// Post:	new node containing item is in its proper place
//	   	&& list components in ascending order
{    NodeType<ItemType>*     currPtr ;
	NodeType<ItemType>*    prevPtr ;
	NodeType<ItemType>*    newNodePtr ;
    newNodePtr = new  NodeType<ItemType> ;
	newNodePtr->item =  item ;
	prevPtr = NULL ;
	currPtr = head ;
	while ( currPtr != NULL  &&  item > currPtr->item )
	{	prevPtr = currPtr ; 		   // advance both pointers
		currPtr = currPtr->link ;
	}
	newNodePtr->link = currPtr ;	   // insert new node here
	if  ( prevPtr == NULL )
   		head =newNodePtr ;
	else
		prevPtr->link = newNodePtr;
}

template <class ItemType>
void SortedList<ItemType> :: DeleteTop ( /* out */  ItemType&  item )
//  Pre:     list is not empty && list elements in ascending order
// Post:	   item == element of first list node @ entry
//          &&  node containing item is no longer in linked list
//          &&  list elements in ascending order
{
	if(!IsEmpty())
	{
		NodeType<ItemType>*  tempPtr = head ;
	    					// obtain item and advance head
	        item = head->item;
		head = head->link ;
		delete  tempPtr ;
	}
	else
	{
		cout << "The list is empty. There is nothing to delete\n\n";
	}
}

template <class ItemType>
void  SortedList<ItemType> :: Delete ( /* in */  ItemType  item )
//  Pre:        list is not empty && list elements in ascending order
//	      &&  item == component member of some list node
// Post:	   item == element of first list node @ entry
//          &&  node containing first occurrence of item is no longer
// 	            in linked list   &&  list elements in ascending order
{
	NodeType<ItemType>*   delPtr ;
	NodeType<ItemType>*   currPtr ;
	if(!IsEmpty())
	{
		//  Is item in first node?
		if ( item == head->item )
		{	delPtr = head ;		// If so, delete first node
			head = head->link ;
		}
	     else {			// search for item in rest of list
			currPtr = head ;
			while ( currPtr->link->item  !=  item )
				currPtr = currPtr->link ;
			delPtr = currPtr->link ;
			currPtr->link = currPtr->link->link ;
		}
	}
	else
	{
		cout << "The list is empty. There is nothing to delete\n\n";
	}

	delete  delPtr ;
}

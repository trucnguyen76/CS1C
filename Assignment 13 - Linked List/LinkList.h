/**************************************************************************
 * AUTHOR     		: Elva Nguyen
 * STUDENT ID 		: 366160
 * ASSIGNMENT #12	: Queue Template
 * CLASS      		: Computer Science 1C
 * SECTION    		: T - Th 6 - 9pm
 * DUE DATE   		: 11/20/14
 *************************************************************************/
#ifndef LINKLIST_H_
#define LINKLIST_H_

#include <iomanip>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

template <class Type>
struct Node
{
	Node<Type> *prev;
	Type object;
	Node<Type> *next;
};

template <class Type>
class LinkList
{
public:
							/**********************
							 -----CONSTRUCTORS-----
							 **********************/
	/*****************************************************************************
	* LinkList()
	* 	This constructor will create an empty linked list
	*****************************************************************************/
	LinkList();

	/*****************************************************************************
	* LinkList()
	* 	This copy constructor will create a list from another list
	*****************************************************************************/
	LinkList(const LinkList &otherList);

							/**********************
							 ------DESTRUCTORS-----
							 **********************/
	/*****************************************************************************
	* ~LinkList()
	* 	This destructor will destroy the LinkedList object
	*****************************************************************************/
	~LinkList();

							/******************
							 -----MUTATORS-----
							 ******************/
	/*****************************************************************************
	* insertFirst()
	* 	This method will insert the newItem to the head of the list
	* 	-> Return nothing
	* 	POST: The item being added to the list and become the first item
	*****************************************************************************/
	void insertFirst(const Type& newItem);	//IN - The newItem being added

	/*****************************************************************************
	* insertLast()
	* 	This method will insert the newItem to the tail of the list
	* 	-> Return nothing
	* 	POST: The item being added to the list and become the last item
	*****************************************************************************/
	void insertLast(const Type& newItem);	//IN - The newItem being added

	/*****************************************************************************
	* insert()
	* 	This method will insert the newItem to the the specified position of the
	* 	 list and push back the rest of the list
	* 	-> Return nothing
	* 	POST: The item being added to the list
	*****************************************************************************/
	void insert(const Type& newItem,	//IN - The newItem being added to the list
						int	index);		//IN - The index where to insert the item

	/*****************************************************************************
	* deleteItem()
	* 	This method will search and delete the item from the list
	* 	-> Return nothing
	* 	POST:	the item is removed from the list if it is found
	* 			the list is the same if the item is not found
	*****************************************************************************/
	void deleteItem(const Type& deleteItem);//OUT - The item being deleted


	/*****************************************************************************
	* deleteItem()
	* 	This method will delete the node at the specified position of the list
	* 	-> Return the deleteItem through the parameter
	* 	POST: The item being deleted to the list
	*****************************************************************************/
	void deleteItem(Type& deleteItem,	//OUT - The item being deleted
						int	index);		//IN - The index where to insert the item

	/*****************************************************************************
	* deleteFirst()
	* 	This method will remove the first item of the list
	* 	-> Return the deleteItem through the parameter
	* 	POST:	the first item is removed from the list
	*****************************************************************************/
	void deleteFirst(Type& deleteItem);	//OUT - The item being deleted

	/*****************************************************************************
	* deleteLast()
	* 	This method will remove the last item of the list
	* 	-> Return the deleteItem through the parameter
	* 	POST:	the last item is removed from the list
	*****************************************************************************/
	void deleteLast(Type& deleteItem);	//OUT - The item being deleted

	/*****************************************************************************
	* destroyList()
	* 	This method will clear the list
	* 	-> Return nothing
	* 	POST: 	first-> null
	* 			last -> null
	*****************************************************************************/
	void destroyList();

							/********************
							-----ACCESSORS-----
							********************/
	/*************************************************************************
	 * isEmpty
	 *		This method checks if the queue is empty or not
	 *		-> RETURN a bool indicates whether the queue is empty or not
	 ************************************************************************/
	bool isEmpty()							const;

	/*************************************************************************
	 * print
	 *		This method will print the link list
	 *		-> RETURN nothing
	 ************************************************************************/
	void print()							const;

	/*************************************************************************
	 * retrieveFirst
	 *		This method will return the first node in the list
	 *		-> RETURN the first element thru the parameter
	 ************************************************************************/
	void retrieveFirst(Type& firstElement)	const;	//OUT - The first element

	/*************************************************************************
	 * retrieveLast
	 *		This method will return the last node in the list
	 *		-> RETURN the last element thru the parameter
	 ************************************************************************/
	void retrieveLast(Type& lastElement)	const; //OUT - The last element

	/*************************************************************************
	 * retrieve
	 *		This method will return the item in the list at the specific position
	 *		-> RETURN the element thru the parameter
	 ************************************************************************/
	void retrieve(Type& element,		//OUT - The element
					int index)			//IN - The index of that element
											const;

	/*************************************************************************
	 * size
	 *		This method returns the size of the queue
	 *		-> RETURN the size of the queue as an integer
	 ************************************************************************/
	int  getSize()							const;

private:
	int	size;			//The size of the linked list
	Node<Type> *first;	//Pointer points to the first node of the list
	Node<Type> *last;	//Pointer points to the last node of the list

	/*************************************************************************
	 * search
	 *		This method will search for the searchItem in the list.
	 *		-> RETURN nothing
	 ************************************************************************/
	Node<Type>* search(const Type& searchItem)	const;
										//IN - The item being searched for
};

						/**********************
						 -----CONSTRUCTORS-----
						 **********************/
template <class Type>
LinkList<Type>::LinkList()
{
	first = NULL;
	last = NULL;

	size = 0;
}

template <class Type>
LinkList<Type>::LinkList(const LinkList &otherList)
{
	first = NULL;
	last = NULL;
	size = 0;

	if(!otherList.isEmpty())
	{
		Node<Type>	*addPnt;	//CALC - pointer points to the item being added

		addPnt = otherList.first;

		while(addPnt != NULL)
		{
			insertLast(addPnt->object);
			addPnt = addPnt->next;
		}
	}
}

						/**********************
						 ------DESTRUCTORS-----
						 **********************/
template <class Type>
LinkList<Type>::~LinkList()
{
	destroyList();
}
							/******************
							-----MUTATORS-----
							******************/

template <class Type>
void LinkList<Type>::insertFirst(const Type& newItem)
										//IN - The newItem being added to the list

{
	Node<Type>	  *nodePnt;	//CALC - auxiliary pointer holds the new item

	//INITIALIZATION
	// creates new struct of type Node
	nodePnt = new Node<Type>;

	nodePnt->object 	= newItem;
	nodePnt->next		= NULL;
	nodePnt->prev		= NULL;

	if(isEmpty())
	{
		first	       	= nodePnt;
		last         	= nodePnt;
		nodePnt       	= NULL;
	}
	else
	{
		nodePnt->next 	= first;
		first->prev		= nodePnt;

		first			= nodePnt;
		nodePnt 		= NULL;
	}


	size++;

	delete nodePnt;
	nodePnt = NULL;
}

template <class Type>
void LinkList<Type>::insertLast(const Type& newItem)
										//IN - The newItem being added to the list

{
	Node<Type> *nodePnt;	//CALC - auxiliary pointer holds the new item

	//INITIALIZATION
	// creates new struct of type Node
	nodePnt = new Node<Type>;

	nodePnt->object 	= newItem;
	nodePnt->next		= NULL;
	nodePnt->prev		= NULL;

	/***********************************************************************
	 * Check whether the list is empty or not. If the list is empty then
	 * 	the program will add the first node to the front, otherwise, it will
	 * 	add the new node to the rear of the link
	 **********************************************************************/
	if(isEmpty())
	{
		insertFirst(newItem);
	}
	else
	{
		nodePnt-> prev	= last;
		last->next		= nodePnt;

		last = last->next;
		nodePnt			= NULL;
		size++;
	}

	delete nodePnt;
	nodePnt = NULL;
}

template <class Type>
void LinkList<Type>::insert(const Type& newItem, //IN - The newItem being added
									int	index)//IN - The position to add the item

{
	Node<Type>	*nodePnt;	//CALC - auxiliary pointer holds the new item
	Node<Type>	*srchPnt;	//CALC - search pointer
	int			counter;	//CALC - counter to the position being inserted

	//INITIALIZATION
	srchPnt = first;
	counter = 0;

	// creates new struct of type Node
	nodePnt = new Node<Type>;

	nodePnt->object 	= newItem;
	nodePnt->next		= NULL;

	if(index == 0)
	{
		insertFirst(newItem);
	}
	else if(index == size)
	{
		insertLast(newItem);
	}
	else if(index < size && index > 0)
	{
		//Iterate to the position where to add the item
		while(counter < index)
		{
			srchPnt = srchPnt->next;
			counter++;
		}

		nodePnt->next = srchPnt;
		nodePnt->prev = srchPnt->prev;

		srchPnt->prev->next = nodePnt;
		srchPnt->prev = nodePnt;

		size++;
	}

	srchPnt = NULL;
	nodePnt = NULL;
}

template <class Type>
void LinkList <Type> :: destroyList()
{
	Node<Type> *nodePnt;	//CALC - The node pointer points to the item removed

	while(!isEmpty())
	{
		nodePnt = first;
		first = first->next;
		size--;
		delete nodePnt;
	}

	last = NULL;
	nodePnt = NULL;

}

template <class Type>
void LinkList<Type>:: deleteItem(const Type& deleteItem)
									//IN - The item being deleted from the list
{
	Node<Type> *searchPtr;	//CALC 	- Pointer points to the node being searched

	//Search for the item being removed in the list
	searchPtr = search(deleteItem);

	/*If the item is found, remove that item out of the list, otherwise
		notify the user that the item is not in the list to be removed */
	if(searchPtr != NULL)
	{
		/******************************************************************
		 * If the item is the first in the list, have the previous pointer
		 * 	of the item next in the list points to NULL and have the head
		 * 	points to that next node
		 *****************************************************************/
		if(searchPtr == first)
		{
			searchPtr->next->prev = NULL;
			first = searchPtr->next;
		}

		/*If that item is at the end of the list, have the next pointer of
			the item previous points to NULL (become the rear of the list)*/
		else if(searchPtr->next == NULL)
		{
			searchPtr->prev->next = NULL;
		}

		/******************************************************************
		 * If the item is in the middle of the list, then have the NEXT
		 *  pointer of the previous item points to the item next to the
		 *  item being removed, then reassign the PREVIOUS pointer points
		 *  to the next item
		 *****************************************************************/
		else
		{
			searchPtr->prev -> next = searchPtr->next;
			searchPtr->next -> prev = searchPtr -> prev;
		}

		//Delete that item and set the pointer to NULL
		delete searchPtr;
		searchPtr = NULL;

		size--;
	}

}

template <class Type>
void LinkList<Type>::deleteItem(Type& deleteItem,	//OUT - The item being deleted
								int	index)	//IN - The index where to insert item
{
	Node<Type>	*srchPnt;	//CALC - search pointer
	int			counter;	//CALC - counter to the position being inserted

	//INITIALIZATION
	srchPnt = first;
	counter = 0;

	if(index == 0)
	{
		deleteFirst(deleteItem);
	}
	else if(index == size - 1 )
	{
		deleteLast(deleteItem);
	}
	else if(index < size - 1 && index > 0)
	{
		//Iterate to the position where to add the item
		while(counter < index)
		{
			srchPnt = srchPnt->next;
			counter++;
		}

		srchPnt->next->prev = srchPnt->prev;
		srchPnt->prev->next	= srchPnt->next;

		size--;
	}
	else
	{
		cout << "Invalid index\n";
	}

	srchPnt = NULL;
}

template <class Type>
void LinkList<Type>:: deleteFirst(Type& deleteItem)	//OUT - The item being deleted
{
	Node<Type>	*deletePnt;	//CALC - The pointer points to the item being deleted

	if(!isEmpty())
	{
		deletePnt = first;
		deleteItem = deletePnt->object;

		//When there is more than 1 node in the list
		if(size > 1)
		{
			first->next->prev = NULL;
			first = first->next;

			delete deletePnt;
			deletePnt = NULL;
		}
		//When there is only one node in the list
		else
		{
			first = NULL;
			last = NULL;
		}

		delete deletePnt;
		deletePnt = NULL;
		size--;
	}
	else
	{
		cout << "The list is empty. There is nothing to delete\n\n";
	}
}

template <class Type>
void LinkList<Type>:: deleteLast(Type& deleteItem)	//OUT - The item being deleted
{
	Node<Type>	*deletePnt;	//CALC - The pointer points to the item being deleted

	if(!isEmpty())
	{
		deletePnt = last;
		deleteItem = deletePnt->object;

		//When there is more than one node in the list
		if(size > 1)
		{
			last->prev->next = NULL;
			last = last->prev;

		}
		//when there is only one node in the list
		else
		{
			first = NULL;
			last = NULL;
		}

		delete deletePnt;
		deletePnt = NULL;
		size--;
	}
	else
	{
		cout << "The list is empty. There is nothing to delete\n\n";
	}
}

							/********************
							-----ACCESSORS-----
							********************/

template <class Type>
bool LinkList <Type> :: isEmpty()	const
{
	return first == NULL;
}

template <class Type>
int LinkList <Type> :: getSize()	const
{
	return size;
}

template <class Type>
void LinkList <Type> :: print()		const
{
	Node<Type> *nodePnt;		//CALC - Auxiliary node pointer
	nodePnt = first;


	if(isEmpty())
	{
		cout << "There is nothing to output.\n";
	}

	while(nodePnt != NULL)
	{
		cout << nodePnt->object;
		cout << ' ';

		nodePnt = nodePnt->next;
	}

	cout << endl;

	delete nodePnt;
	nodePnt = NULL;
}

template <class Type>
Node<Type>* LinkList<Type>::search (const Type& searchItem)	const
											//IN - The item being searched for
{
	bool 	 found;			//CALC	- Indicates whether the item is found
	Node<Type> 	*srchPnt;	//OUT 	- Pointer points to the node being searched

	//INITIALIZATION
	srchPnt = first;
	found = false;

	/*While loop - Keeps looking for the item until the item is found or
		reached the end of the list */
	while (srchPnt != NULL && !found)
	{
		if(srchPnt->object == searchItem)
		{
			found = true;
		}
		else
		{
			srchPnt = srchPnt->next;
		}
	}

	if(!found)
	{
		cout << "The item is not in the list\n";

		srchPnt = NULL;
	}

	return srchPnt;
}

template <class Type>
void LinkList<Type>::retrieveFirst(Type& firstElement)	const
									//OUT - The first element of the list

{
	if(!isEmpty())
	{
		firstElement = first->object;
	}
	else
	{
		cout << "The list is empty. There is no first element.\n\n";
	}
}

template <class Type>
void LinkList<Type>::retrieveLast(Type& lastElement)	const
										//OUT - The last element of the list
{
	if(!isEmpty())
	{
		lastElement = last->object;
	}
	else
	{
		cout << "The list is empty. There is no last element.\n\n";
	}
}

template <class Type>
void LinkList<Type>::retrieve(Type& element, 	//OUT - The element
								int index)const	//IN - The index of that element
{
	Node<Type>	*srchPnt;	//CALC - search pointer
	int			counter;	//CALC - counter to the position of the element

	counter = 0;
	srchPnt = first;

	if(index == 0)
	{
		retrieveFirst(element);
	}
	else if(index == (size - 1))
	{
		retrieveLast(element);
	}
	else if(index > 0 && index < size -1)
	{
		while(counter < index)
		{
			srchPnt = srchPnt->next;
			counter++;
		}
		element = srchPnt->object;
	}
	else
	{
		cout << "Invalid index\n";
	}
}

#endif /* LINKLIST_H_ */

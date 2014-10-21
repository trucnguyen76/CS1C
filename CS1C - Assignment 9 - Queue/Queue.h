//#ifndef QUEUE_H_
//#define QUEUE_H_

#include <iomanip>
#include <iostream>
#include <string>
#include <limits>
#include <ios>
#include <sstream>
using namespace std;

template <class type>
class Queue
{
struct Node
{
	type object;
	Node *next;
};
public:
							/**********************
							 -----CONSTRUCTORS-----
							 **********************/
	/******************************************************************************
	* Queue(int)
	* 	This constructor will create a queue of the given capacity or if no
	* 	capacity is given then the default capacity will be 100
	*****************************************************************************/
	Queue(int queueCapacity = 100);	//The capacity of the queue

	/******************************************************************************
	* Queue()
	* 	This copy constructor will copy the data of another queue to this queue
	*****************************************************************************/
	Queue(const Queue<type>& anotherQueue);

								/**********************
								 ------DESTRUCTORS-----
								 **********************/
	/******************************************************************************
	* ~Queue()
	* 	This deallocate dynamic memory and delete the Queue object
	*****************************************************************************/
	~Queue();

								/******************
								 -----MUTATORS-----
								 ******************/
	/*************************************************************************
	 * enqueue
	 *		This method allows the user to add an object to the queue
	 *		-> RETURN nothing
	 *		-> POST: the queue is changed and the newItem is added to the tail
	 *					of the queue
	 ************************************************************************/
	void enqueue(const type& newItem);	//IN - The item to enqueue

	/*************************************************************************
	 * dequeue
	 *		This method allows the user to remove the object at the front of
	 *		the list and returns that element
	 *		-> RETURN the removed item
	 *		-> POST: the item in front is removed
	 ************************************************************************/
	type dequeue();

	/*************************************************************************
	 * destroyQueue
	 *		This method remove all elements from the queue
	 *		-> RETURN nothing
	 *		-> POST: head -> NULL
	 ************************************************************************/
	void destroyQueue();

	/*************************************************************************
	 * copyQueue
	 *		This method copy all elements from anotherQueue to the Queue calling
	 *			this method
	 *		-> RETURN nothing
	 *		-> POST: the Queue object is the same as the Queue object in parameter
	 ************************************************************************/
	void copyQueue(Queue <type> anotherQueue);

								/********************
								-----ACCESSORS-----
								********************/
	/*************************************************************************
	 * isEmpty
	 *		This method checks if the queue is empty or not
	 *		-> RETURN a bool indicates whether the queue is empty or not
	 ************************************************************************/
	bool isEmpty()	const;

	/*************************************************************************
	 * isFull
	 *		This method checks if the queue is full or not
	 *		-> RETURN a bool indicates whether the queue is full or not
	 ************************************************************************/
	bool isFull()	const;

	/*************************************************************************
	 * size
	 *		This method returns the size of the queue
	 *		-> RETURN the size of the queue as an integer
	 ************************************************************************/
	int  size()		const;

	/*************************************************************************
	 * front
	 *		This method returns the element at the front without removing it
	 *		-> RETURN the element in front
	 ************************************************************************/
	type  front()	const;

	void outputQueue()	const;

private:
	Node 	   *head;			//The TypeStruct pointer points to the front
	Node	   *tail;			//The TypeStruct pointer points to the rear
	int		 	count;			//The counter of the link list (size)
	int		 	capacity;		//The maximum capacity of the queue

};

						/**********************
						 -----CONSTRUCTORS-----
						 **********************/
template <class type>
Queue <type> :: Queue(int queueCapacity)
{
	head 		= NULL;
	tail 		= head;
	count  		= 0;
	capacity 	= queueCapacity;
}

template <class type>
Queue <type> :: Queue(const Queue<type>& anotherQueue)
{
	count 		= anotherQueue.count;
	capacity 	= anotherQueue.capacity;

	copyQueue(anotherQueue);
}
					/**********************
					 ------DESTRUCTORS-----
					 **********************/
template <class type>
Queue <type> :: ~Queue()
{
	destroyQueue();
}

						/******************
						 -----MUTATORS-----
						 ******************/
template <class type>
void Queue<type>::enqueue(const type &newItem)	//IN - The item to enqueue

{
	Node	   	   *nodePnt;	//CALC - auxiliary pointer
	stringstream 	output;		//CALC - stringstream   variable

	//INITIALIZATION
	// creates new struct of type Node
	nodePnt = new type;

	nodePnt->object 	= newItem;
	nodePnt->next		= NULL;

	/***********************************************************************
	 * Check whether the list is empty or not. If the list is empty then
	 * 	the program will add the first node to the front, otherwise, it will
	 * 	add the new node to the rear of the link
	 **********************************************************************/
	if(isEmpty())
	{
		nodePnt->next 	= head;
		head	       	= nodePnt;
		tail         	= nodePnt;
		nodePnt       	= NULL;
		count++;
	}
	else if (!isFull())
	{
		tail->next	 	= nodePnt;
		tail 		 	= nodePnt;
		nodePnt			= NULL;
		count++;
	}
	else
	{
		cout << "CANNOT ENQUEUE." << endl;
		cout << "The queue already reaches maximum capacity." << endl;
	}

	nodePnt = NULL;
}

template <class type>
type Queue <type> :: dequeue()
{
	Node *nodePnt;			//CALC - The node pointer points to the item removed
	type  removingItem;		//OUT - The item being removed

	removingItem 	= head->object;
	nodePnt 		= head;

	if (!isEmpty())
	{
		head = head->next;
		count--;
		delete nodePnt;

		if (count == 0)
		{
			tail = NULL;
		}
	}
	else
	{
		cout << "Can't DEQUEUE from an empty list!\n\n";
	}

	nodePnt = NULL;
	return removingItem;
}

template <class type>
void Queue <type> :: destroyQueue()
{
	Node *nodePnt;			//CALC - The node pointer points to the item removed

	if(isEmpty())
	{
		cout << "The queue is already cleared." << endl;
	}
	else
	{
		while(!isEmpty())
		{
			nodePnt = head;
			head = head->next;
			count--;
			delete nodePnt;
		}
	}

	head = NULL;
	tail = NULL;
	nodePnt = NULL;

}
							/********************
							-----ACCESSORS-----
							********************/
template <class type>
bool Queue <type> :: isEmpty()	const
{
	return head == NULL;
}

template <class type>
bool Queue <type> :: isFull()	const
{
	return count == capacity;
}

template <class type>
int Queue <type> :: size()		const
{
	return count;
}

template <class type>
type Queue <type> :: front()	const
{
	return head->object;
}

template <class type>
void Queue <type> :: copyQueue(const Queue <type> anotherQueue)
{
	Node *nodePnt;		//CALC - Auxiliary pointer of type Node

	nodePnt = anotherQueue.head;

	//Check if the queue is big enough to receive the copied data
	if(capacity > anotherQueue.count)
	{
		while(nodePnt != NULL)
		{
			enqueue(nodePnt->object);

			nodePnt = nodePnt->next;
		}
	}
	else
	{
		cout << "The queue capacity is not enough to copy" << endl;
	}

	nodePnt = NULL;
}

template <class type>
void Queue <type> ::outputQueue()	const
{
	int counter = 0;

	Node *nodePnt;
	nodePnt = head;

	while(nodePnt != NULL)
	{
		counter++;
		cout << "The " << counter << " element is " << nodePnt->object;
		cout << endl;

		nodePnt = nodePnt->next;
	}


	nodePnt = NULL;
}

//
//#endif /* QUEUE_H_ */

/**************************************************************************
 * AUTHOR     	: Elva Nguyen
 * STUDENT ID 	: 366160
 * LAB #9		: Queue Template
 * CLASS      	: Computer Science 1C
 * SECTION    	: T - Th 6 - 9pm
 * DUE DATE   	: 10/21/14
 *************************************************************************/
#include "MyHeader.h"
/**************************************************************************
 *
 * Implementing a Stack Program
 * ________________________________________________________________________
 * This program will use the Queue class and the queue class from STL and
 * 		test it
 * ________________________________________________________________________
 * INPUTS:
 * 		<none>
 * OUTPUTS:
 * 		This program will perform actions with the queues
 *************************************************************************/
int main()
{
	Queue <int> 	intQueue(6);		//CALC - The queue of int
	Queue <float> 	floatQueue(6);		//CALC - The queue of float
	Queue <string> 	strQueue(6);		//CALC - The queue of string
	queue <int>		intQueue1;			//CALC - The queue of int from STL

	//Class Headings
	cout << PrintHeader("Elva Nguyen", 'a', "Exceptions", 10);

	cout << "INT QUEUE: " << endl << endl;
	cout << "Queue has " << intQueue.size() << " elements\n";
	cout << "Queue " << (intQueue.isEmpty()? "is": "is not") << " empty\n";
	cout << "Queue " << (intQueue.isFull()? "is": "is not") << " full\n";

	try
	{
		cout << "Adding 10\n";
		intQueue.enqueue(10);

		cout << "Adding 20\n";
		intQueue.enqueue(20);

		cout << "Adding 15\n";
		intQueue.enqueue(15);

		cout << "Adding 23\n";
		intQueue.enqueue(23);

		cout << "Adding 29\n";
		intQueue.enqueue(29);

		cout << "Adding 37\n";
		intQueue.enqueue(37);
	}

	catch (Full)
	{
		cout << "Queue is full!!!\n";
	}

	cout << "Queue has " << intQueue.size() << " elements\n";
	cout << "Queue " << (intQueue.isEmpty()? "is": "is not") << " empty\n";
	cout << "Queue " << (intQueue.isFull()? "is": "is not") << " full\n";
	cout << "Front: " << intQueue.front();
	cout << endl;
	cout << "Print queue: \n";
	intQueue.print();

	try
	{
		for(int i = 1; i <= 4; i++)
		{
			intQueue.dequeue();
			cout << endl;
		}
	}
	catch (Empty)
	{
		cout << "Queue is empty!!!\n";
	}


	cout << "Queue has " << intQueue.size() << " elements\n";
	cout << "Queue " << (intQueue.isEmpty()? "is": "is not") << " empty\n";
	cout << "Queue " << (intQueue.isFull()? "is": "is not") << " full\n";
	cout << "Front: " << intQueue.front();
	cout << endl;
	cout << "Print queue: \n";
	intQueue.print();

	try
	{
		cout << "Adding 100\n";
		intQueue.enqueue(100);

		cout << "Adding 200\n";
		intQueue.enqueue(200);

		cout << "Adding 150\n";
		intQueue.enqueue(150);

		cout << "Adding 230\n";
		intQueue.enqueue(230);

		cout << "Adding 290\n";
		intQueue.enqueue(290);

	}

	catch (Full)
	{
		cout << "Queue is full!!!\n";
	}

	try
	{
		for(int i = 1; i <= 3; i++)
		{
			intQueue.dequeue();
			cout << endl;
		}
	}
	catch (Empty)
	{
		cout << "Queue is empty!!!\n";
	}

	cout << "Queue has " << intQueue.size() << " elements\n";
	cout << "Queue " << (intQueue.isEmpty()? "is": "is not") << " empty\n";
	cout << "Queue " << (intQueue.isFull()? "is": "is not") << " full\n";
	cout << "Front: " << intQueue.front();
	cout << endl;
	cout << "Print queue: \n";
	intQueue.print();

	cout << "Clear Queue" << endl;
	intQueue.destroyQueue();


	try
	{
		intQueue.dequeue();
	}
	catch (Empty)
	{
		cout << "Queue is empty!!!\n";
	}
	cout << endl;
	cout << "Queue has " << intQueue.size() << " elements\n";
	cout << "Queue " << (intQueue.isEmpty()? "is": "is not") << " empty\n";
	cout << "Queue " << (intQueue.isFull()? "is": "is not") << " full\n";

	try
	{
		cout << "Front: " << intQueue.front();
	}
	catch (Empty)
	{
		cout << "Queue is empty!!!\n";
	}

	cout << endl;

	try
	{
		cout << "Print queue: \n";
		intQueue.print();
	}
	catch (Empty)
	{
		cout << "Queue is empty!!!\n";
	}

	cout << "Clear Queue" << endl << endl;
	intQueue.destroyQueue();

	return 0;
}



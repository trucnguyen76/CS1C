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
	cout << PrintHeader("Elva Nguyen", 'a', "Queue Template", 9);

	cout << "INT QUEUE: " << endl << endl;
	cout << "Queue has " << intQueue.size() << " elements\n";
	cout << "Queue " << (intQueue.isEmpty()? "is": "is not") << " empty\n";
	cout << "Queue " << (intQueue.isFull()? "is": "is not") << " full\n";

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

	cout << "Queue has " << intQueue.size() << " elements\n";
	cout << "Queue " << (intQueue.isEmpty()? "is": "is not") << " empty\n";
	cout << "Queue " << (intQueue.isFull()? "is": "is not") << " full\n";
	cout << "Front: " << intQueue.front();
	cout << endl;
	cout << "Print queue: \n";
	intQueue.print();

	for(int i = 1; i <= 4; i++)
	{
		intQueue.dequeue();
		cout << endl;
	}

	cout << "Queue has " << intQueue.size() << " elements\n";
	cout << "Queue " << (intQueue.isEmpty()? "is": "is not") << " empty\n";
	cout << "Queue " << (intQueue.isFull()? "is": "is not") << " full\n";
	cout << "Front: " << intQueue.front();
	cout << endl;
	cout << "Print queue: \n";
	intQueue.print();

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

	for(int i = 1; i <= 3; i++)
	{
		intQueue.dequeue();
		cout << endl;
	}

	cout << "Queue has " << intQueue.size() << " elements\n";
	cout << "Queue " << (intQueue.isEmpty()? "is": "is not") << " empty\n";
	cout << "Queue " << (intQueue.isFull()? "is": "is not") << " full\n";
	cout << "Front: " << intQueue.front();
	cout << endl;
	cout << "Print queue: \n";
	intQueue.print();

	PassAndReturnByCopy(intQueue);

	PassAndReturnByReference(intQueue);

	cout << "Clear Queue" << endl;
	intQueue.destroyQueue();


	intQueue.dequeue();
	cout << endl;
	cout << "Queue has " << intQueue.size() << " elements\n";
	cout << "Queue " << (intQueue.isEmpty()? "is": "is not") << " empty\n";
	cout << "Queue " << (intQueue.isFull()? "is": "is not") << " full\n";
	cout << "Front: " << intQueue.front();
	cout << endl;
	cout << "Print queue: \n";
	intQueue.print();

	cout << "Clear Queue" << endl << endl;
	intQueue.destroyQueue();

	//----------------------------------------------------------------------------
	cout << setfill('-') << setw(75) << '-' << endl;

	cout << "FLOAT QUEUE: " << endl << endl;
	cout << "Queue has " << floatQueue.size() << " elements\n";
	cout << "Queue " << (floatQueue.isEmpty()? "is": "is not") << " empty\n";
	cout << "Queue " << (floatQueue.isFull()? "is": "is not") << " full\n";

	cout << "Adding 10.5\n";
	floatQueue.enqueue(10.5);

	cout << "Adding 20.3\n";
	floatQueue.enqueue(20.3);

	cout << "Adding 15.7\n";
	floatQueue.enqueue(15.7);

	cout << "Adding 23.9\n";
	floatQueue.enqueue(23.9);

	cout << "Adding 29.1\n";
	floatQueue.enqueue(29.1);

	cout << "Adding 37.23\n";
	floatQueue.enqueue(37.23);

	cout << "Queue has " << floatQueue.size() << " elements\n";
	cout << "Queue " << (floatQueue.isEmpty()? "is": "is not") << " empty\n";
	cout << "Queue " << (floatQueue.isFull()? "is": "is not") << " full\n";
	cout << "Front: " << floatQueue.front();
	cout << endl;
	cout << "Print queue: \n";
	floatQueue.print();

	for(int i = 1; i <= 4; i++)
	{
		floatQueue.dequeue();
		cout << endl;
	}

	cout << "Queue has " << floatQueue.size() << " elements\n";
	cout << "Queue " << (floatQueue.isEmpty()? "is": "is not") << " empty\n";
	cout << "Queue " << (floatQueue.isFull()? "is": "is not") << " full\n";
	cout << "Front: " << floatQueue.front();
	cout << endl;
	cout << "Print queue: \n";
	floatQueue.print();

	cout << "Adding 100.25\n";
	floatQueue.enqueue(100.25);

	cout << "Adding 200.45\n";
	floatQueue.enqueue(200.45);

	cout << "Adding 150.63\n";
	floatQueue.enqueue(150.63);

	cout << "Adding 230.75\n";
	floatQueue.enqueue(230.75);

	cout << "Adding 290.85\n";
	floatQueue.enqueue(290.85);

	for(int i = 1; i <= 3; i++)
	{
		floatQueue.dequeue();
		cout << endl;
	}

	cout << "Queue has " << floatQueue.size() << " elements\n";
	cout << "Queue " << (floatQueue.isEmpty()? "is": "is not") << " empty\n";
	cout << "Queue " << (floatQueue.isFull()? "is": "is not") << " full\n";
	cout << "Front: " << floatQueue.front();
	cout << endl;
	cout << "Print queue: \n";
	floatQueue.print();

	PassAndReturnByCopy(floatQueue);

	PassAndReturnByReference(floatQueue);

	cout << "Clear Queue" << endl;
	floatQueue.destroyQueue();


	floatQueue.dequeue();
	cout << endl;
	cout << "Queue has " << floatQueue.size() << " elements\n";
	cout << "Queue " << (floatQueue.isEmpty()? "is": "is not") << " empty\n";
	cout << "Queue " << (floatQueue.isFull()? "is": "is not") << " full\n";
	cout << "Front: " << floatQueue.front();
	cout << endl;
	cout << "Print queue: \n";
	floatQueue.print();

	cout << "Clear Queue" << endl << endl;
	floatQueue.destroyQueue();
	//-----------------------------------------------------------------------------

	cout << setw(75) << '-' << endl;

	cout << "STRING QUEUE: " << endl << endl;
	cout << "Queue has " << strQueue.size() << " elements\n";
	cout << "Queue " << (strQueue.isEmpty()? "is": "is not") << " empty\n";
	cout << "Queue " << (strQueue.isFull()? "is": "is not") << " full\n";

	cout << "Adding Hello \n";
	strQueue.enqueue("Hello ");

	cout << "Adding The \n";
	strQueue.enqueue("The ");

	cout << "Adding World \n";
	strQueue.enqueue("World ");

	cout << "Adding How \n";
	strQueue.enqueue("How ");

	cout << "Adding Are \n";
	strQueue.enqueue("Are ");

	cout << "Adding YOU? \n";
	strQueue.enqueue("YOU? ");

	cout << "Queue has " << strQueue.size() << " elements\n";
	cout << "Queue " << (strQueue.isEmpty()? "is": "is not") << " empty\n";
	cout << "Queue " << (strQueue.isFull()? "is": "is not") << " full\n";
	cout << "Front: " << strQueue.front();
	cout << endl;
	cout << "Print queue: \n";
	strQueue.print();

	for(int i = 1; i <= 4; i++)
	{
		strQueue.dequeue();
		cout << endl;
	}

	cout << "Queue has " << strQueue.size() << " elements\n";
	cout << "Queue " << (strQueue.isEmpty()? "is": "is not") << " empty\n";
	cout << "Queue " << (strQueue.isFull()? "is": "is not") << " full\n";
	cout << "Front: " << strQueue.front();
	cout << endl;
	cout << "Print queue: \n";
	strQueue.print();

	cout << "Adding \t \n";
	strQueue.enqueue("\t");

	cout << "Adding I \n";
	strQueue.enqueue("I ");

	cout << "Adding AM \n";
	strQueue.enqueue("AM ");

	cout << "Adding BORED \n";
	strQueue.enqueue("BORED");

	cout << "Adding !!!!\n";
	strQueue.enqueue("!!!!");

	for(int i = 1; i <= 3; i++)
	{
		strQueue.dequeue();
		cout << endl;
	}

	cout << "Queue has " << strQueue.size() << " elements\n";
	cout << "Queue " << (strQueue.isEmpty()? "is": "is not") << " empty\n";
	cout << "Queue " << (strQueue.isFull()? "is": "is not") << " full\n";
	cout << "Front: " << strQueue.front();
	cout << endl;
	cout << "Print queue: \n";
	strQueue.print();

	PassAndReturnByCopy(strQueue);

	PassAndReturnByReference(strQueue);

	cout << "Clear Queue" << endl;
	strQueue.destroyQueue();


	strQueue.dequeue();
	cout << endl;
	cout << "Queue has " << strQueue.size() << " elements\n";
	cout << "Queue " << (strQueue.isEmpty()? "is": "is not") << " empty\n";
	cout << "Queue " << (strQueue.isFull()? "is": "is not") << " full\n";
	cout << "Front: " << strQueue.front();
	cout << endl;
	cout << "Print queue: \n";
	strQueue.print();

	cout << "Clear Queue" << endl << endl;
	strQueue.destroyQueue();

	//*****************************************************************************
	cout << setfill('*') << setw(75) << '*' << endl << setw(75) << '*' << endl;
	cout << "USING STL <queue>" << endl << endl;

	cout << "INT QUEUE: " 	<< endl << endl;
	cout << "Queue has " 	<< intQueue1.size() << " elements\n";
	cout << "Queue " 		<< (intQueue1.empty()? "is": "is not") << " empty\n\n";

	cout << "Adding 10\n";
	intQueue1.push(10);

	cout << "Adding 20\n";
	intQueue1.push(20);

	cout << "Adding 15\n";
	intQueue1.push(15);

	cout << "Adding 23\n";
	intQueue1.push(23);

	cout << "Adding 29\n";
	intQueue1.push(29);

	cout << "Adding 37\n";
	intQueue1.push(37);

	cout << "Queue has " 	<< intQueue1.size() << " elements\n";
	cout << "Queue " 		<< (intQueue1.empty()? "is": "is not") << " empty\n";
	cout << "Front: " 		<< intQueue1.front() << endl;
	cout << "Back: "		<< intQueue1.back() << endl << endl;

	for(int i = 1; i <= 4; i++)
	{
		cout << "Dequeue\n";
		intQueue1.pop();
	}

	cout << "Queue has " 	<< intQueue1.size() << " elements\n";
	cout << "Queue " 		<< (intQueue1.empty()? "is": "is not") << " empty\n";
	cout << "Front: " 		<< intQueue1.front() << endl;
	cout << "Back: "		<< intQueue1.back() << endl << endl;

	cout << "Adding 100\n";
	intQueue1.push(100);

	cout << "Adding 200\n";
	intQueue1.push(200);

	cout << "Adding 150\n";
	intQueue1.push(150);

	cout << "Adding 230\n";
	intQueue1.push(230);

	cout << "Adding 290\n";
	intQueue1.push(290);

	for(int i = 1; i <= 3; i++)
	{
		cout << "Dequeue\n";
		intQueue1.pop();
	}

	cout << "Queue has " 	<< intQueue1.size() << " elements\n";
	cout << "Queue " 		<< (intQueue1.empty()? "is": "is not") << " empty\n";
	cout << "Front: " 		<< intQueue1.front() << endl;
	cout << "Back: "		<< intQueue1.back() << endl << endl;

	intQueue1.pop();
	cout << "Queue has " 	<< intQueue1.size() << " elements\n";
	cout << "Queue " 		<< (intQueue1.empty()? "is": "is not") << " empty\n";
	cout << "Front: " 		<< intQueue1.front() << endl;
	cout << "Back: "		<< intQueue1.back() << endl << endl;

	return 0;
}



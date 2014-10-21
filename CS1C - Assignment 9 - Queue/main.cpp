/**************************************************************************
 * AUTHOR     	: Elva Nguyen, Nicole Nelson
 * STUDENT ID 	: 366160, 359877
 * LAB #9		: Implementing a Stack
 * CLASS      	: Computer Science 1B
 * SECTION    	: M-W 10am -12pm
 * DUE DATE   	: 4/2/14
 *************************************************************************/
#include "MyHeader.h"
/**************************************************************************
 *
 * Implementing a Stack Program
 * ________________________________________________________________________
 * This program will prompt for the user option and perform some action with
 * 		the queue
 * ________________________________________________________________________
 * INPUTS:

 * OUTPUTS:
 * 		This program will perform some action with the queue
 *************************************************************************/
int main()
{
	/**********************************************************************
	 * CONSTANTS
	 * --------------------------------------------------------------------
	 * MENU_PROMPT	: The Menu and The Prompt for User Choice
	 *********************************************************************/

	const string MENU_PROMPT = "QUEUE MENU:\n"
							   "1- ENQUEUE \n"
							   "2- DEQUEUE \n"
							   "3- ISEMPTY \n"
							   "4- FRONT   \n"
							   "5- SIZE    \n"
							   "6- OUTPUT  \n"
							   "7- CLEAR   \n"
							   "0- to Exit\n"
							   "Enter a command? ";

	MenuOptions userChoice;		//IN   - The User Choice
	Queue <int> queue;			//CALC - The queue of int
	int size;					//OUT  - The size of the linked list
	int number;					//IN   - The number being enqueued

	//Class Headings
	cout << PrintHeader("Elva Nguyen", 'a', "Queue", 9);

	//Get the userChoice as a int then type cast it into MenuOptions type
	userChoice = MenuOptions(GetAndCheckNumInput(MENU_PROMPT, 0, 6));

	//Unless the user chooses to exit, enter the loop
	while (userChoice != EXIT)
	{
		//The program will perform some action with the stacks based on userChoice
		switch (userChoice)
		{
		case ENQUEUE:
			cout << "Enter the number you want to enqueue: ";
			cin  >> number;
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			queue.enqueue(number);
			break;

		case DEQUEUE:
			cout << "The number being dequeued is: " << queue.dequeue();
			break;

		case ISEMPTY:
			//Output appropriate notification whether the list is empty or not
			if(queue.isEmpty())
			{
				cout << "Yes, the QUEUE is empty.\n\n";
			}
			else
			{
				cout << "The QUEUE is NOT empty.\n\n";
			}
			break;

		case FRONT:
			cout << queue.front();
			break;

		case SIZE:
			size = queue.size();
			//Output appropriate notification depends on the size of the list
			if (size == 0)
			{
				cout << "There is no element in the queue!\n\n";
			}
			else if (size == 1)
			{
				cout << "There is one element in the queue.\n\n";
			}
			else
			{
				cout << "There are " << size << " elements in the queue.\n\n";
			}
			break;

		case OUTPUT_LIST:
				queue.outputQueue();
			break;
		case CLEAR_QUEUE:
				queue.destroyQueue();
			break;
		}

		userChoice = MenuOptions(GetAndCheckNumInput(MENU_PROMPT, 0, 6));
	}

	return 0;
}



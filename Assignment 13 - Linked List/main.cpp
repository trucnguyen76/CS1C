/*********************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* ASSIGNMENT 13	: Link List
* CLASS         : CS1C
* SECTION       : T TH 6 - 8:50
* DUE DATE      : 11/20/2014
*********************************************************************************/
#include "header.h"
/**************************************************************************
 *
 *	Link List
 * ________________________________________________________________________
 * This program will test the link list class and its methods
 * ________________________________________________________________________
 * INPUTS:
 * 		<none>
 * OUTPUTS:
 * 		intList		: The first int link list
 * 		intList2	: The second int link list
 * 		doubleList	: The first double link list
 * 		doubleList2	: The second double link list
 *************************************************************************/
int main()
{

	//OUTPUT - Class Headings
	cout << PrintHeader("Elva Nguyen", 'a', "Link List", 13);

	LinkList<int> intList;			//OUT 	- The first int link list
	LinkList<int> intList2;			//OUT 	- The second int link list
	LinkList<double> doubleList;	//OUT 	- The first double link list
	LinkList<double> doubleList2;	//OUT 	- The second double link list
	int index;						//CALC 	- The index of the item
	int intItem;					//CALC	- The holder of an item type int
	double doubleItem;				//CALC	- The holder of an item type double

	cout << "INT LINK LIST\n";

	intList.insertFirst(50);
	intList.insertLast(40);
	intList.insertFirst(30);
	intList.insertLast(60);
	intList.insert(10, 2);

	for(index = 0; index < intList.getSize(); index++ )
	{
		intList.retrieve(intItem, index);
		intList2.insertFirst(intItem);
	}

	cout << "Linked List 1: ";
	intList.print();
	cout << "Linked List 2: ";
	intList2.print();

	cout << "\nDeleting the third node in both linked list\n";

	intList.deleteItem(intItem, 2);
	intList2.deleteItem(10);

	cout << "\nDeleting a non-exitent item\n";
	intList.deleteItem(intItem, 10);
	intList2.deleteItem(500);

	cout << "Linked List 1: ";
	intList.print();
	cout << "Linked List 2: ";
	intList2.print();

	cout << "\nInserting a node in the middle of the list\n";

	intList.insert(70, 2);
	intList2.insert(70, 2);

	cout << "Linked List 1: ";
	intList.print();
	cout << "Linked List 2: ";
	intList2.print();

	cout << "\nDestroy lists\n";
	intList.destroyList();
	intList2.destroyList();

	cout << "Linked List 1: ";
	intList.print();
	cout << "Linked List 2: ";
	intList2.print();

	cout << "\nDelete from an empty list\n";
	intList.deleteFirst(intItem);
	intList2.deleteLast(intItem);
	intList.deleteItem(100);
	intList2.deleteItem(intItem, 5);

	cout << "Linked List 1: ";
	intList.print();
	cout << "Linked List 2: ";
	intList2.print();
//******************************************************************************

	cout << setfill('*');
	cout << setw(75) << "*" << endl;
	cout << "DOUBLE LINK LIST\n";

	doubleList.insertFirst(75.5);
	doubleList.insertLast(20.6);
	doubleList.insertFirst(75.9);
	doubleList.insertLast(26.3);
	doubleList.insert(200.1, 2);

	for(index = 0; index < doubleList.getSize(); index++ )
	{
		doubleList.retrieve(doubleItem, index);
		doubleList2.insertFirst(doubleItem);
	}

	cout << "Linked List 1: ";
	doubleList.print();
	cout << "Linked List 2: ";
	doubleList2.print();

	cout << "\nDeleting the third node in both linked list\n";

	doubleList.deleteItem(doubleItem, 2);
	doubleList2.deleteItem(200.1);

	cout << "Linked List 1: ";
	doubleList.print();
	cout << "Linked List 2: ";
	doubleList2.print();

	cout << "\nDeleting a non-exitent item\n";
	doubleList.deleteItem(doubleItem, 100);
	doubleList2.deleteItem(500);

	cout << "Linked List 1: ";
	doubleList.print();
	cout << "Linked List 2: ";
	doubleList2.print();

	cout << "\nInserting a node in the middle of the list\n";

	doubleList.insert(175, 2);
	doubleList2.insert(175, 2);

	cout << "Linked List 1: ";
	doubleList.print();
	cout << "Linked List 2: ";
	doubleList2.print();

	cout << "\nDestroy lists\n";
	doubleList.destroyList();
	doubleList2.destroyList();

	cout << "Linked List 1: ";
	doubleList.print();
	cout << "Linked List 2: ";
	doubleList2.print();

	cout << "\nDelete from an empty list\n";
	doubleList.deleteFirst(doubleItem);
	doubleList2.deleteLast(doubleItem);
	doubleList.deleteItem(100);
	doubleList2.deleteItem(doubleItem, 5);

	cout << "Linked List 1: ";
	doubleList.print();
	cout << "Linked List 2: ";
	doubleList2.print();

	return 0;
}



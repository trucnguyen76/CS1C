// link4i.cpp
// to illustrate using a linked list with classes  and recursion
//
	#include "link4.h"


	int main()
	{
    		SortedList<int> list;
    		int mainItem;

    		list.Insert(352);
    		list.Insert(48);
    		list.Insert(12);
    		list.Insert(40);
    		list.Print();

    		if (!list.IsEmpty())
    			{
    			list.DeleteTop(mainItem);  // delete the first node
    			cout << "node delete was " << mainItem << endl << endl;
    			}

    		cout << "\nprint out list after delete" << endl;
    		list.Print();

    		list.Insert(1);  // insert at the top of the list
    		list.Insert(500); //insert at the bottom of the list
    		list.Insert(77); // insert in the middle
    		cout << "\nprint the list after inserting nodes"<< endl;
    		list.Print();

    		list.Delete(48);  // delete in the middle
    		cout << "\nprint the list deleting a middle node"<< endl;
    		list.Print();

    		list.Delete(1);  // delete the first node
    		cout << "\nprint the list deleting the first node" << endl;
    		list.Print();

    		list.Delete(500);  // delete the last node
    		cout << "\nprint the list deleting the last node" << endl;
			list.Print();

			while(!list.IsEmpty())
			{
				list.DeleteTop(mainItem);
			}

			cout << "List is empty: " << (list.IsEmpty()? "true\n": "false\n");

			list.DeleteTop(mainItem);

			list.Delete(2);
	}

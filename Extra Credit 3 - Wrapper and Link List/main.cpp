/**************************************************************************
 * AUTHOR     	: Elva Nguyen
 * STUDENT ID 	: 366160
 * ASSIGNMENT 3	: Extra Credit 3 - Wrappers
 * CLASS      	: Computer Science 1C
 * SECTION    	: T - Th 6 - 9pm
 * DUE DATE   	: 12/2/14
 *************************************************************************/
#include "header.h"
/**************************************************************************
 *
 * Wrapper
 * ________________________________________________________________________
 * 	Use the finished linkedListType to create a linkedStackType using wrappers.
 * 		 Test linkedStackType methods
 * ________________________________________________________________________
 * INPUTS:
 * 		<none>
 * OUTPUTS:
 * 		This program will test linkedStackType methods
 *************************************************************************/

int main()
{
	linkedStackType<int> stack1;	//CALC - First stack of int
	linkedStackType<int> stack2;	//CALC - Second stack of int
	int num;						//CALC - Auxiliary int to store return values

	cout << PrintHeader("Elva Nguyen", 'a', "Extra Credit 3 - Wrapper", 3);
	stack1.initializeStack();
	cout << "Stack1 is EMPTY? ";
	cout << (stack1.isEmptyStack()?"true": "false") << endl;
	cout << "Stack1 is FULL? ";
	cout << (stack1.isFullStack()?"true": "false") << endl;

	stack1.push(1);
	stack1.push(2);
	stack1.push(3);
	stack1.push(4);
	stack1.push(5);
	stack1.push(6);
	cout << "Stack1 is EMPTY? ";
	cout << (stack1.isEmptyStack()?"true": "false") << endl;
	cout << "Stack1 is FULL? ";
	cout << (stack1.isFullStack()?"true": "false") << endl;
	stack1.front(num);
	cout << "Front Stack1: " << num << endl;

	stack1.pop(num);
	cout << "Removed item: " << num << endl;
	stack1.pop(num);
	cout << "Removed item: " << num << endl;
	cout << "Stack1 is EMPTY? ";
	cout << (stack1.isEmptyStack()?"true": "false") << endl;
	cout << "Stack1 is FULL? ";
	cout << (stack1.isFullStack()?"true": "false") << endl;
	stack1.front(num);
	cout << "Front Stack1: " << num << endl;

	stack1.push(5);
	stack1.push(6);
	stack1.push(7);
	stack1.push(8);
	stack1.push(9);
	stack1.push(10);
	cout << "Stack1 is FULL? ";
	cout << (stack1.isFullStack()?"true": "false") << endl;
	stack1.front(num);
	cout << "Front Stack1: " << num << endl;
	stack1.push(11);
	cout << "Stack1 is FULL? ";
	cout << (stack1.isFullStack()?"true": "false") << endl;
	stack1.front(num);
	cout << "Front Stack1: " << num << endl << endl;

	linkedStackType<int>stack3(stack1);	//CALC - The third int stack
	cout << "linkedStackType<int>stack3(stack1)\n";
	cout << "Stack3 is EMPTY? ";
	cout << (stack3.isEmptyStack()?"true": "false") << endl;
	cout << "Stack3 is FULL? ";
	cout << (stack3.isFullStack()?"true": "false") << endl;
	stack3.front(num);
	cout << "Front Stack3: " << num << endl;
	cout << "Destroy Stack3\n";
	stack3.destroyStack();
	cout << "Stack3 is EMPTY? ";
	cout << (stack3.isEmptyStack()?"true": "false") << endl;
	cout << "Stack3 is FULL? ";
	cout << (stack3.isFullStack()?"true": "false") << endl << endl;


	cout << "stack2 = stack1\n";
	stack2 = stack1;

	num = 0;
	stack1.front(num);
	cout << "Front Stack 1: " << num << endl;
	stack2.front(num);
	cout << "Front Stack 2: " << num << endl;
	stack1.pop(num);
	cout << "Removed item stack2: " << num << endl;
	stack1.pop(num);
	cout << "Removed item stack2: " << num << endl;
	stack1.front(num);
	cout << "Front Stack2: " << num << endl;
 	return 0;
}

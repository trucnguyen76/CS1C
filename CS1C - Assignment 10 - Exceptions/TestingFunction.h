/**************************************************************************
 * AUTHOR     	: Elva Nguyen
 * STUDENT ID 	: 366160
 * LAB #9		: Queue Template
 * CLASS      	: Computer Science 1C
 * SECTION    	: T - Th 6 - 9pm
 * DUE DATE   	: 10/21/14
 *************************************************************************/
#ifndef TESTINGFUNCTION_H_
#define TESTINGFUNCTION_H_

#include "Queue.h"

template <class type>
Queue <type> PassAndReturnByCopy(Queue <type> queue1);

template <class type>
Queue <type> PassAndReturnByCopy(Queue <type> queue1)
{
	cout << "Pass and return by copy function \n\n";
	cout << "Output Queue: \n";
	queue1.print();

	return queue1;
}

template <class type>
Queue <type>& PassAndReturnByReference(Queue <type>& queue1);

template <class type>
Queue <type>& PassAndReturnByReference(Queue <type>& queue1)
{
	cout << "Pass and return by reference function \n\n";
	cout << "Output Queue: \n";
	queue1.print();

	cout << endl;
	return queue1;
}

#endif /* TESTINGFUNCTION_H_ */

/**********************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* ASSIGNMENT 6	: Smart Array and Command Line
* CLASS         : CS1C
* SECTION       : T TH 6 - 8:50
* DUE DATE      : 9/30/2014
**********************************************************************************/
#include "Header.h"
/**********************************************************************************
*
* Smart Array and Command Line
* _________________________________________________________________________________
* This program will use DynArray class, test its methods.
* This program will also receive my first and last name from the command line
* 	parameters. Then it will print out my first and last name using command line
* 	parameters. Then it will print the second char of my first and last name using
* 	the command line parameters
* _________________________________________________________________________________
* INPUTS:
* 		 <none>
*
* OUTPUTS:
* 		This program will output information of the students
**********************************************************************************/
int main( int argc, char **argv )
{
	/******************************************************************************
	 * CONSTANTS
	 * ----------------------------------------------------------------------------
	 * ARRAY_SIZE	 : The size of the array
	 *****************************************************************************/
	const int ARRAY_SIZE	= 10;

	DynArray array1(ARRAY_SIZE);
	DynArray array2(ARRAY_SIZE);
	int 	 index;

	//OUTPUT - Class Headings
	cout << PrintHeader("Elva Nguyen", 'a', "Math Student", 5);

	for(index = 0; index < ARRAY_SIZE; index++)
	{
		array1.Store(index * 10 , index);
	}

	for(index = 0; index < ARRAY_SIZE; index++)
	{
		cout << index << ' ';
		cout << array1.ValueAt(index);
		cout << '\n';
	}

	array2.CopyFrom(array1);

	for(index = 0; index < ARRAY_SIZE; index++)
	{
		cout << index << ' ';
		cout << array2.ValueAt(index);
		cout << '\n';
	}
	cout << endl;

	array1.Store(100, 11);
	array1.ValueAt(11);

//	cout << "There were " << argc << " arguments on the command line "<< endl;
//
//	cout << "They are " << endl;
//
//	for ( index = 0; index < argc; index++ )
//		cout << argv[index] << " " << endl;
//
//	while ( argc-- > 0 )
//		cout << *argv++ << " ";

	return 0;
}


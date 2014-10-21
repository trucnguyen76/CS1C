/**********************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* ASSIGNMENT 7	: Virtual Function
* CLASS         : CS1C
* SECTION       : T TH 6 - 8:50
* DUE DATE      : 10/07/2014
**********************************************************************************/
#include "Header.h"
/**********************************************************************************
 *
 * FUNCTION PrintHeader
 * ________________________________________________________________________________
 * 	This function receives the reference of Student object then output that
 * 		student's info
 * 		-> return nothing
 * ________________________________________________________________________________
 * PRE-CONDITIONS
 *		student: The Student object needs to be pre-defined
 *
 * POST-CONDITIONS
 * 		This function will output the student info
 *********************************************************************************/
void PrintAll(Student &student)		//IN - Student object pointer
{
	cout << student.outputStudent(37);
}

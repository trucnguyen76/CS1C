/**********************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* LAB 1 		: Exercise 1
* CLASS         : CS1C
* SECTION       : T TH 6 - 8:50
* DUE DATE      : 8/20/2014
**********************************************************************************/
#include "header.h"
/**********************************************************************************
*
* Function Add
* _________________________________________________________________________________
* This function will receives a vector and sum up the first  dimentsion to find
* 		out the last dimension
* 		-> return nothing
*
* _________________________________________________________________________________
* PRE-CONDITIONS
* 		vector		: The vector needs to be pre-defined
*
* POST-CONDITIONS
* 		Return nothing. The last dimension of the vector will be changed
**********************************************************************************/
void Add(vec3 &vector)	//IN & OUT - The vector
{
	//Add the first two vectors and store it in the last vector
	vector[2] = vector[0] + vector[1];
}



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
* Function Dot
* _________________________________________________________________________________
* This function will receives 2 vector and find the dot product of the 2 vectors
* 		-> return dot product
* _________________________________________________________________________________
* PRE-CONDITIONS
* 	The following variables need to be pre-defined:
* 		vector1		: The first vector
* 		vector2		: The second vector
*
* POST-CONDITIONS
* 		Return the dot product
**********************************************************************************/
double Dot(	vec3 vector1,	//IN - The First Vector  
			vec3 vector2)	//IN - The Second Vector
{
	return 	vector1[0] * vector2[0] +
			vector1[1] * vector2[1] +
			vector1[2] * vector2[2];
}



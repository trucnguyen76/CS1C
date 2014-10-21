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
* Function AddMatrix
* _________________________________________________________________________________
* This function will receives 3 matrices. It will add up the first 2 matrices to
* 		fill up the value for the thir matrix
* 		-> return nothing
* _________________________________________________________________________________
* PRE-CONDITIONS
* 		firstMat		: The first matrix needs to be pre-defined
* 		secondMat		: The second matrix needs to be pre-defined
* 		thirdMat		: The third matrix does not need to be pre-defined
*
* POST-CONDITIONS
* 		Return nothing. The values in the third matrix will be changed
**********************************************************************************/
void AddMatrix(	mat3 firstMat,	//IN  		- The First Matrix
				mat3 secondMat, //IN		- The Second Matrix
				mat3 &thirdMat)	//IN & OUT	- The Third Matrix
{
	int row;	//CALC - The row in the matrix
	int col;	//CALC - The column in the matrix

	//For loop will goes through each row of matrices
	for (row = 0; row <= 2; row++)
	{
		//For loop will goes to each value in each column in the row and add them
		for (col = 0; col <= 2; col++)
		{
			thirdMat[row][col] = firstMat[row][col] + secondMat[row][col];
		}
	}
}





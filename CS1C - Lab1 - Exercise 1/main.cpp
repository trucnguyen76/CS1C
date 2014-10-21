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
* Exercise 1
* _________________________________________________________________________________
* In this assignment, there are 2 parts a/ and b/
* 	a/ Use enum to create type vec3 as vector with 3 dimensions. Create a variable
* 		of vec3. Then add up the first 2 dimensions to get the third dimension of
* 		vector.
* 		Then create another vector and add it with the vector already created.
* 	b/ Use enum to create type mat3 as a 3 x 3 matrix.
* 		Then create 2 variables of type mat3 and find the dot product of the 2
* 		matrices
* _________________________________________________________________________________
* INPUTS:
* 		 x	: The x value of the vector
* 		 y	: The y value of the vector
* 		 z	: The z value of the vector
*
* OUTPUTS:
* 		dotProduct 		: The Dot Product of the vectors
* 		thirdMatrix		: The Third Matrix
**********************************************************************************/
int main()
{
	double  x;								//IN   - The x value of the vector
	double 	y;								//IN   - The y value of the vector
	double	z;								//IN   - The z value of the vector
	vec3 secondVector;						//CALC - The Second Vector
	mat3 firstMatrix = {1,2,3,4,5,6,7,8,9};	//CALC - The First Matrix
	mat3 secondMatrix = {2,3,4,5,6,7,8,9,1};//CALC - The Second Matrix
	int row;								//CALC - The row in the matrix
	int col;								//CALC - The column in the matrix
	vec3 firstVec;							//OUT  - The First Vector
	mat3 thirdMatrix;						//OUT - The Third Matrix
	double	dotProduct;						//OUT  - The Dot Product of the vectors

	//OUTPUT - Class Headings
	cout << PrintHeader("Elva Nguyen", 'l', "Exercise 1", 1);


//Part A of exercise 1

	//INPUT- Prompt for the first 2 vectors
	cout << "Enter the first 2 dimensions, separated by a space: ";
	cin  >> x >> y;

	//Input the first 2 vecs into the group
	firstVec[0] = x;
	firstVec[1] = y;

	//Add the first 2 Vec and store it in the 3rd vec
	Add(firstVec);

	cout << "The first vector's dimensions are: " 	<< firstVec[0] << '\t'
													<< firstVec[1] << '\t'
													<< firstVec[2] << endl;

	cout << "Enter 3 dimensions for the second vector, separated by a space: ";
	cin  >> x >> y >> z;

	secondVector[0] =  x;
	secondVector[1] =  y;
	secondVector[2] =  z;

	//Use dots operation to produce the dot product of corresponding vectors

	dotProduct = Dot(firstVec, secondVector);

	cout << "The dot product of the 2 vectors is " << dotProduct << endl;

//*************************************************************************

//Part B of Exercise 1
	AddMatrix(firstMatrix, secondMatrix, thirdMatrix);

	cout << "\nThe third matrix is: " << endl;

	//OUTPUT - Output all the number in the third matrix
	//This for loop will go to each row of the matrix
	for (row = 0; row <= 2; row++)
	{
		//This for loop will go to each value in 1 row
		for (col = 0; col <= 2; col++)
		{
			cout << thirdMatrix[row][col] << '\t';
		}

		cout << endl;
	}

	return 0;
}




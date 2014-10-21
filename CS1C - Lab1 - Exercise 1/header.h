/**********************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* LAB 1 		: Exercise 1
* CLASS         : CS1C
* SECTION       : T TH 6 - 8:50
* DUE DATE      : 8/20/2014
**********************************************************************************/
#ifndef HEADER_H_
#define HEADER_H_

#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

//TYPEDEF
typedef double vec3[3];

typedef double mat3[3][3];

//PROTOTYPES
/**********************************************************************************
 * PrintHeader
 * 	This function receives the programmer's name, assignment name, type
 * 		 and number then outputs the appropriate header
 * 		 -> return class headings
 *********************************************************************************/
string PrintHeader(	string  programmer,	//IN 		- programmer(s)'s name
					char 	asType, 	//IN 		- assignment type
					string 	asName,		//IN & OUT 	- assignment name
					int 	asNum);		//IN & OUT 	- assignment number

/**********************************************************************************
* Add
* 	This function will receives a vector and sum up the first  dimentsion to find
* 		out the last dimension
* 		-> return nothing
**********************************************************************************/
void Add(vec3 &vector);			//IN & OUT - The vector

/**********************************************************************************
* Dot
* 	This function will receives 2 vector and find the dot product of the 2 vectors
* 		-> return dot product
**********************************************************************************/
double Dot(	vec3 vector1,		//IN - The First Vector  
			vec3 vector2);		//IN - The Second Vector

/**********************************************************************************
* AddMatrix
* This function will receives 3 matrices. It will add up the first 2 matrices to
* 		fill up the value for the thir matrix
* 		-> return nothing
**********************************************************************************/
void AddMatrix(	mat3 firstMat,	//IN  		- The First Matrix
				mat3 secondMat, //IN		- The Second Matrix
				mat3 &thirdMat);//IN & OUT	- The Third Matrix

#endif /* HEADER_H_ */





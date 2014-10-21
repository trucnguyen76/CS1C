/**********************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* ASSIGNMENT 6*	: Extra Credit
* CLASS         : CS1C
* SECTION       : T TH 6 - 8:50
* DUE DATE      : 9/30/2014
**********************************************************************************/
#ifndef HEADER_H_
#define HEADER_H_

#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;
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
 * InsertionSort
 * 	This function receives the array and the array's size, then sort it
 * 		-> return the elements back to the array
 *********************************************************************************/
void InsertionSort (	  char* charAr[],	//IN & OUT - the array being sorted
					const int AR_SIZE);		//IN & CALC	- the array size
/**********************************************************************************
 * DisplayWords
 * 	This function receives the array of pointer words, number of words, and a bool
 * 		of whether the user wants duplicate words or not. Then it will display
 * 		the words from the array of pointer words in alphabetical order, case
 * 		insensitive.
 * 		-> return nothing
 *********************************************************************************/
void DisplayWords(	char*		words[], 	  //IN - The array of pointers of words
					const int	NUM_OF_WORDS, //IN - The number of the words
					bool		duplicate);	  //IN - Whether user want duplicate
/**********************************************************************************
 * ConvertString
 * 		This function receives a c-string then convert it to upper, lower or
 * 		Camel case
 * 		-> return the pointer to the converted c-string
 *********************************************************************************/
char* ConvertString( char* 	str, 			//IN - the string to be converted
					 char 	convertType);	//IN - the conversion type
											//		(upper case or lower case)
#endif //HEADER_H_

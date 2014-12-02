#include <ctime>
#include <cmath>
#include <cerrno>
#include <iomanip>
#include <iostream>
#include "header.h"

using namespace std;

int main()
{
	double		num1;			//CALC 	- The double number num1
	double 		num2;			//CALC	- The double number num2
	time_t		timeBegin;		//CALC	- The time begin the calculation (25 July)
	time_t		timeEnd;		//CALC	- The time end of the calculation (24 Dec)
	int			yDayBegin;		//CALC	- The year day of July 25
	int			yDayEnd;		//CALC 	- The year day of Dec 24
	struct tm 	* tptr;			//CALC	- The tm struct of current time
	char 		* timeStr;		//OUT	- The pointer points to the str of the time
	char 		* day88Str;		//OUT	- The pointer points to the str of 88 days
	clock_t 	exTime;			//OUT	- The execution time of the program
	time_t		currentTime;	//OUT 	- The current time
	time_t 		day88;			//OUT 	- The time of the day 88 days from now

	cout << "PART 1: " << endl;
	//a. Print out the current time
	/*If - check if the time() function works correctly ( if it's == -1 -> does not
														work correctly */
	currentTime = time(( time_t * ) 0 );
	if ( currentTime != ( time_t )-1 )
	{
		timeStr = ctime(&currentTime);
		cout << "Today is: " << timeStr;
	}


	//b. Calculate the day that is 88 days from today
	day88 = time(( time_t * ) 0);

	//If - check if the time() function works correctly
	if ( day88 != ( time_t )-1 )
	{
//		time(&day88);
		tptr = localtime(&day88);

		tptr->tm_mday = tptr->tm_mday + 88;
		day88 = mktime(tptr);

		day88Str = ctime(&day88);

		cout << "88 days from today is: " << day88Str;
	}

	/*c. Calculate the number days between July 25th and December 24th
					(July 26th and December 23th inclusive)*/

	timeBegin	= time ((time_t *) 0);
	timeEnd 	= time ((time_t *) 0);

	//If - check if the time() function works correctly
	if ( timeBegin!= ( time_t )-1  &&	timeEnd!= ( time_t )-1 )
	{
		tptr 		= localtime(&timeBegin);
		tptr		= localtime(&timeEnd);

		tptr->tm_mday 	= 25;
		tptr->tm_mon 	= 6;
		timeBegin	 	= mktime(tptr);


		tptr->tm_mday	= 24;
		tptr->tm_mon	= 11;

		timeEnd	 	= mktime(tptr);

		tptr 		= localtime(&timeBegin);
		yDayBegin 	= tptr->tm_yday;
		tptr		= localtime(&timeEnd);
		yDayEnd 	= tptr->tm_yday;

		cout 	<< "The number days between July 25th and December 24th "
				<< "(July 26th and December 23th inclusive) is "
				<< yDayEnd - yDayBegin
				<< endl;
	}

	//d. Calculate execution time of the program in nanoseconds

	exTime = clock();
	//If - check if the clock() function works correctly
	if (exTime != ( clock_t )-1 )
	{
		exTime = double ((exTime)/ double(CLOCKS_PER_SEC) *1000000000.0);
		cout	<< "The execution time of the program in nanoseconds is: "
				<< exTime
				<< endl << endl;

	}

	cout << "PART 2: " << endl;

	//a. Print the error message when calculating the square root of -2
	errno	= 0;
	num1 	= -2;
	num2	= sqrt(num1);
	cout << "Square root error is: " << strerror(errno) << endl;
	cout << "Square root of " << num1 << " is " << num2 << endl << endl;

	//b. Print the error message when division by zero
	errno	= 0;
	num1 	= 0;
	num2	= 100 / num1;
	cout << "Division error is: " << strerror(errno) << endl;
	cout << "100 / " << num1 << " = " << num2 << endl << endl;

	//c. Print the error message when calculating the natural log of -2
	errno  	= 0;
	num1 	= -2;
	num2 	= log(num1);
	cout << "Log error is: " << strerror(errno) << endl;
	cout << "log(" << num1 << ") = " << num2 << endl << endl;

	//d. Print out the result 1x10^18+4-1x10^18.
	errno = 0;
	cout << "10^18 + 4 - 10^18 = " << pow(10, 18) + 4 - pow(10,18);
	cout << endl << endl;

	cout << "PART 3: " << endl;
	num1 = 8;
	cout << "Cube of " << num1 << " is ";
	tabulate(Cube, num1);
	cout << endl;
	cout << "Cube root of " << num1 << " is ";
	tabulate(CubeRoot, num1);
	cout << endl << endl;

	cout << "PART 4: " << endl;

}




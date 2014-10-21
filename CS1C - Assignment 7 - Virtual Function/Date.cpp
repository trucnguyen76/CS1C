/**********************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* ASSIGNMENT 7	: Virtual Function
* CLASS         : CS1C
* SECTION       : T TH 6 - 8:50
* DUE DATE      : 10/07/2014
**********************************************************************************/
#include "Date.h"
						/**********************
						 -----CONSTRUCTORS-----
						 **********************/
//Default constructor
Date::Date()
{
	setDay(0);
	setMonth(0);
	setYear(0);
}

//Constructor with specific day, month, and year of the date
Date::Date(	int someMonth,		//The Month of the Date
			int someDay,		//The Day of the Date
			int someYear)		//The Year of the Date
{
	setDay(someDay);
	setMonth(someMonth);
	setYear(someYear);
}

						/*********************
						 -----DESTRUCTORS-----
						 *********************/
//Default constructor
Date::~Date(){}
						/******************
						 -----MUTATORS-----
						 ******************/
//Set Day for the Date
void Date::setDay(int newDay)			//The Day user wants to change to
{
	day = newDay;
}

//Set Month for the Date
void Date::setMonth(int newMonth)		//The Month user wants to change to
{
	month = newMonth;
}

//Set Year for the Date
void Date::setYear(int newYear)			//The Year user wants to change to
{
	year = newYear;
}
						/********************
						 -----ACCESSORS-----
						 ********************/
//Get the Day of the Date
int Date::getDay()									const
{
	return day;
}

//Get the Month of the Date
int Date::getMonth()								const
{
	return month;
}

//Get the Year of the Date
int Date::getYear()									const
{
	return year;
}

//Output the Date in a formatted way
string Date::outputDate()							const
{
	stringstream output;				//CALC - The String Stream Variable

	//If the month is < 10, add a 0 in front
	if (month < 10)
	{
		output << 0;
	}
	output << month << '/';

	//If the day is < 10, add a 0 in front
	if(day < 10)
	{
		output << 0;
	}
	output << day << '/';
	output << year;

	return output.str();
}

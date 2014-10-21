#include "Date.h"
						/**********************
						 -----CONSTRUCTORS-----
						 **********************/
//Default constructor
Date::Date()
{
	day 	= 0;
	month 	= 0;
	year 	= 0;
}

//Constructor with specific day, month, and year of the date
Date::Date(	int someMonth,		//The Month of the Date
			int someDay,		//The Day of the Date
			int someYear)		//The Year of the Date
{
	day 	= someDay;
	month 	= someMonth;
	year 	= someYear;
}

						/*********************
						 -----DESTRUCTORS-----
						 *********************/
//Default constructor
Date::~Date()
{}

						/******************
						 -----MUTATORS-----
						 ******************/
//Set Day for the Date
void Date::SetDay(int newDay)			//The Day user wants to change to
{
	day = newDay;
}

//Set Month for the Date
void Date::SetMonth(int newMonth)		//The Month user wants to change to
{
	month = newMonth;
}

//Set Year for the Date
void Date::SetYear(int newYear)			//The Year user wants to change to
{
	year = newYear;
}
						/********************
						 -----ACCESSORS-----
						 ********************/
//Get the Day of the Date
int Date::GetDay()									const
{
	return day;
}

//Get the Month of the Date
int Date::GetMonth()								const
{
	return month;
}

//Get the Year of the Date
int Date::GetYear()									const
{
	return year;
}

//Check how many months to a given date after
int Date::CheckNumberOfMonth(Date dateAfter)		const
{
	int yearDifference;
	int monthDifference;

	yearDifference  = dateAfter.GetYear()  - GetYear();
	monthDifference = dateAfter.GetMonth() - GetMonth();

//Try to handle the situation that the entered date is actually after
	return (monthDifference) + (yearDifference * 12);
}

//Output the Date in a formatted way
string Date::OutputDate()							const
{
	stringstream output;				//CALC - The String Stream Variable

	output << day << '/' << month << '/' << year;

	return output.str();
}

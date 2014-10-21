#ifndef DATE_H_
#define DATE_H_

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Date
{
public:
						/**********************
						 -----CONSTRUCTORS-----
						 **********************/
	//Default constructor
	Date();

	//Constructor with specific day, month, and year of the date
	Date(	int someMonth,		//The Month of the Date
			int someDay,		//The Day of the Date
			int someYear);		//The Year of the Date

						/*********************
						 -----DESTRUCTORS-----
						 *********************/
	//Default destructor
	~Date();

						/******************
						 -----MUTATORS-----
						 ******************/
	//Set Day for the Date
	void SetDay(int newDay);			//The Day user wants to change to

	//Set Month for the Date
	void SetMonth(int newMonth);		//The Month user wants to change to

	//Set Year for the Date
	void SetYear(int newYear);			//The Year user wants to change to

						/********************
						-----ACCESSORS-----
						********************/
	//Get the Day of the Date
	int GetDay()								const;

	//Get the Month of the Date
	int GetMonth()								const;

	//Get the Year of the Date
	int GetYear()								const;

	//Output the Date in a formatted way
	string OutputDate()							const;

	//Check how many months from a given date
	int CheckNumberOfMonth(Date dateAfter)		const;

private:
	int day;		//The Day of the Date
	int month;		//The Month of the Date
	int year;		//The Year of the Date
};

#endif /* DATE_H_ */

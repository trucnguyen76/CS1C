/**********************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* LAB 5			: Inheritance - Cylinder Type
* CLASS         : CS1C
* SECTION       : T TH 6 - 8:50
* DUE DATE      : 9/4/2014
**********************************************************************************/
#ifndef CIRCLE_H_
#define CIRCLE_H_

#include <string>
#include <sstream>
#include "Math.h"

using namespace std;

class Circle
{
public:
							/**********************
							 -----CONSTRUCTORS-----
							 **********************/
	/******************************************************************************
	 * Circle()
	 * 	This default constructor will create a Circle object with a radius of 0
	 *****************************************************************************/
	Circle();
	/******************************************************************************
	 * Circle(double r)
	 *  This non-default constructor will create a Circle object with a radius of r
	 *****************************************************************************/
	Circle(double r);				//The radius of the circle

							/**********************
							 ------DESTRUCTORS-----
							 **********************/
	/******************************************************************************
	 * ~Circle()
	 *  This default destructor will delete the Circle object
	 *****************************************************************************/
	~Circle();
							/******************
							 -----MUTATORS-----
							 ******************/
	/******************************************************************************
	* setRadius()
	* 	This method receive the Circle's radius and set it to the object radius
	******************************************************************************/
	void setRadius(double r);		//The radius of the circle

							/********************
							-----ACCESSORS-----
							********************/
	/******************************************************************************
	* getRadius()
	* 	This method will return the circle's radius
	******************************************************************************/
	double getRadius()		const;

	/******************************************************************************
	* area()
	* 	This method will calculate and return the circle's area
	******************************************************************************/
	double area()			const;

	/******************************************************************************
	* circumference()
	* -----------------------------------------------------------------------------
	* 	This method will calculate and return the circumference
	******************************************************************************/
	double circumference()	const;

	/******************************************************************************
	* outputCircle()
	* 	This method will return a string of the circle's information
	******************************************************************************/
	string outputCircle()	const;

private:
	double radius;		//The circle's radius
};

#endif

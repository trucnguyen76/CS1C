/**********************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* LAB 5			: Inheritance - Cylinder Type
* CLASS         : CS1C
* SECTION       : T TH 6 - 8:50
* DUE DATE      : 9/4/2014
**********************************************************************************/
#ifndef CYLINDER_H_
#define CYLINDER_H_

#include "Circle.h"

class Cylinder: public Circle
{
public:
						/**********************
						 -----CONSTRUCTORS-----
						 **********************/
	/******************************************************************************
	 * Cylinder()
	 * 	This default constructor create a Cylinder object with radius = height = 0
	 *****************************************************************************/
	Cylinder();
	/******************************************************************************
	 * Cylinder()
	 * 	This non-default constructor create a Cylinder object with radius of r
	 * 		and height of h
	 *****************************************************************************/
	Cylinder(double r, double h);
						/**********************
						 ------DESTRUCTORS-----
						 **********************/
	/******************************************************************************
	* ~Cylinder()
	*  This default destructor will delete the Cylinder object
	******************************************************************************/
	~Cylinder();
						/******************
						 -----MUTATORS-----
						 ******************/
	/******************************************************************************
	* setHeight()
	* 	This method receive the Cylinder height and set it to the object height
	******************************************************************************/
	void setHeight (double h);		//The Cylinder's Height

						/********************
						-----ACCESSORS-----
						********************/
	/******************************************************************************
	* getHeight()
	* 	This method will return the Cylinder height
	******************************************************************************/
	double getHeight()		const;
	/******************************************************************************
	* surfaceArea()
	* 	This method will calculate and return the Cylinder surface area
	******************************************************************************/
	double surfaceArea()	const;

	/******************************************************************************
	* volume()
	* 	This method will calculate and return the Cylinder volume
	******************************************************************************/
	double volume()			const;
	/******************************************************************************
	* outputCylinder()
	* 	This method will return a string of the Cylinder's information
	******************************************************************************/
	string outputCylinder()	const;

private:
	double height;					//The Cylinder's Height
};

#endif

/**********************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* LAB 5			: Inheritance - Cylinder Type
* CLASS         : CS1C
* SECTION       : T TH 6 - 8:50
* DUE DATE      : 9/4/2014
**********************************************************************************/
#include "Cylinder.h"
						/**********************
						 -----CONSTRUCTORS-----
						 **********************/
/******************************************************************************
 * Cylinder()
 * ----------------------------------------------------------------------------
 * 	This default constructor create a Cylinder object with radius = height = 0
 *****************************************************************************/
Cylinder::Cylinder()
{
	setRadius(0);
	setHeight(0);
}
/******************************************************************************
 * Cylinder()
 * ----------------------------------------------------------------------------
 * 	This non-default constructor create a Cylinder object with radius of r
 * 		and height of h
 *****************************************************************************/
Cylinder::Cylinder(double r, double h)
{
	setRadius(r);
	setHeight(h);
}
						/**********************
						 ------DESTRUCTORS-----
						 **********************/
/******************************************************************************
* ~Cylinder()
* ----------------------------------------------------------------------------
*  This default destructor will delete the Cylinder object
******************************************************************************/
Cylinder::~Cylinder()
{}
						/******************
						 -----MUTATORS-----
						 ******************/
/******************************************************************************
* setHeight()
* ----------------------------------------------------------------------------
* 	This method receive the Cylinder height and set it to the object height
******************************************************************************/
void Cylinder::setHeight (double h)		//The Cylinder's Height
{
	height = (h >= 0? h : 0);
}
						/********************
						-----ACCESSORS-----
						********************/
/******************************************************************************
* getHeight()
* ----------------------------------------------------------------------------
* 	This method will return the Cylinder height
******************************************************************************/
double Cylinder::getHeight()		const
{
	return height;
}
/******************************************************************************
* surfaceArea()
* ----------------------------------------------------------------------------
* 	This method will calculate and return the Cylinder surface area
******************************************************************************/
double Cylinder::surfaceArea()		const
{
	return circumference() * height;
}
/******************************************************************************
* volume()
* ----------------------------------------------------------------------------
* 	This method will calculate and return the Cylinder volume
******************************************************************************/
double Cylinder::volume()			const
{
	return area() * height;

}

string Cylinder::outputCylinder()	const
{
	stringstream output;	//String Stream variable

	output << 	"The cylinder's radius is: " << getRadius() << '\n'
		   << 	"The cylinder's height is: " << height << '\n'
		   << 	"The cylinder's surface area is: " << surfaceArea() << '\n'
		   <<	"The cylinder's volume is: " << volume() << '\n';

	return 	output.str();
}

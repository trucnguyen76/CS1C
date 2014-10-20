#include "CylinderType.h"

						/**********************
						 -----CONSTRUCTORS-----
						 **********************/
//Default Constructor
CylinderType::CylinderType()
{
//	radius = 0;
	height = 0;
}

//Non-default constructor
CylinderType::CylinderType(double r, double h)
{
	setRadius(r);
	setHeight(h);
}

						/**********************
						 ------DESTRUCTORS-----
						 **********************/
CylinderType::~CylinderType()
{}

						/******************
						 -----MUTATORS-----
						 ******************/
void CylinderType::setHeight(double h)
{
	height = h;
}

						/********************
						-----ACCESSORS-----
						********************/
//Get the height of the cylinder
double CylinderType::getHeight()	const
{
	return height;
}

//Calculate the surface area of the cylinder
double CylinderType::surfaceArea()	const
{
	return area() * height;
}

//Calculate the volume of the cylinder
double CylinderType::volume()		const
{
	return M_PI * getRadius() * getRadius() * height;
}






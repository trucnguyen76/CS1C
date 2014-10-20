#include "CircleType.h"
#include "Math.h"

class CylinderType: public circleType
{
public:
						/**********************
						 -----CONSTRUCTORS-----
						 **********************/
	//Default Constructor
	CylinderType();

	//Non-default constructor
	CylinderType(double r, double h);

						/**********************
						 ------DESTRUCTORS-----
						 **********************/
	~CylinderType();

						/******************
						 -----MUTATORS-----
						 ******************/
	void setHeight(double h);

						/********************
						-----ACCESSORS-----
						********************/
	//Get the height of the cylinder
	double getHeight()		const;

	//Calculate the surface area of the cylinder
	double surfaceArea()	const;

	//Calculate the volume of the cylinder
	double volume()			const;

	//Output Area
	string outputArea()		const;
private:
//	double	radius;		//The cyclinder's radius
	double 	height;		//The cyclinder's height

};


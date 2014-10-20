#ifndef 	CIRCLETYPE_H_
#define 	CIRCLETYPE_H_

#include <string>
#include <sstream>

using namespace std;

class circleType
{
public:
	void setRadius(double r);
		//Function to set the radius.
		//Postcondition: if (r>=0) radius = r;
		//				 otherwise radius = 0;

	double getRadius()		const;
		//Function to return the radius.
		//Postcondition: The value of the radius is returned.

	double area()			const;
		//Function to return the area of a circle.
		//Postcondition: Area is calculated and returned.

	double circumference()	const;
		//Function to return the circumference of a circle.
		//Postcondition: Circumference is calculated and returned.

	circleType(double r );
		//Constructor with a default parameter.
		//Radius is set according to the parameter.
		//The default value of the radius is 0.0;
		//Postcondition: radius = r;

	string outputCircle()	const;
		//Function to output the circle's area, circumference, radius
		//Postcondition: Output area, circumference, radius

//	circleType();



private:
	double radius;		//The circle' radius
};

#endif

#include "CircleType.h"

//circleType::circleType()
//{
//	radius = 0;
//}

void circleType::setRadius(double r)
{
	if (r >=0)
		radius = r;
	else
		radius = 0;
}

double circleType::getRadius()		const
{
	return radius;
}

double circleType::area()			const
{
	return 3.1416*radius*radius;
}

double circleType::circumference()	const
{
	return 2*3.1416*radius;
}

circleType::circleType(double r)
{
	setRadius(r);
}

string circleType::outputCircle()	const
{
	stringstream output;

	output << 	"The circle's radius is: " << radius << '\n'
		   << 	"The circle's area is: " << this->area() << '\n'
		   <<	"The circle's circumference is: " << circumference() << '\n';

	return 	output.str();

}

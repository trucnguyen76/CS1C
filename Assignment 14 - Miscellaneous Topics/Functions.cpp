#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

float Cube (float number)	//IN - The number being cubed
{
	return number * number * number;
}

float CubeRoot(float number)	//IN - The number that is taken the cube root
{
	return pow(number, 1.0/3);
}

void tabulate(float(*function)(float),	//IN - The function that return a float
										//		and have a float as a parameter
				float number)			//IN - The number for the func parameter{
{
	cout << (*function)(number);
}

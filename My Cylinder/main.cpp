/**********************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* LAB 5			: Inheritance - Cylinder Type
* CLASS         : CS1C
* SECTION       : T TH 6 - 8:50
* DUE DATE      : 9/4/2014
**********************************************************************************/
#include "Header.h"
/**********************************************************************************
*
* CylinderType
* _________________________________________________________________________________
* This program will prompt a menu of actions that can be performed on the cylinder
* 		object at the beginning of the program. Then after each time the user
* 		chooses, the program will loop and prompt the menu again so that the user
* 		can choose what to do next.
* 		The menu is:
* 			Cylinder Menu
* 			1/ Enter the Radius
* 			2/ Enter the Height
* 			3/ Output the Radius
* 			4/ Output the Height
* 			5/ Output the Surface Area
* 			6/ Output the Volume
* 			7/ Output the Cylinder's Info
* 			0/ Exit the program
* 			Enter your selection:
*
* _________________________________________________________________________________
* INPUTS:
* 		 userChoiceNum	: The User's Choice as an int
*
* OUTPUTS:
* 		This program will output information about the cylinder object cylinder1
**********************************************************************************/
int main()
{
	/******************************************************************************
	 * CONSTANTS
	 * ----------------------------------------------------------------------------
	 * MENU 	: The Cylinder Program Menu
	 *****************************************************************************/
	const string MENU = "Cylinder Menu\n"
						"1/ Enter the Radius\n"
						"2/ Enter the Height\n"
						"3/ Output the Radius\n"
						"4/ Output the Height\n"
						"5/ Output the Surface Area\n"
						"6/ Output the Volume\n"
						"7/ Output the Cylinder's Info\n"
						"0/ Exit the program\n"
						"Enter your selection: ";

	int 		userChoiceNum;	//The User's Choice as an int
	Menu 		userChoice;		//The User's Choice	as an enum
	Cylinder 	cylinder1;		//The Cylinder object
	double 		radius;			//The Cylinder's radius
	double 		height;			//The Cylinder's height

	//OUTPUT - Class Headings
	cout << PrintHeader("Elva Nguyen", 'l', "Inheritance - Cylinder Type", 5);

	userChoiceNum = GetAndCheckIntInput(MENU, 0, 7);
	userChoice = (Menu) userChoiceNum;

	//While loop - keep the program running until user chooses to exit
	while (userChoice != EXIT)
	{
		//Switch - Perform the actions based on the user choice
		switch (userChoice)
		{
		case ENTER_RADIUS:
			cout << "Enter the Cylinder's Radius: ";
			cin  >> radius;
			cylinder1.setRadius(radius);
			cout << endl;
			break;

		case ENTER_HEIGHT:
			cout << "Enter the Cylinder's Height: ";
			cin  >> height;
			cylinder1.setHeight(height);
			cout << endl;
			break;

		case OUT_RADIUS:
			cout << "The Cylinder's Radius is " << cylinder1.getRadius();
			cout << endl << endl;
			break;

		case OUT_HEIGHT:
			cout << "The Cylinder's Height is " << cylinder1.getHeight();
			cout << endl << endl;
			break;

		case CALC_SURFACE_AREA:
			cout << "The Cylinder's Surface Area is ";
			cout << cylinder1.surfaceArea() << endl << endl;
			break;

		case CALC_VOLUME:
			cout << "The Cylinder's Volume is ";
			cout << cylinder1.volume() << endl << endl;
			break;
		case OUT_CYLINDER:
			cout << cylinder1.outputCylinder() << endl;
			break;

		default:
			break;
		}//End switch (userChoice)
		userChoiceNum = GetAndCheckIntInput(MENU, 0, 7);
		userChoice = (Menu) userChoiceNum;
	}//End while (userChoice != EXIT)

	return 0;
}


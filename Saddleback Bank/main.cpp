/***********************************************************************************
* AUTHOR        : Elva Nguyen
* STUDENT ID    : 366160
* ASSIGNMNET #8 : Saddleback Bank
* CLASS         : CS1B
* SECTION       : M W 10-11:50
* DUE DATE      : 5/12/2014
***********************************************************************************/
#include "MyHeader.h"
/**********************************************************************************
 * Saddleback Bank
 * -----------------------------------------------------------------------
 * This program will prompt the user whether they want to initialize the
 * 		Account list. If the user choose to initialize the Account list, then
 * 		it will initialize the Accounts. Then it will prompt for the next
 * 		action that the user wants for the Account list until the user chooses
 * 		to exit.
 *
 * 		If the user chooses to reinitialize the either pigs or sheeps, the
 * 			program will ask to confirm the choice and it the user still
 * 			chooses to do that, it will reinitialize either pigs or sheep
 * 		If the user chooses to change age, it will prompt for the new age
 * 			and change the age.
 * 		If the user chooses to change value, it will prompt for the new value
 * 			and change the value.
 * 		If the user chooses to display the list, it will display the list.
 * --------------------------------------------------------------------------------
 * INPUTS:
 *  	userChoice		:	The User Choice for Menus
 *  	AccountChoice	:	The User Choice for the Account
 *  	newAge			:	The Account's New Age
 *  	newValue		:	The Account's New Value
 *  	fluffy			:	Object Account Fluffy
 *  	maa				:	Object Account Maa
 *  	babe			:	Object Account Babe
 *
 * 	OUTPUTS
 * 	 	This program will create an Account list and perform different actions
 * 	 	with the Account
 *********************************************************************************/
int main()
{
	Account			*account1212;		//CALC - The Account 1212's Pointer
	Account			*account2323;		//CALC - The Account 2323's Pointer
	Account			*account3434;		//CALC - The Account 3434's Pointer
	SavingAccount	*saving1212;		//CALC - The Saving Account Pointer of 1212
	MoneyMarket		*moneyMarket3434;	//CALC - The MM Account Pointer of 3434

	saving1212		= new SavingAccount("Nery Chapeton-Lamas", Date(4, 1, 2012),
			1212, 300, .1);
	account2323		= new CheckingAccount("Jenifer Kim", Date(4, 1, 2012),
	 	 	 2323, 50, 20);
	moneyMarket3434	= new MoneyMarket("Shannon Alfaro", Date(4, 1, 2012),
	   	   	   3434, 100, 0.2, 1.5);

	account1212		= saving1212;
	account3434 	= moneyMarket3434;


	//OUTPUT - CLASS HEADINGS
	cout << PrintHeader("Elva Nguyen", 'a', "Saddleback Bank", 8);

	cout << account1212->OutputTitleHeadings() 	<< endl;
	cout << account1212->OutputDashesLine()		<< endl;

	cout	<< account1212->OutputTransaction() << endl;

	cout	<< account2323->OutputTransaction() << endl;

	cout	<< account3434->OutputTransaction() << endl << endl;

	GetTransactionData(account1212, account2323, account3434);

	return 0;
}

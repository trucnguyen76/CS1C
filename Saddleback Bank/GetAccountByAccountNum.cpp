#include "MyHeader.h"
/**********************************************************************************
 *
 * FUNCTION GetAcountByAccountNum
 * ________________________________________________________________________________
 * 	This function receives the account number and the pointers pointing the 3 accs:
 * 		account 1212, account 2323, account 3434. The function then compare the
 * 		account number being passed in with the account numbers of the accounts and
 * 		return a pointer pointing to the account whose account number was passed in
 * 		-> return the account pointer
 * ________________________________________________________________________________
 * PRE-CONDITIONS
 *	The following variables have to be previously defined:
 *		accountNum			: The Account Number
 *		*account1212		: The Account 1212 pointer
 *		*account2323		: The Account 2323 pointer
 *		*account3434		: The Account 3434 pointer
 *
 * POST-CONDITIONS
 * 		This function will return the account pointer
 *********************************************************************************/
Account* GetAccountByAccountNum (int 	  accountNum,	//IN - Account's Number
								 Account *account1212,	//IN - Account 1212 Ptr
								 Account *account2323,	//IN - Account 2323 Ptr
								 Account *account3434)	//IN - Account 3434 Ptr
{
	Account *account;				//OUT - The Pointer ptr to the needed account

	//Return the a ptr pointing to a specific account based on its account's[ numb
	switch(accountNum)
	{
	case 1212:
		account = account1212;
		break;

	case 2323:
		account = account2323;
		break;

	case 3434:
		account = account3434;
		break;
	}
	return account;
}



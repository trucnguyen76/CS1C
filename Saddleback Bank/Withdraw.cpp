#include "MyHeader.h"
/**********************************************************************************
 *
 * FUNCTION Withdraw
 * ________________________________________________________________________________
 * 	This function receives account pointer, amount Withdraw, and transaction date,
 * 		then Withdraw the money into the account
 * 		-> return the account
 * ________________________________________________________________________________
 * PRE-CONDITIONS
 *	The following variables have to be previously defined:
 *		*account			: The Account being Withdraw ptr
 *		amountWithdraw,		: The Amount being Withdraw
 *		transactionDate		: The Transaction Date
 *
 * POST-CONDITIONS
 * 		This function will return the account
 *********************************************************************************/
Account* Withdraw (	Account *account,			//IN - The Account being withdraw
					float 	amountWithdraw,		//IN - The Amount being withdraw
					Date	transactionDate)	//IN - The Transaction Date
{
	account->Withdraw(amountWithdraw, transactionDate);

	return account;
}





#include "MyHeader.h"
/**********************************************************************************
 *
 * FUNCTION Deposit
 * ________________________________________________________________________________
 * 	This function receives account pointer, amount deposit, and transaction date,
 * 		then deposit the money into the account
 * 		-> return the account
 * ________________________________________________________________________________
 * PRE-CONDITIONS
 *	The following variables have to be previously defined:
 *		*account			: The Account being deposit ptr
 *		amountDeposit,		: The Amount being deposit
 *		transactionDate		: The Transaction Date
 *
 * POST-CONDITIONS
 * 		This function will return the account
 *********************************************************************************/
Account* Deposit (	Account *account,			//IN - The Account Deposit ptr
					float 	 amountDeposit,		//IN - The Amount being deposit
					Date	 transactionDate)	//IN - The Transaction Date
{
	account->Deposit(amountDeposit, transactionDate);

	return account;
}





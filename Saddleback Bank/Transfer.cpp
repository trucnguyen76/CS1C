#include "MyHeader.h"
/**********************************************************************************
 *
 * FUNCTION Transfer
 * ________________________________________________________________________________
 * 	This function receives account pointer, sending-money account's ptr,
 * 		amount transfer, transaction date, then transfer the money into the account
 * 		-> return the account
 * ________________________________________________________________________________
 * PRE-CONDITIONS
 *	The following variables have to be previously defined:
 *		*account			: The Account being deposit ptr
 *		*fromAccount		: The Account sending money ptr
 *		amountDeposit,		: The Amount being deposit
 *		transactionDate		: The Transaction Date
 *
 * POST-CONDITIONS
 * 		This function will return the account
 *********************************************************************************/
Account* Transfer(	Account *toAccount,			//IN - The Account receives
					Account *fromAccount,		//IN - The Account sends
					float 	amountTransfer,		//IN - The Amount being Transfer
					Date	transactionDate)	//IN - The Transaction Date
{
	toAccount->TransferFrom(fromAccount, amountTransfer, transactionDate);

	return toAccount;
}





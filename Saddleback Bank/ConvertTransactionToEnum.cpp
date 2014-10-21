#include "MyHeader.h"
/**********************************************************************************
 *
 * FUNCTION ConvertTransactionToEnum
 * ________________________________________________________________________________
 * 	This function receives the transaction as a string then convert it to enum
 * 		-> return the transaction type
 * ________________________________________________________________________________
 * PRE-CONDITIONS
 *	The following variables have to be previously defined:
 *		transaction		: The Transaction Type as a string
 *
 * POST-CONDITIONS
 * 		This function will return the enum transaction type
 *********************************************************************************/
TransactionTypes ConvertTransactionToEnum (string transaction)	//IN - The Transaction
{
	TransactionTypes transactionType;				//OUT - The Transaction Type enum

	//Ensure that the transaction is ALL CAPS
	transaction = ConvertString(transaction, 'u');

	//Based on the string, the corresponding enum will be return
	if(transaction == " WITHDRAWAL")
	{
		transactionType = WITHDRAWING;
	}
	else if(transaction == " DEPOSIT")
	{
		transactionType = DEPOSITING;
	}
	else if(transaction == " TRANSFER")
	{
		transactionType = TRANSFERING;
	}

	return transactionType;
}




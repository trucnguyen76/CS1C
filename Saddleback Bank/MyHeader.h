
#ifndef MYHEADER_H_
#define MYHEADER_H_

#include <ios>
#include <limits>
#include <string>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <iostream>
#include "Date.h"
#include "Account.h"
#include "CheckingAccount.h"
#include "SavingAccount.h"
#include "MoneyMarket.h"
using namespace std;

enum TransactionTypes
{
	DEPOSITING,
	WITHDRAWING,
	TRANSFERING
};

/**********************************************************************************
 * PrintHeader
 * 		This function receives the programmer's name, assignment name, type
 * 		 and number then outputs the appropriate header
 * 		 -> return class headings
 *********************************************************************************/
string PrintHeader(	string  programmer,	//IN 		- programmer(s)'s name
					char 	asType, 	//IN 		- assignment type
					string 	asName,		//IN & OUT 	- assignment name
					int 	asNum);		//IN & OUT 	- assignment number

/**********************************************************************************
 * Transfer
 * 		This function receives account pointer, sending-money account's ptr,
 * 		amount transfer, transaction date, then transfer the money into the account
 * 		-> return the account
 *********************************************************************************/
Account* Transfer(	Account *toAccount,			//IN - The Account receives
					Account *fromAccount,		//IN - The Account sends
					float 	amountTransfer,		//IN - The Amount being Transfer
					Date	transactionDate);	//IN - The Transaction Date

/**********************************************************************************
 * Deposit
 * 		This function receives account pointer, amount deposit, and transaction
 * 		date, then deposit the money into the account
 * 		-> return the account
 *********************************************************************************/
Account* Deposit (	Account *account,			//IN - The Account Deposit ptr
					float 	 amountDeposit,		//IN - The Amount being deposit
					Date	 transactionDate);	//IN - The Transaction Date

/**********************************************************************************
 * Withdraw
 * 		This function receives account pointer, amount Withdraw, and transaction
 * 		date, then Withdraw the money into the account
 * 		-> return the account
 *********************************************************************************/
Account* Withdraw (	Account *account,			//IN - The Account being withdraw
					float 	 amountWithdraw,	//IN - The Amount being withdraw
					Date	 transactionDate);	//IN - The Transaction Date

/**********************************************************************************
 * ConvertString
 * 		This function receives a string then convert it to upper, lower or
 * 		Camel case
 * 		-> return the converted string
 *********************************************************************************/
string ConvertString(string str,			//IN - the string to be converted
					 char 	convertType);	//IN - the conversion type
											//		(upper, lower, or Camel)

/**********************************************************************************
 * GetAcountByAccountNum
 * 		This function receives the account number and the pointers pointing to
 * 		account 1212, account 2323, account 3434. The function then compare the
 * 		account number being passed in with the account numbers of the accounts and
 * 		return a pointer pointing to the account whose account number was passed in
 * 		-> return the account pointer
 *********************************************************************************/
Account* GetAccountByAccountNum (int 	  accountNum,	//IN - Account's Number
								 Account *account1212,	//IN - Account 1212's Ptr
								 Account *account2323,	//IN - Account 2323's Ptr
								 Account *account3434);	//IN - Account 3434's Ptr

/**********************************************************************************
 * ConvertTransactionToEnum
 * 		This function receives the transaction as a string then convert it to enum
 * 		-> return the transaction type
 *********************************************************************************/
TransactionTypes ConvertTransactionToEnum (string transaction);	//IN - The Transaction

/**********************************************************************************
 * GetTransactionData
 * 		This function receives the pointers pointing to account 1212, account 2323,
 * 	 	account 3434. The function will prompt for the input file name, read in the
 * 	 	transactions' data and perform the appropriate transaction to the
 * 	 	corresponding account.
 * 		-> return the updated accounts by passing by reference (no return statement
 *********************************************************************************/
void GetTransactionData(Account* account1212,			//IN - Account 1212's Ptr
						Account* account2323,			//IN - Account 2323's Ptr
						Account* account3434);			//IN - Account 3434's Ptr


#endif /* MYHEADER_H_ */



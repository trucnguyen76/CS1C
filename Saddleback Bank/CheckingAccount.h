#ifndef CHECKINGACCOUNT_H_
#define CHECKINGACCOUNT_H_

#include "Account.h"

class CheckingAccount: public Account
{
public:
						/**********************
						 -----CONSTRUCTORS-----
						 **********************/
	//Default constructor
	CheckingAccount();

	//Constructor with name, open date, account number and balance
	CheckingAccount(	string 	name,			//Account Owner's Name
						Date	openDate,		//Account's Opened Date
						int		accNum,			//Account's Number
						float	accBalance,		//Account's Balance
						float	overdrawFee);	//Account's Overdraft Fee

						/*********************
						 -----DESTRUCTORS-----
						 *********************/
	//Default destructor
	virtual ~CheckingAccount();

						/********************
						 -----ACCESSORS-----
						 ********************/

						/******************
						 -----MUTATORS-----
						 ******************/
	//Deposit money to bank account
	virtual void Deposit(	float amountDeposit,	  	//Amount being Deposited
							Date  transactionDate);		//Transaction Date

	//Withdraw Money from bank account
	virtual void Withdraw(	float amountWithdraw,  		//Amount being Withdraw
							Date  transactionDate);		//Transaction Date

	//Received the money from another account
	virtual void TransferFrom(	Account *accountFrom,	 //Account sends the money
								float	 amountTransfer,  //Amount being transfered
								Date	 transactionDate);//Date transfer


private:
	float overdraftFee;				//The OverDraft Fee
};

#endif /* CHECKINGACCOUNT_H_ */





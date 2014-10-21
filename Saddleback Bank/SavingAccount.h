#ifndef SAVINGACCOUNT_H_
#define SAVINGACCOUNT_H_

#include <cmath>
#include "Account.h"

class SavingAccount: public Account
{
public:
						/**********************
						 -----CONSTRUCTORS-----
						 **********************/
	//Default constructor
	SavingAccount();

	//Constructor with name, open date, account number and balance
	SavingAccount(	string 	name,				//Account Owner's Name
					Date	openDate,			//Account's Opened Date
					int		accNum,				//Account's Number
					float	accBalance,			//Account's Balance
					float 	rateOfInterest);	//Account's Interest Rate

						/*********************
						 -----DESTRUCTORS-----
						 *********************/
	//Default destructor
	virtual ~SavingAccount();

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
								Date	 transactionDate);//Transaction Date

protected:
	float	interestRate;			//The Interest Rate

						/******************
						 -----MUTATORS-----
						 ******************/
	//Update the balance with the interest whenever there is a transaction
	void AddInterest(Date transactionDate);		//Transaction Date
};

#endif /* SAVINGACCOUNT_H_ */

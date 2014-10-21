#ifndef MONEYMARKET_H_
#define MONEYMARKET_H_

#include "SavingAccount.h"

class MoneyMarket: public SavingAccount
{
public:
						/**********************
						 -----CONSTRUCTORS-----
						 **********************/
	//Default constructor
	MoneyMarket();

	//Constructor with name, open date, account number and balance
	MoneyMarket(	string 	name,				//Account Owner's Name
					Date	openDate,			//Account's Opened Date
					int		accNum,				//Account's Number
					float	accBalance,			//Account's Balance
					float 	rateOfInterest,		//Account's Interest Rate
					float	withdrawFee);		//Account's Withdraw fee


						/*********************
						 -----DESTRUCTORS-----
						 *********************/
	//Default destructor
	virtual ~MoneyMarket();

						/********************
						 -----ACCESSORS-----
						 ********************/


						/******************
						 -----MUTATORS-----
						 ******************/
	//Withdraw Money from bank account
	virtual void Withdraw(	float amountWithdraw,  		//Amount being Withdraw
							Date  transactionDate);		//Transaction Date

private:
	float withdrawPenalty;		//The penalty on the account if user withdraw money
};

#endif /* MONEYMARKET_H_ */

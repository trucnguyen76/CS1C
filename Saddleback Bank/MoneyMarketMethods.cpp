#include "MoneyMarket.h"

						/**********************
						 -----CONSTRUCTORS-----
						 **********************/
	//Default constructor
	MoneyMarket::MoneyMarket()
	{
		withdrawPenalty			= 0.0;
	}

	//Constructor with name, open date, account number and balance
	MoneyMarket::MoneyMarket(	string 	name,			//Account Owner's Name
								Date	openDate,		//Account's Opened Date
								int		accNum,			//Account's Number
								float	accBalance,		//Account's Balance
								float 	rateOfInterest,	//Account's Interest Rate
								float	withdrawFee)	//Account's Withdraw fee
	{
		ownersName				= name;
		dateOpened				= openDate;
		accountNumber			= accNum;
		balance					= accBalance;
		amountLastTransaction	= 0.0;
		dateLastTransaction		= openDate;
		accountLastTransfer		= new Account;
		lastTransaction			= "Open MM";
		interestRate 			= rateOfInterest;
		withdrawPenalty 		= withdrawFee;
	}

						/*********************
						 -----DESTRUCTORS-----
						 *********************/
	//Default destructor
	MoneyMarket::~MoneyMarket()
	{}
						/********************
						 -----ACCESSORS-----
						 ********************/

						/******************
						 -----MUTATORS-----
						 ******************/
	//Withdraw Money from bank account
	void MoneyMarket::Withdraw(	float amountWithdraw,  	//Amount being Withdraw
								Date  transactionDate)	//Transaction Date
	{
//		//Check whether the account has sufficient fund or not
//		if(amountWithdraw > balance)
//		{
//			cout << "Cannot perform the transaction! "
//				 << "The account does not have sufficient fund!\n";
//		}
//		else
//		{
//			AddInterest(transactionDate);
//			balance 			-= (amountWithdraw + withdrawPenalty);
//
//			dateLastTransaction  = transactionDate;
//			amountLastTransaction = amountWithdraw;
//			lastTransaction	= "Withdraw";
//		}

		SavingAccount::Withdraw(amountWithdraw, transactionDate);
		balance -= withdrawPenalty;
	}

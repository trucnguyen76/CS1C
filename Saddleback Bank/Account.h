#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include "Date.h"

class Account
{
public:
						/**********************
						 -----CONSTRUCTORS-----
						 **********************/
	//Default constructor
	Account();

	//Constructor with name, open date, account number and balance
	Account(	string 	name,			//Account Owner's Name
				Date	openDate,		//Account's Opened Date
				int		accNum,			//Account's Number
				float	accBalance);	//Account's Balance

						/*********************
						 -----DESTRUCTORS-----
						 *********************/
	//Default destructor
	virtual ~Account();

						/********************
						 -----ACCESSORS-----
						 ********************/
	//Get the Account owner' name
	string	GetAccountName()			const;

	//Get the Account Opening Date
	Date 	GetOpenDate()				const;

	//Get the Account Number
	int		GetAccountNumber()			const;

	//Get the Account Balance
	float	GetAccountBalance()			const;

	//Output the Title Headings
	string OutputTitleHeadings()	const;

	//Output the dashes line for the title headings
	string OutputDashesLine()		const;

	//Output the Transaction Information in formatted way
	string	OutputTransaction()		const;

						/******************
						 -----MUTATORS-----
						 ******************/
	//Set the Account owner' name
	void	SetAccountInfo(string accountName);

	//Set the Account Opening Date
	void 	SetAccountInfo(Date openingDate);

	//Set the Account Number
	void	SetAccountInfo(int accNum);

	//Set the Account Balance
	void	SetAccountInfo(float accBalance);

	//Deposit money to bank account
	virtual void Deposit(	float amountDeposit,	  	//Amount being Deposited
							Date  transactionDate);		//Transaction Date

	//Withdraw Money from bank account
	virtual void Withdraw(	float amountWithdraw,  		//Amount being Withdraw
							Date  transactionDate);		//Transaction Date

	//Received the money from another account
	virtual void TransferFrom(	Account *accountFrom,	 //Account sends the money
								float	amountTransfer,  //Amount being transfered
								Date	transactionDate);//Date transfer

////Update the balance with the interest whenever there is a transaction
//void AddInterest(Date transactionDate);		//Transaction Date


protected:
	string 		ownersName;				//The Account Owner's Name
	Date		dateOpened;				//The Date Accounted Was Opened
	int			accountNumber;			//The Account Number
	float		balance;				//The Balance of the Account

	Date		dateLastTransaction;	//The Date of the Last Transaction
	float		amountLastTransaction;	//The Amount of the Transaction;
	string		lastTransaction;		//The Type of the Last Transaction
	Account*	accountLastTransfer;	//The Last Account Transfer From
};

#endif /* ACCOUNT_H_ */



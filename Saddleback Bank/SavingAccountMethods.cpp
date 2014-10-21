#include "SavingAccount.h"

						/**********************
						 -----CONSTRUCTORS-----
						 **********************/
	//Default constructor
	SavingAccount::SavingAccount()
	{
		interestRate 			= 0.0;
	}

	//Constructor with name, open date, account number and balance
	SavingAccount::SavingAccount(string name,			//Account Owner's Name
								 Date	openDate,		//Account's Opened Date
								 int	accNum,			//Account's Number
								 float	accBalance,		//Account's Balance
								 float 	rateOfInterest)	//Account's Interest Rate

	{
		ownersName				= name;
		dateOpened				= openDate;
		accountNumber			= accNum;
		balance					= accBalance;
		amountLastTransaction	= 0.0;
		dateLastTransaction		= openDate;
		accountLastTransfer		= new Account;
		lastTransaction			= "Open Savings";
		interestRate 			= rateOfInterest;
	}

						/*********************
						 -----DESTRUCTORS-----
						 *********************/
	//Default destructor
	SavingAccount:: ~SavingAccount()
	{}

						/********************
						 -----ACCESSORS-----
						 ********************/

						/******************
						 -----MUTATORS-----
						 ******************/
	//Deposit money to bank account
	void SavingAccount::Deposit(float amountDeposit,	  	//Amount Deposited
								Date  transactionDate)		//Transaction Date
	{

		AddInterest(transactionDate);
		balance 			+= amountDeposit;
		dateLastTransaction  = transactionDate;

		lastTransaction = "Deposit";
		amountLastTransaction	= amountDeposit;
	}

	//Withdraw Money from bank account
	void SavingAccount::Withdraw(float amountWithdraw,  	//Amount Withdraw
								 Date  transactionDate)		//Transaction Date
	{
		AddInterest(transactionDate);

		//Check whether the account has sufficient fund or not
		if(amountWithdraw > balance)
		{
			cout << "Cannot perform the withdraw! "
				 << "The account does not have sufficient fund!\n";
		}
		else
		{
			balance 			-= amountWithdraw;
			dateLastTransaction = transactionDate;

			amountLastTransaction = amountWithdraw;

			lastTransaction = "Withdraw";


		}
	}

	//Received the money from another account
	void SavingAccount::TransferFrom(Account *accountFrom,	 	//Account sends
									 float	  amountTransfer,  	//Amount
									 Date	  transactionDate)	//Transaction Date
	{
		AddInterest(transactionDate);
		//Check whether the transaction is performed between 2 accounts or not
		if(GetAccountNumber() == accountFrom->GetAccountNumber())
		{
			cout << "Cannot perform the transaction! \n";
		}
		else
		{
			if(amountTransfer > accountFrom->GetAccountBalance())
			{
				cout << endl;
				cout << "*** TRANSFER FROM 2323 TO 1212 NOT ALLOWED! ***\n"
					 << "***        DUE TO INSUFFICIENT FUNDS        ***\n\n";
				accountFrom->SetAccountInfo(accountFrom->GetAccountBalance() - 20);
			}
			else
			{

				accountFrom->Withdraw(amountTransfer, transactionDate);
				Deposit(amountTransfer, transactionDate);
			}

			accountLastTransfer = accountFrom;
			lastTransaction		= "Transfer";
			amountLastTransaction = amountTransfer;
			dateLastTransaction  = transactionDate;
		}
	}

	//Update the balance with the interest whenever there is a transaction
	void SavingAccount::AddInterest(Date transactionDate)		//Transaction Date
	{
		int monthDifference;

		monthDifference = dateLastTransaction.CheckNumberOfMonth(transactionDate);

		//Calculate the new balance including the interest
		balance = balance * pow((1 + interestRate), monthDifference);
	}

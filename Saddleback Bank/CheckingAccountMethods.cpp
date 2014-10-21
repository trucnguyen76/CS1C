#include "CheckingAccount.h"
						/**********************
						 -----CONSTRUCTORS-----
						 **********************/
	//Default constructor
	CheckingAccount::CheckingAccount()
	{
		overdraftFee			= 0.0;
	}

	//Constructor with name, open date, account number and balance
	CheckingAccount::CheckingAccount(	string name,	   //Account Owner's Name
										Date   openDate,   //Account's Opened Date
										int	   accNum,	   //Account's Number
										float  accBalance, //Account's Balance
										float  overdrawFee)//Overdraft Fee
	{
		ownersName				= name;
		dateOpened				= openDate;
		accountNumber			= accNum;
		balance					= accBalance;
		amountLastTransaction	= 0.0;
		dateLastTransaction		= openDate;
		accountLastTransfer		= new Account;
		lastTransaction			= "Open Checking";
		overdraftFee			= overdrawFee;
	}

						/*********************
						 -----DESTRUCTORS-----
						 *********************/
	//Default destructor
	CheckingAccount::~CheckingAccount()
	{}

						/********************
						 -----ACCESSORS-----
						 ********************/

						/******************
						 -----MUTATORS-----
						 ******************/
	//Deposit money to bank account
	void CheckingAccount::Deposit(	float amountDeposit,  //Amount being Deposited
									Date  transactionDate)//Transaction Date
	{
		balance 			+= amountDeposit;
		dateLastTransaction  = transactionDate;

		lastTransaction 	 = "Deposit";
		amountLastTransaction	= amountDeposit;

	}

	//Withdraw Money from bank account
	void CheckingAccount::Withdraw(	float amountWithdraw,   //Amount being Withdraw
									Date  transactionDate)	//Transaction Date
	{
		float remainingBalance;		//CALC - The remaining balance after withdraw

		remainingBalance = balance - amountWithdraw;

		/*Check whether the account can be able to perform the transaction or not
				(the maximum can overdraw is 200) */
		if(balance < 0)
		{
			cout << "Cannot perform the withdraw! "
				 << "The account does not have sufficient fund!\n";

			balance -= 20;
		}
		else
		{
			if(remainingBalance < -200)
			{
				cout << "Cannot perform the withdraw! "
					 << "The account does not have sufficient fund!\n";

			}
			else
			{

				balance 			 = remainingBalance;
				dateLastTransaction  = transactionDate;

				//Check whether the account overdraw, if it is, then add a $20 fee
				if (remainingBalance < 0)
				{
					balance -= 20;
				}
			}
			lastTransaction 	= "Withdraw";
			amountLastTransaction = amountWithdraw;

		}
		}


	//Received the money from another account
	void CheckingAccount::TransferFrom(	Account *accountFrom,	   //Account sends
										float	 amountTransfer,    //Amount
										Date	 transactionDate)   //Date transfer
	{
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


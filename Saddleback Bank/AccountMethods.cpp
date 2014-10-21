#include "Account.h"
	/******************************************************************************
	 * CONSTANTS
	 * ----------------------------------------------------------------------------
	 * ACCOUNT_NUM_COL		:	The width of the Account Number Column
	 * DATE_COL				:	The width of the Date Column
	 * AMOUNT_COL			:	The width of the Amount Column
	 * TRANSACTION_COL		:	The width of the Transaction Type Column
	 * BALANCE				:	The width of the Balance Column
	 * ACCOUNT_NAME_COL		:	The width of the Account Name Column
	 * FROM_ACCOUNT_COL		:	The width of the From Account Column
	 * FROM_ACC_BALANCE_COL	: 	The width of the From Account Balance Column
	 *****************************************************************************/
	const int ACCOUNT_NUM_COL		=	 8;
	const int DATE_COL				=	13;
	const int AMOUNT_COL			=	 9;
	const int TRANSACTION_COL		=	15;
	const int BALANCE_COL			=	15;
	const int ACCOUNT_NAME_COL		= 	23;
	const int FROM_ACCOUNT_COL		=	13;
	const int FROM_ACC_BALANCE_COL	= 	15;

						/**********************
						 -----CONSTRUCTORS-----
						 **********************/
	//Default constructor
	Account::Account()
	{
		ownersName.clear();
		lastTransaction.clear();
		dateOpened				= Date();
		dateLastTransaction		= Date();
		accountNumber			= 0;
		balance					= 0.0;
		amountLastTransaction	= 0;
		accountLastTransfer		= NULL;
	}

	//Constructor with name, open date, account number and balance
	Account::Account(	string 	name,			//Account Owner's Name
						Date	openDate,		//Account's Opened Date
						int		accNum,			//Account's Number
						float	accBalance)		//Account's Balance
	{
		ownersName				= name;
		dateOpened				= openDate;
		accountNumber			= accNum;
		balance					= accBalance;
		amountLastTransaction	= 0.0;
		dateLastTransaction		= openDate;
		lastTransaction			= "Open";
		accountLastTransfer		= new Account;
	}

						/*********************
						 -----DESTRUCTORS-----
						 *********************/
	Account::~Account()
	{}

						/********************
						 -----ACCESSORS-----
						 ********************/
	//Get the Account owner' name
	string	Account::GetAccountName()		const
	{
		return ownersName;
	}

	//Get the Account Opening Date
	Date 	Account::GetOpenDate()			const
	{
		return dateOpened;
	}

	//Get the Account Number
	int		Account::GetAccountNumber()		const
	{
		return accountNumber;
	}

	//Get the Account Balance
	float	Account::GetAccountBalance()	const
	{
		return balance;
	}

	//Output the Title Headings
	string	Account::OutputTitleHeadings()	const
	{
		stringstream output;					//CALC - The String Stream Variable

		output 	<< left;

		output	<< setw(TRANSACTION_COL)		<< "TRANSACTION"
				<< setw(DATE_COL)				<< "DATE "
				<< setw(ACCOUNT_NUM_COL) 		<< "ACCT# "
				<< setw(ACCOUNT_NAME_COL)		<< "ACCT NAME "
				<< right
				<< setw(AMOUNT_COL)				<< "AMOUNT"
				<< setw(BALANCE_COL)			<< "BALANCE"
				<< setw(FROM_ACCOUNT_COL)		<< "FROM ACCT#"
				<< setw(FROM_ACC_BALANCE_COL)	<< "FROM ACCT BAL";

		return output.str();
	}

	//Output the dashes line for the title headings
	string Account::OutputDashesLine()		const
	{
		stringstream output;					//CALC - The String Stream Variable

		output  << setfill('-');
		output	<< setw(TRANSACTION_COL)		<< ' '
				<< setw(DATE_COL)				<< ' '
				<< setw(ACCOUNT_NUM_COL) 		<< ' '
				<< setw(ACCOUNT_NAME_COL)		<< ' '
				<< right
				<< setw(AMOUNT_COL + 1)			<< ' '
				<< setw(BALANCE_COL + 1)		<< ' '
				<< setw(FROM_ACCOUNT_COL + 1)	<< ' '
				<< setw(FROM_ACC_BALANCE_COL)	<< ' ';

		return output.str();
	}

	//Output the Account Information in formatted way
	string	Account::OutputTransaction()		const
	{
		stringstream output;					//CALC - The String Stream Variable

		output 	<< left;

		output	<< setw(TRANSACTION_COL)		<< lastTransaction
				<< setw(DATE_COL)				<< dateLastTransaction.OutputDate()
				<< setw(ACCOUNT_NUM_COL)		<< accountNumber
				<< setw(ACCOUNT_NAME_COL)		<< ownersName
				<< right << setprecision(2) 	<< fixed
				<< '$'
				<< setw(AMOUNT_COL - 1)			<< amountLastTransaction
				<< " $"
				<< setw(BALANCE_COL - 1)		<< balance;
//Use Enum
		if(lastTransaction == "Transfer")
		{
			output << setw(FROM_ACCOUNT_COL)
				   << accountLastTransfer->GetAccountNumber()
				   << " $"
				   << setw(FROM_ACC_BALANCE_COL - 1)
				   << accountLastTransfer->GetAccountBalance();
		}
		return output.str();
	}


						/******************
						 -----MUTATORS-----
						 ******************/
	//Set the Account owner' name
	void	Account::SetAccountInfo(string accountName)
	{
		ownersName = accountName;
	}

	//Set the Account Opening Date
	void 	Account::SetAccountInfo(Date openingDate)
	{
		dateOpened = openingDate;
	}

	//Set the Account Number
	void	Account::SetAccountInfo(int accNum)
	{
		accountNumber = accNum;
	}

	//Set the Account Balance
	void	Account::SetAccountInfo(float accBalance)
	{
		balance = accBalance;
	}

	//Deposit money to bank account
	void Account::Deposit(	float amountDeposit,	  	//Amount being Deposited
							Date  transactionDate)		//Transaction Date
	{
		balance 			+= amountDeposit;
		dateLastTransaction  = transactionDate;

		lastTransaction 		= "Deposit";
		amountLastTransaction	= amountDeposit;
	}

	//Received the money from another account
	void Account::TransferFrom(	Account *accountFrom, 	 //Account sends the money
								float	 amountTransfer, //Amount being transfered
								Date	 transactionDate) //Date transfer
	{
		//Check whether the transaction is performed between 2 accounts or not
		if(GetAccountNumber() == accountFrom->GetAccountNumber())
		{
			cout << "Cannot perform the transfer! Same account\n";
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

		//Withdraw the money from the bank account
		void Account::Withdraw(	float amountWithdraw,	  //Amount being Withdraw
								Date  transactionDate)	  //Transaction Date
		{
			//Check whether the account has sufficient fund or not
			if(amountWithdraw > balance)
			{
				cout << "Cannot perform the withdraw! "
					 << "The account does not have sufficient fund!\n";
			}
			else
			{

				balance 			-= amountWithdraw;
				dateLastTransaction  = transactionDate;

				lastTransaction 	= "Withdraw";

				amountLastTransaction = amountWithdraw;


			}
		}

#include "MyHeader.h"
/**********************************************************************************
 *
 * FUNCTION GetTransactionData
 * ________________________________________________________________________________
 * 	This function receives the pointers pointing to account 1212, account 2323,
 * 	 	account 3434. The function will prompt for the input file name, read in the
 * 	 	transactions' data and perform the appropriate transaction to the
 * 	 	corresponding account.
 * 		-> return the updated accounts by passing by reference (no return statement
 * ________________________________________________________________________________
 * PRE-CONDITIONS
 *	The following variables have to be previously defined:
 *		*account1212		: The Account 1212 pointer
 *		*account2323		: The Account 2323 pointer
 *		*account3434		: The Account 3434 pointer
 *
 * POST-CONDITIONS
 * 		This function will return the updated accounts by passing by reference
 * 		 (no return statement)
 *********************************************************************************/
void GetTransactionData(Account* account1212,	//IN - Account 1212's Ptr
						Account* account2323,	//IN - Account 2323's Ptr
						Account* account3434)	//IN - Account 3434's Ptr
{
	int			 day;					//IN   	- The Transaction Date's Day
	int 		 month;					//IN   	- The Transaction Date's Month
	int 		 year;					//IN   	- The Transaction Date's Year
	int			 accNum;				//IN   	- The Account Number
	int 		 accNumTransferFrom;	//IN   	- The Account Number Sending Money
	float 		 amount;				//IN   	- The Amount of the Transaction
	string 		 transactionType;		//IN	- The Transaction Type (string)
	Account 	*account;				//CALC	- The Account Do Transaction Ptr
	Account		*accountTransferFrom;	//CALC	- The Account Send The Money Ptr
	Date 		 transactionDate;		//CALC 	- The Transaction Date
	ifstream 	 inFile;				//CALC 	- The Input File Stream
	TransactionTypes transaction;		//CALC	- The Transaction Type (enum)

	inFile.open("InFile.txt");

	accountTransferFrom = new Account;

	//While loop - Check if there is information to read in from the input file
	while(inFile)
	{
		/**************************************************************************
		 * Read in data from input file:
		 * The Day, Month, Year of the Transaction, Account Number, Amount,
		 * Transaction Type, and if Transaction Type is Transfer, then read in the
		 * Account Number of the Account that sends money
		 *************************************************************************/
		inFile >> month >> day >> year;

//cout << month << day << year << endl;

		transactionDate = Date(month, day, year);
//cout << transactionDate.OutputDate() << endl;

		inFile >> accNum;
//cout << accNum << endl;

		account = GetAccountByAccountNum(accNum, account1212,
														account2323,account3434);
		inFile >> amount;
//cout << amount << endl;

		getline(inFile, transactionType);
//cout << transactionType << endl;

		transaction = ConvertTransactionToEnum(transactionType);
//cout << "Right before switch" << endl;
		//Perform specific transaction on the account based on the transaction type
		switch (transaction)
		{
		case DEPOSITING:
			account = Deposit(account, amount, transactionDate);
			break;

		case WITHDRAWING:
			Withdraw(account, amount, transactionDate);
			break;

		case TRANSFERING:
			inFile >> accNumTransferFrom;
//cout << accNumTransferFrom << endl;
			inFile.ignore(numeric_limits<streamsize>::max(), '\n');

			accountTransferFrom = GetAccountByAccountNum( accNumTransferFrom,
														  account1212,
														  account2323,
														  account3434);
//cout << "Before using methods" << endl;
			Transfer(account, accountTransferFrom, amount, transactionDate);
//cout << "After calling function" << endl;
			break;
		}
		cout << account->OutputTransaction() << endl;
	}
	inFile.ignore(numeric_limits<streamsize>::max(), '\n');

	inFile.close();
}

/*19.	Class for Bank Account:- 
Define a class to represent a bank account. Include the following members:
Data Member:- Name of the depositor, Account Number, Type of Account, Balance amount in the account
Member Functions:- To assign values, To deposited an amount, To withdraw an amount after checking balance, 
To display name and balance
•	Objective: Understand encapsulation in classes.
*/
#include <iostream>
#include <string>
using namespace std;
class BankAccount 
{
private:
    string depositorName;
    string accountNumber;
    string accountType;
    double balance;

public:
    // Function to assign values to the account
    void assignValues(string name, string accNum, string accType, double initialBalance) 
    {
        depositorName = name;
        accountNumber = accNum;
        accountType = accType;

        if (initialBalance >= 0) 
        {
            balance = initialBalance;
        } 
        else 
        {
            balance = 0.0;
            cout << "Initial balance cannot be negative. Setting balance to 0." << endl;
        }
    }

    // Function to deposit
    void deposit(double amount) 
    {
        if (amount > 0) 
        {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } 
        else 
        {
            cout << "Deposit amount must be positive." << endl;
        }
    }

    // Function to withdraw
    void withdraw(double amount) 
    {
        if (amount > 0 && amount <= balance) 
        {
            balance -= amount;
            cout << "Withdrew: " << amount << endl;
        } 
        else if (amount > balance) 
        {
            cout << "Insufficient funds!" << endl;
        } 
        else 
        {
            cout << "Withdrawal amount must be positive." << endl;
        }
    }

    // Function to display account details
    void displayAccountDetails() const 
    {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() 
{
    BankAccount account;
    account.assignValues("Drashti", "123456789", "Savings", 1000.0);

    account.displayAccountDetails();

    account.deposit(500.0);
    account.displayAccountDetails();

    account.withdraw(300.0);    
    account.displayAccountDetails();

    account.withdraw(1500.0); // Attempt to withdraw more than the balance
    account.displayAccountDetails();
}

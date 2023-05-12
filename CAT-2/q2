/*
Suppose you are working on a program that models a banking system. You are asked to create a class called Bank Account.
It represents a single bank account and has the following attributes:

Account number: an integer that represents the account number

Account holder name: a string that represents the najme of the account holder

Balance : a double that represents the current balance in the account

The Bank Account classs should have the following public member functions:

deposit: An inline function that takes an amount in double datatype and adds it to the balance in the account.

withdraw: an inline function that returns the current balance in the account

Write a C++ program in which the main function, create two Bank Account objects with different account numbers and
account holder names, and initialise them with initial balances. Prompt the user to enter a deposit and a withdrawal ammount
for each account and use the doposit and withdraw functions to update the balances accordingly.
Finally, print  out the current balances for both accounts
*/
#include <iostream>
#include <string>

using namespace std;

class BankAccount {
    private:
    int accountno;
    string Holdername;
    double balance;
    public:
    BankAccount(int number, string name, double initialbalance){ //Constructor to initialise amount
        accountNo = number;
        Holdername=name;
        balance=initialbalance;
    }
    void deposit(double amount){ //iNLINE function to deposit money
        balance+=amount;
    }
    // Inline function to withdraw money
    void withdraw(double amount) {
        balance -= amount;
    }
    double getbalance(){
        return balance;
    }
};
int main(){
    BankAccount acc1, acc2;
    cout<<"Enter details of Account 1";
    cout<<"Enter account number, Holder name and initial money";
    cin>>acc1.accountno>>acc1.Holdername>>acc1.balance;
    cout<<"Enter details oof account 2";
    cin>>acc2.accountno>>acc2.Holdername>>acc2.balance;
    // Prompt user to enter deposit and withdrawal amounts for account 1
    double depositAmount, withdrawAmount;
    cout << "Enter deposit amount for account 1: ";
    cin >> depositAmount;
    acc1.deposit(depositAmount);
    cout << "Enter withdrawal amount for account 1: ";
    cin >> withdrawAmount;
    acc1.withdraw(withdrawAmount);
    
    // Prompt user to enter deposit and withdrawal amounts for account 2
    cout << "Enter deposit amount for account 2: ";
    cin >> depositAmount;
    acc2.deposit(depositAmount);
    cout << "Enter withdrawal amount for account 2: ";
    cin >> withdrawAmount;
    acc2.withdraw(withdrawAmount);
    
    // Print out current balances for both accounts
    cout << "Current balance for account 1: Rupees" << acc1.getBalance() << endl;
    cout << "Current balance for account 2: Rupees" << acc2.getBalance() << endl;
    
    return 0;
}

/*CHATGPT WAY:
#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    // Constructor
    BankAccount(int accountNumber, string accountHolderName, double balance) {
        this->accountNumber = accountNumber;
        this->accountHolderName = accountHolderName;
        this->balance = balance;
    }

    // Deposit function
    void deposit(double amount) {
        balance += amount;
        cout << "Deposit successful!" << endl;
    }

    // Withdraw function
    bool withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawal successful!" << endl;
            return true;
        } else {
            cout << "Insufficient balance!" << endl;
            return false;
        }
    }

    // Get account details
    void getAccountDetails() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    // Get details for first account
    int accountNumber1;
    string accountHolderName1;
    double balance1;
    cout << "Enter account details for first account" << endl;
    cout << "Account Number: ";
    cin >> accountNumber1;
    cout << "Account Holder Name: ";
    cin.ignore();
    getline(cin, accountHolderName1);
    cout << "Initial Balance: ";
    cin >> balance1;

    // Create first BankAccount object
    BankAccount account1(accountNumber1, accountHolderName1, balance1);

    // Get details for second account
    int accountNumber2;
    string accountHolderName2;
    double balance2;
    cout << "\nEnter account details for second account" << endl;
    cout << "Account Number: ";
    cin >> accountNumber2;
    cout << "Account Holder Name: ";
    cin.ignore();
    getline(cin, accountHolderName2);
    cout << "Initial Balance: ";
    cin >> balance2;

    // Create second BankAccount object
    BankAccount account2(accountNumber2, accountHolderName2, balance2);

    // Deposit and withdraw from first account
    double depositAmount1, withdrawAmount1;
    cout << "\nEnter deposit and withdraw amount for first account" << endl;
    cout << "Deposit Amount: ";
    cin >> depositAmount1;
    account1.deposit(depositAmount1);
    cout << "Withdraw Amount: ";
    cin >> withdrawAmount1;
    account1.withdraw(withdrawAmount1);

    // Deposit and withdraw from second account
    double depositAmount2, withdrawAmount2;
    cout << "\nEnter deposit and withdraw amount for second account" << endl;
    cout << "Deposit Amount: ";
    cin >> depositAmount2;
    account2.deposit(depositAmount2);
    cout << "Withdraw Amount: ";
    cin >> withdrawAmount2;
    account2.withdraw(withdrawAmount2);

    // Print account details for both accounts
    cout << "\nAccount Details for First Account:" << endl;
    account1.getAccountDetails();
    cout << "\nAccount Details for Second Account:" << endl;
    account2.getAccountDetails();

    return 0;
}

*/

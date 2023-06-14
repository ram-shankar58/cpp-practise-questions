/*Scenario:
You are developing a banking application that manages different types of accounts, such as SavingsAccount and CheckingAccount. Each account has a unique account number and balance. The application should be able to perform common banking operations like deposit, withdraw, and display account information.

Requirements:

Create a base class called Account with the following attributes and methods:

Attributes: accountNumber (integer), balance (float)
Methods: constructor to initialize the accountNumber and balance, deposit(), withdraw(), displayAccountInfo()
Create two derived classes called SavingsAccount and CheckingAccount, which inherit from the Account base class. The SavingsAccount should have an additional attribute called interestRate (float).

Implement the deposit() method in the derived classes, which adds the deposited amount to the account balance.

Implement the withdraw() method in the derived classes, which deducts the withdrawn amount from the account balance, taking into account any specific rules. For example, the CheckingAccount may have an overdraft limit.

Implement the displayAccountInfo() method in the derived classes, which displays the account number, balance, and any specific account details.

Create an array of Account objects, including instances of SavingsAccount and CheckingAccount.

Demonstrate polymorphism by looping through the array of Account objects and calling the displayAccountInfo() method for each object.

Your task:
Write the necessary C++ code to implement the above scenario, including class definitions, member function definitions, and a sample demonstration using an array of Account objects.

Note: You can assume that other necessary includes, namespaces, and main() function are already present in the code.*/

//code:
#include <iostream>

class Account {
protected:
    int accountNumber;
    float balance;

public:
    Account(int accNumber, float initialBalance)
        : accountNumber(accNumber), balance(initialBalance) {}

    virtual void deposit(float amount) {
        balance += amount;
    }

    virtual void withdraw(float amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            std::cout << "Insufficient funds." << std::endl;
        }
    }

    virtual void displayAccountInfo() {
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Balance: $" << balance << std::endl;
    }
};

class SavingsAccount : public Account {
private:
    float interestRate;

public:
    SavingsAccount(int accNumber, float initialBalance, float interest)
        : Account(accNumber, initialBalance), interestRate(interest) {}

    void deposit(float amount) override {
        balance += amount + (amount * interestRate);
    }

    void displayAccountInfo() override {
        std::cout << "Savings Account" << std::endl;
        Account::displayAccountInfo();
        std::cout << "Interest Rate: " << interestRate << std::endl;
    }
};

class CheckingAccount : public Account {
private:
    float overdraftLimit;

public:
    CheckingAccount(int accNumber, float initialBalance, float overdraft)
        : Account(accNumber, initialBalance), overdraftLimit(overdraft) {}

    void withdraw(float amount) override {
        if (amount <= balance + overdraftLimit) {
            balance -= amount;
        } else {
            std::cout << "Exceeded overdraft limit." << std::endl;
        }
    }

    void displayAccountInfo() override {
        std::cout << "Checking Account" << std::endl;
        Account::displayAccountInfo();
        std::cout << "Overdraft Limit: $" << overdraftLimit << std::endl;
    }
};

int main() {
    const int numAccounts = 3;
    Account* accounts[numAccounts];

    // Create instances of SavingsAccount and CheckingAccount
    accounts[0] = new SavingsAccount(1001, 1000.0f, 0.05f);
    accounts[1] = new CheckingAccount(2001, 500.0f, 200.0f);
    accounts[2] = new SavingsAccount(1002, 2000.0f, 0.03f);

    // Perform operations on the accounts
    for (int i = 0; i < numAccounts; i++) {
        accounts[i]->deposit(100.0f);
        accounts[i]->withdraw(200.0f);
        accounts[i]->displayAccountInfo();
        std::cout << std::endl;
    }

    // Clean up memory
    for (int i = 0; i < numAccounts; i++) {
        delete accounts[i];
    }

    return 0;
}

/*Create a program to model a banking system. You haev a BankAccount class, that stores information about each acount, including the acount holder's name, acount no,
and balance. You want to add a function to the class that allows account holders to transfer money to another account, but you need to access the private member variables of two BankAccount
objects to do so

Write a C++ program that implements a transferMoney() function as a friend function fo the BankAccount class. The transfermoney() function should take two BankAccount objects as arguments
and transfer a specified amount of money from the first account to the second account. Make sure to include appropriate member functions in the BankAccount class to store and retrieve account
information. Also make sure to handle case where the transfer amount exceeds the balance of the first account or where the account numbers are invalid.
*/

#include <iostream>
using namespace std

class BankAccount{
    string name;
    int accnumber;
    int balance;

public:
    // realised question doesn't mention constructors :P
    // BankAccount(string n, int ac, int bal){
    //     name = n;
    //     accnumber = ac;
    //     balance = bal;
    // }

    string get_name();
    int get_accnumber();
    int get_balance();

    void set_name(string n);
    void set_accnumber(int acc);
    void set_balance(int bal);

    friend void transferMoney(BankAccount a, BankAccount b, int ammount);

};

string BankAccount::get_name(){
    return name;
}

int BankAccount::get_accnumber(){
    return accnumber;
}

int BankAccount::get_balance(){
    return balance;
}

void BankAccount::set_name(string n){
    name = n;
}

void BankAccount::set_accnumber(int acc){
    accnumber = acc;
}

void BankAccount::set_balance(int bal){
    balance = bal;
}

void transferMoney(BankAccount a, BankAccount b, int ammount) {
    if(a.balance - ammount < 0){
        cout << "ERROR CAN'T TRANSFER AMMOUNT" << endl;
    }    

    a.balance -= ammount;
}

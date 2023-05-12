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
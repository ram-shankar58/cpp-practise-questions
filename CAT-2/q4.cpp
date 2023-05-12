#include <iostream>
using namespace std

class BankAccount{
    string name;
    int accnumber;
    int balance;

public:
    BankAccount(string n, int ac, int bal){
        name = n;
        accnumber = ac;
        balance = bal;
    }

    friend void transferMoney(BankAccount a, BankAccount b, int ammount);

};

void transferMoney(BankAccount a, BankAccount b, int ammount) {
    if(a.balance - ammount < 0){
        cout << "ERROR CAN'T TRANSFER AMMOUNT" << endl;
    }    

    a.balance -= ammount;
}
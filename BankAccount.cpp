#include <iostream>
using namespace std;

class BankAccount {

private:

    string accountTitle;
    int balance;
    int limit;

public:

    BankAccount() : accountTitle(""), balance(0), limit(0) {}


    BankAccount(string title, int bal) : accountTitle(title), balance(bal), limit(0) {}


    BankAccount(string title, int bal, int lim) : accountTitle(title), balance(bal), limit(lim) {}



    void deposit(int amount) {

        balance += amount;
        cout << "Successfully Deposited " << amount << endl;

    }


    void withdraw(int amount) {

        if (amount > limit) {
            cout << "Withdraw Failed : daily limit is " << limit << endl;

        } else if (amount > balance) {
            cout << "Withdraw failed , insufficient funds" << endl;

        } else {
            balance -= amount;
            cout << "Withdrew " << amount << " successfully" << endl;

        }


    }


    void printStatus() {

        cout << "Closing Status :" << endl;

        cout << "Title : " << accountTitle << " , Current Balance : " << balance << " , Daily Limit : " << limit << endl;


    }


};

int main() {

    string acctitle;
    int bal, lim;


    cin >> acctitle >> bal >> lim;
    BankAccount account(acctitle, bal, lim);

    char operation;
    int amount;


    while (true) {

        cin >> operation;

        if (operation == 'q')
            account.printStatus();
            break;

        cin >> amount;

        if (operation == 'w') {
            account.withdraw(amount);

        } else if (operation == 'd') {
            account.deposit(amount);

        }


    }



    return 0;


}

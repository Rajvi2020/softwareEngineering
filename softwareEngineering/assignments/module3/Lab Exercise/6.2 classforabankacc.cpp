#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;   

public:
    
    BankAccount(double b) {
        balance = b;
    }

    
    void deposit(double amount) {
        balance = balance + amount;
        cout << "Deposited: " << amount << endl;
    }

    
    void withdraw(double amount) {
        if (amount <= balance) {
            balance = balance - amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient Balance!" << endl;
        }
    }

    
    void display() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc(1000); 

    acc.deposit(500);
    acc.withdraw(300);
    acc.display();

    return 0;
}
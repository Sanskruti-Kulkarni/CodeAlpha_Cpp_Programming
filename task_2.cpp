#include <iostream>
using namespace std;

class Account {
public:
    int accNo;
    float balance;

    void create() {
        cout << "Enter Account Number: ";
        cin >> accNo;
        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit() {
        float amt;
        cout << "Enter deposit amount: ";
        cin >> amt;
        balance += amt;
    }

    void withdraw() {
        float amt;
        cout << "Enter withdraw amount: ";
        cin >> amt;
        if(amt <= balance)
            balance -= amt;
        else
            cout << "Insufficient Balance!\n";
    }

    void display() {
        cout << "Account No: " << accNo << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    Account a;
    int choice;

    a.create();

    do {
        cout << "\n1.Deposit\n2.Withdraw\n3.Display\n4.Exit\n";
        cin >> choice;

        switch(choice) {
            case 1: a.deposit(); break;
            case 2: a.withdraw(); break;
            case 3: a.display(); break;
        }
    } while(choice != 4);

    return 0;
}
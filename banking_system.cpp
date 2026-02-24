#include <iostream>
using namespace std;

class BankAccount {
    // DATA HIDING*
private:
    string name;
    int accountNumber;
    double balance;

public:
    void createAccount() {
        cout << "Enter Account Holder Name: ";
       cin>> name;
        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cout << "Enter Initial Balance: ";
        cin >> balance;

        cout << "Account Created \n";
    }

    void deposit() {
        double amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;

        if (amount > 0) {
            balance += amount;
            cout << "Deposit Successful\n";
        } else {
            cout << "Invalid \n";
        }
    }

    void withdraw() {
        double amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal Successful\n";
        } else {
            cout << "Insufficient Balance or Invalid Amount\n";
        }
    }

    void displayAccount() {
        cout << " Account Details \n";
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account;
    int choice;

    do {
        cout << " BANKING SYSTEM \n";
        cout << "1. Create Account\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Display Account\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            account.createAccount();
            break;
        case 2:
            account.deposit();
            break;
        case 3:
            account.withdraw();
            break;
        case 4:
            account.displayAccount();
            break;
        case 5:
            cout << "Thank you for using the Banking System!\n";
            break;
        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}
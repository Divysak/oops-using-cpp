#include <iostream>
using namespace std;

class ATM {
private:
    string accountHolder;
    long long int accountNumber;
    int pin;
    double balance;

public:
    ATM(string name, long long int accNo, int p, double bal) {
        accountHolder = name;
        accountNumber = accNo; 
        pin = p;

        if (bal >= 0)
            balance = bal;
        else
            balance = 0;
    }

    string getAccountHolder() const {
        return accountHolder; 
    }

    long long int getAccountNumber() const {
        return accountNumber;
    }

    double getBalance() const {
        return balance;
    }

    bool verifyPin(int enteredPin) const {
        return enteredPin == pin;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit Successful!\n";
        } else {
            cout << "Invalid Deposit Amount!\n";
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal Successful!\n";
        } else {
            cout << "Insufficient Balance or Invalid Amount!\n";
        }
    }

    void displayAccount() const {
        cout << "\n----- Account Information -----\n";
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    string name;
    long long int accNo;
    int pin;
    double initialBalance;

    cout << "===== CREATE ATM ACCOUNT =====\n";

    cout << "Enter Account Holder Name: ";
    cin >> name;

    cout << "Enter Account Number: ";
    cin >> accNo;

    cout << "Set 4-Digit PIN: ";
    cin >> pin;

    cout << "Enter Initial Balance: ";
    cin >> initialBalance;

    ATM user(name, accNo, pin, initialBalance);

    int choice;

    do {
        cout << "\n===== ATM MENU =====\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Display Account Info\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {

            long long int enteredAcc;
            int enteredPin;

            cout << "Enter Account Number: ";
            cin >> enteredAcc;

            cout << "Enter PIN: ";
            cin >> enteredPin;

            if (enteredAcc != user.getAccountNumber() || !user.verifyPin(enteredPin)) {
                cout << "Invalid Account Number or PIN!\n";
                continue;  // Go back to menu
            }
        }

        switch (choice) {

        case 1:
            cout << "Current Balance: " << user.getBalance() << endl;
            break;

        case 2: {
            double amount;
            cout << "Enter amount to deposit: ";
            cin >> amount;
            user.deposit(amount);
            break;
        }

        case 3: {
            double amount;
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            user.withdraw(amount);
            break;
        }

        case 4:
            user.displayAccount();
            break;

        case 5:
            cout << "Thank you for using ATM System!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}
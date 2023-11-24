#include <iostream>
#include <string>
using namespace std;

class Bank_Account {
private:
    string Depositor_Name;
    string Acc_No;
    string Acc_type;
    double Balance;

public:
    // Constructor to initialize the account
    Bank_Account(string name, string accNo, string accType, double balance) {
        Depositor_Name = name;
        Acc_No = accNo;
        Acc_type = accType;
        Balance = balance;
    }

    // Member function to deposit money into the account
    void deposit(double amount) {
        if (amount > 0) {
            Balance += amount;
            cout << "Deposit of " << amount << " rupee is successful." << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Member function to withdraw money from the account
    void withdraw(double amount) {
        if (amount > 0 && amount <= Balance) {
            Balance -= amount;
            cout << "Withdrawal of " << amount << " rupee is successful." << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient balance." << endl;
        }
    }

    // Member function to inquire about the account balance
    void balance_inquiry() {
        cout << "Account Holder: " << Depositor_Name << endl;
        cout << "Account Number: " << Acc_No << endl;
        cout << "Account Type: " << Acc_type << endl;
        cout << "Current Balance: $" << Balance << endl;
    }
};

int main() {
    // Create a Bank_Account object
    Bank_Account account("Hariom", "327400152697", "Savings", 5000.0);

    // Demonstrate account operations
    account.balance_inquiry();
    account.deposit(500.0);
    account.withdraw(1000.0);
    account.balance_inquiry();

    return 0;
}

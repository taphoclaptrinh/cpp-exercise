#include <iostream>
#include <string>
using namespace std;

class Account {
private:
    string accountNumber;
    double balance;
    string ownerName;

public:
    // Constructor
    Account(string accNumber, string owner, double initialBalance) {
        accountNumber = accNumber;
        ownerName = owner;
        balance = initialBalance;
    }

    // Getter for balance
    double getBalance() const {
        return balance;
    }

    // Getter for owner name
    string getOwnerName() const {
        return ownerName;
    }

    // Deposit method
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Withdraw method
    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdraw amount!" << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else if (balance - amount < 100.0) {
            cout << "You must keep at least 100.000 in your account" << endl;
        } else {
            balance -= amount;
            cout << "Withdrew: " << amount << endl;
        }
    }

    // Display account info
    void displayBalance() const {
        cout << "Account Owner: " << ownerName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    // Khởi tạo tài khoản với constructor
    Account acc1("123456789", "Alice", 1000.0);

    acc1.displayBalance();

    acc1.deposit(500);
    acc1.displayBalance();

    acc1.withdraw(200);
    acc1.displayBalance();

    acc1.withdraw(1500); // Quá số dư và dưới giới hạn
    acc1.displayBalance();

    return 0;
}

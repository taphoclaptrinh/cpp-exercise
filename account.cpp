#include<bits/stdc++.h>
using namespace std;

class Account {
public:
    string accountNumber;
    double balance;
    string ownerName;

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else if (balance - amount < 100) { // Kiểm tra số dư tối thiểu
            cout << "You must keep at least 100.000 in your account" << endl;
        } else {
            balance -= amount;
            cout << "Withdrew: " << amount << endl;
        }
    }

    void displayBalance() {
        cout << "Account Owner: " << ownerName << endl;
        cout << "Current balance: " << balance << endl;
    }
};

int main() {
    Account acc1;
    acc1.accountNumber = "123456789";
    acc1.balance = 1000.0;
    acc1.ownerName = "Alice"; // Đặt tên chủ tài khoản

    acc1.displayBalance();

    acc1.deposit(500);
    acc1.displayBalance();

    acc1.withdraw(200);
    acc1.displayBalance();
    
    acc1.withdraw(1500); // Rút tiền sẽ không cho phép nếu số dư còn lại dưới 100.000
    acc1.displayBalance();

    return 0;
}

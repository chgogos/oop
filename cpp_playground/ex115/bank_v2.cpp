#include <iostream>
using namespace std;

class BankAccount {
public:
  int accountNumber;
  double balance;

  void deposit(double amount) {
    balance += amount;
    cout << "Deposited " << amount << ", balance = " << balance << endl;
  }

  void withdraw(double amount) {
    if (amount > balance) {
      cout << "Insufficient funds." << endl;
    } else {
      balance -= amount;
      cout << "Withdrew " << amount << ", balance = " << balance << endl;
    }
  }

  void displayAccount() {
    cout << "Account Number = " << accountNumber << ", "
         << "balance = " << balance << endl;
  }
};

int main() {
  BankAccount acc;
  acc.accountNumber = 123456;
  acc.balance = 1000.0;
  acc.displayAccount();
  acc.deposit(500.0);
  acc.withdraw(200.0);
  acc.displayAccount();
  return 0;
}

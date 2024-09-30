#include <iostream>
using namespace std;

class BankAccount {
private:
  int accountNumber;
  double balance;

public:
  BankAccount(int accNumber, double initialBalance) {
    accountNumber = accNumber;
    balance = initialBalance;
  }

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

  void displayAccount() const {
    cout << "Account Number = " << accountNumber << ", "
         << "balance = " << balance << endl;
  }
};

int main() {
  BankAccount acc(123456, 1000.0);
  acc.displayAccount();
  acc.deposit(500.0);
  acc.withdraw(200.0);
  acc.displayAccount();
  return 0;
}

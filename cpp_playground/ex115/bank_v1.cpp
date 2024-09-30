#include <iostream>
using namespace std;

class BankAccount {
public:
  int accountNumber;
  double balance;
};

void deposit(BankAccount &acc, double amount) {
  acc.balance += amount;
  cout << "Deposited " << amount << ", balance = " << acc.balance << endl;
}

void withdraw(BankAccount &acc, double amount) {
  if (amount > acc.balance) {
    cout << "Insufficient funds." << endl;
  } else {
    acc.balance -= amount;
    cout << "Withdrew " << amount << ", balance = " << acc.balance << endl;
  }
}

void displayAccount(BankAccount &acc) {
  cout << "Account Number = " << acc.accountNumber << ", "
       << "balance = " << acc.balance << endl;
}

int main() {
  BankAccount acc;
  acc.accountNumber = 123456;
  acc.balance = 1000.0;
  displayAccount(acc);
  deposit(acc, 500.0);
  withdraw(acc, 200.0);
  displayAccount(acc);
  return 0;
}

#include <iostream>

class account {
 private:
  std::string name;
  double balance;

 public:
  account(std::string n) : name(n), balance(0) {}
  double get_balance() { return balance; }
  void deposit(double amount) { balance += amount; }

  bool withdraw(double amount) {
    if (amount > balance) {
      return false;
    } else {
      balance -= amount;
      return true;
    }
  }

  void info() {
    std::cout << "Owner: " << name << " balance: " << balance << std::endl;
  }
};

int main() {
  account acc("nikos");
  acc.deposit(200.0);
  acc.deposit(300.0);
  acc.withdraw(50.0);
  acc.info();
  return 0;
}
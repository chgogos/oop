#include <iostream>
#include <sstream>
#include <string>

enum class ACCOUNT_TYPE { CHECKING, SAVINGS, MONEY_MARKET };

class account {
private:
  std::string owner;
  double balance;
  ACCOUNT_TYPE type;

public:
  static int nr_of_accounts;

  // default constructor
  account() : owner("Noname"), balance(0.0), type(ACCOUNT_TYPE::CHECKING) {
    account::nr_of_accounts++;
  }

  account(std::string s, double b, ACCOUNT_TYPE at)
      : owner(s), balance(b), type(at) {
    account::nr_of_accounts++;
  }

  // copy constructor
  account(account &other) : owner(other.owner), balance(0.0), type(other.type) {
    account::nr_of_accounts++;
  }

  std::string get_owner() { return owner; }

  void set_owner(std::string owner_name) { owner = owner_name; }

  double get_balance() { return balance; }

  void set_balance(double b) { this->balance = b; }

  void deposit(double amount) { balance += amount; }

  double withdrawal(double amount) {
    if (amount <= balance) {
      balance -= amount;
      return amount;
    } else {
      double temp = balance;
      balance = 0.0;
      return temp;
    }
  }

  bool operator<(const account &other) const {
    return this->balance < other.balance;
  }

  operator std::string() const {
    std::stringstream ss;
    ss << owner << " - " << balance << " - ";
    if (type == ACCOUNT_TYPE::CHECKING) {
      ss << "checking";
    } else if (type == ACCOUNT_TYPE::SAVINGS) {
      ss << "savings";
    } else {
      ss << "money market";
    }
    return ss.str();
  }
};

int account::nr_of_accounts = 0;

int main() {
  account acc1; // κλήση default constructor
  account acc2("Ken Lay", 100000.0, ACCOUNT_TYPE::MONEY_MARKET);
  account acc3 = acc2; // κλήση copy constructor
  std::cout << "Number of accounts " << account::nr_of_accounts << std::endl;
  double a;
  std::cout << "Input amount to withdraw from account " << (std::string)acc2
            << " ";
  std::cin >> a;
  a = acc2.withdrawal(a);
  acc3.deposit(a * 0.8);
  acc1.deposit(a * 0.2);
  if (acc2 < acc3) {
    std::cout << (std::string)acc2 << std::endl;
  } else if (acc3 < acc2) {
    std::cout << (std::string)acc3 << std::endl;
  }

  return 0;
}

#include <iostream>
using namespace std;

class Customer {
private:
  string name;
  double balance;

public:
  Customer(string n, double b) : name(n), balance(b) {}
  bool operator<(const Customer &other) const{
      return balance < other.balance;
  }
  friend ostream &operator<<(ostream &os, const Customer &c) {
    os << c.name << " (" << c.balance << ")";
    return os;
  }
};

int main() {
  Customer c1("Nikos", 100);
  Customer c2("Maria", 120);
  if (c1 < c2) {
    cout << "O Nikos exei ligotera xrimata" << endl;
  }
  cout << c1 << endl;
}
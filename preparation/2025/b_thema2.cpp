#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Product {
 protected:
  string name;
  double price;

 public:
  Product(const string& n, double p) : name(n), price(p) {}

  virtual ~Product() {}

  virtual double get_final_price() const { return price; }

  friend ostream& operator<<(ostream& os, const Product& p) {
    os << p.name << " (initial price: " << p.price
       << " final price: " << p.get_final_price() << ")";
    return os;
  }
};

class Book : public Product {
 public:
  Book(const string& n, double p) : Product(n, p) {}

  double get_final_price() const override { return price * 0.90; }

};

class Electronic : public Product {
 public:
  Electronic(const string& n, double p) : Product(n, p) {}

  double get_final_price() const override { return price * 1.24; }

};

int main() {
  vector<Product*> v;

  v.push_back(new Product("Generic Item", 100.0));
  v.push_back(new Book("C++ Primer", 50.0));
  v.push_back(new Electronic("Laptop", 1000.0));

  sort(v.begin(), v.end());

  for (auto p : v) cout << *p << endl;

  for (auto p : v) delete p;

  return 0;
}

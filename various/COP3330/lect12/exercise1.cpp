#include <iostream>
using namespace std;

class Distance {
  double meters;

 public:
  Distance() : meters(0) { cout << "Distance() called" << endl; }

  Distance(int m) : meters(m) { cout << "Distance(int) called" << endl; }

  Distance(double km) : meters(km * 1000.0) {
    cout << "Distance(double) called" << endl;
  }

  Distance(const Distance& other) : meters(other.meters) {
    cout << "Distance(const Distance&) called" << endl;
  }

  Distance& operator=(const Distance& other) {
    cout << "operator= called" << endl;
    meters = other.meters;
    return *this;
  }

  friend ostream& operator<<(ostream& os, const Distance& other) {
    os << "Distance: " << other.meters << "m";
    return os;
  }
};

int main() {
  Distance d1;        // Distance() called
  Distance d2(250);   // Distance(int) called
  Distance d3 = 300;  // Distance(int) called
  Distance d4(2.5);   // Distance(double) called
  Distance d5 = 7.8;  // Distance(double) called
  Distance d6(d1);    // Distance(const Distance&) called
  Distance d7 = d2;   // Distance(const Distance&) called
  d1 = d3;            // operator= called
  for (const Distance *d : {&d1, &d2, &d3, &d4, &d5, &d6, &d7}) {
    cout << *d << endl;
  }
  return 0;
}
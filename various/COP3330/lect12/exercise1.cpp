#include <iostream>
using namespace std;

class Distance {
  double meters;

 public:
  Distance() : meters(0) {} // 1

  Distance(int m) : meters(m) {} // 2

  Distance(double km) : meters(km * 1000.0) {} // 3

  Distance(const Distance& other) : meters(other.meters) {} // 4

  // 5
  Distance& operator=(const Distance& other) {
    meters = other.meters;
    return *this;
  }

  void print() const { cout << meters << " meters\n"; }
};

int main() {
  Distance d1;          // 1
  Distance d2 = 300;    // 2 
  Distance d3(250);     // 2
  Distance d4 = d2;     // 4
  Distance d5 = 0.5;    // 3
  d1 = d3;              // 5
  d1.print(); // 250 meters
  d2.print(); // 300 meters
  d3.print(); // 250 meters
  d4.print(); // 300 meters
  d5.print(); // 500 meters
  return 0;
}
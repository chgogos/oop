#include <iostream>

using namespace std;

class Vehicle {
public:
  Vehicle() {
    cout<<"Vehicle Constructor\n";
  }

  ~Vehicle() {
    cout<<"Vehicle Destructor\n";
  }
};

class Car : Vehicle {
public:
  Car() {
    cout<<"Car Constructor\n";
  }

  ~Car() {
    cout<<"Car Destructor\n";
  }
};

class Accord : Car {
public:
  Accord() {
    cout<<"Accord Constructor\n";
  }

  ~Accord() {
    cout<<"Accord Destructor\n";
  }
};

void foo() {
  Vehicle V;
  cout<<"stuff\n";
}

void bar() {
  Car C;
  cout<<"stuff\n";
}

void foobar() {
  Accord A;
  cout<<"stuff\n";
}

int main() {

  foo();
  cout<<"\n\n*******\n\n";
  bar();
  cout<<"\n\n*******\n\n";
  foobar();

  return 0;
}

/*
Vehicle Constructor
stuff
Vehicle Destructor


*******

Vehicle Constructor
Car Constructor
stuff
Car Destructor
Vehicle Destructor


*******

Vehicle Constructor
Car Constructor
Accord Constructor
stuff
Accord Destructor
Car Destructor
Vehicle Destructor
*/

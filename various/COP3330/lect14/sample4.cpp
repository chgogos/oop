#include <iostream>

using namespace std;

class Vehicle {
public:
  Vehicle(const char * color) {
    cout<<"Vehicle Constructor -- "<<color<<" \n";
  }

  ~Vehicle() {
    cout<<"Vehicle Destructor\n";
  }
};

class Car : Vehicle {
public:
  Car(bool hatch_back, const char *color) : Vehicle(color) {
    cout<<"Car Constructor -- hatch_back = "<<hatch_back<<" \n";
  }

  ~Car() {
    cout<<"Car Destructor\n";
  }
};

class Accord : Car {
public:
  Accord(const char* trim, bool hatch_back, const char* color) : Car(hatch_back, color) {
    cout<<"Accord Constructor -- "<<trim<<" \n";
  }

  ~Accord() {
    cout<<"Accord Destructor\n";
  }
};

void foo() {
  Vehicle V("Red");
  cout<<"stuff\n";
}

void bar() {
  Car C(true, "Blue");
  cout<<"stuff\n";
}

void foobar() {
  Accord A("LX", false, "Neon Yellow");
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
Vehicle Constructor -- Red 
stuff
Vehicle Destructor


*******

Vehicle Constructor -- Blue
Car Constructor -- hatch_back = 1
stuff
Car Destructor
Vehicle Destructor


*******

Vehicle Constructor -- Neon Yellow
Car Constructor -- hatch_back = 0
Accord Constructor -- LX
stuff
Accord Destructor
Car Destructor
Vehicle Destructor
*/
  

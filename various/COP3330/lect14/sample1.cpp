#include <iostream>

using namespace std;

class Mammal {
 public:
  void PrintInfo() const;
};

void Mammal::PrintInfo() const {
  cout << "I am warm-blooded and breath air!\n";
}

class Cow : public Mammal { /* a cow 'is a' mammal */
 public:
  void Sound() const;
};

void Cow::Sound() const { cout << "The cow goes Moooooo!\n"; }

class Pig : public Mammal { /* a pig 'is a' mammal */
 public:
  void Sound() const;
};

void Pig::Sound() const { cout << "The pig goes Oink!\n"; }

void mammal_info(const Mammal& M) {
  cout << "Here is some interesting information on this mammal:\n";
  M.PrintInfo();
}

int main() {
  Mammal M;
  Cow C;
  Pig P;

  mammal_info(M);

  cout << "\n\n*******\n\n";

  mammal_info(C);
  C.Sound();

  cout << "\n\n*******\n\n";

  mammal_info(P);
  P.Sound();

  return 0;
}

/*
Here is some interesting information on this mammal:
I am warm-blooded and breath air!


*******

Here is some interesting information on this mammal:
I am warm-blooded and breath air!
The cow goes Moooooo!


*******

Here is some interesting information on this mammal:
I am warm-blooded and breath air!
The pig goes Oink!
*/
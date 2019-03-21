#include <iostream>

class Base
{
public:
  int x;
};

class Derived : public Base
{
public:
  int y;
};

int main()
{
  Base a;
  a.x = 10;
  Derived b;
  b.x = 20;
  b.y = 30;
  Base *p = &a;
  std::cout << "#1>>> " << p->x << std::endl;

  // upcasting (μετατροπή δείκτη μιας κληρονομούμενης κλάσης στη κλάση γονέα)
  p = &b;
  std::cout << "#2>>> " << p->x << std::endl;
  // std::cout <<  p->x << " " << p->y << std::endl; // error: no member named 'y' in 'Base'

  // downcasting (μετατροπή δείκτη στην κλάση γονέα σε δείκτη κληρονομούμενης κλάσης)
  // Derived *q=&a; // error: cannot initialize a variable of type 'Derived *' with an rvalue of type 'Base *'
  Derived *q = (Derived *)&a; // επικίνδυνο
  std::cout << "#3>>> " << q->x << std::endl;
  std::cout << "#4>>> " << q->y << std::endl; // επικίνδυνο 
  return 0;
}

#include <iostream>

class Base1
{
protected:
  int a;
  int x;

public:
  Base1(int a = 0) : a(a)
  {
    x = 1;
    std::cout << "Base1::Base1(int) constructor called" << std::endl;
  }
  void fun1()
  {
    std::cout << "Base1::fun1 called" << std::endl;
  }
  void fun()
  {
    std::cout << "Base1::fun called" << std::endl;
  }
};

class Base2
{
protected:
  int b;
  int x;

public:
  Base2(int b = 0) : b(b)
  {
    x = 2;
    std::cout << "Base2::Base2(int) constructor called" << std::endl;
  }

  void fun2()
  {
    std::cout << "Base2::fun2 called" << std::endl;
  }

  void fun()
  {
    std::cout << "Base2::fun called" << std::endl;
  }
};

class Derived : public Base1, public Base2
{
private:
  int c;

public:
  // o constructor Base1(int) καλείται σαφώς (explicitly)
  // o constructor Base2() καλείται εμμέσως (implicitly)
  Derived(int a = 0, int b = 0, int c = 0) : Base1(a), c(c)
  {
    std::cout << "Derived::Derived(int,int,int) constructor called" << std::endl;
  }

  // override Base::fun1
  void fun1()
  {
    std::cout << "Base::fun1 called" << std::endl;
  }

  void fun3()
  {
    std::cout << "Derived::fun3 called" << std::endl;
    a++;
    b++;
    Base1::x++;
    Base2::x++;
    c++;
  }

  // overload Derived::fun3
  void fun3(int y)
  {
    std::cout << "Derived::fun3(int) called" << std::endl;
    a += y;
    b += y;
    Base1::x += y;
    Base2::x += y;
    c += y;
  }

  void print_data_members()
  {
    std::cout << "Base1::a=" << a << std::endl;
    std::cout << "Base1::x=" << Base1::x << std::endl;
    std::cout << "Base2::b=" << b << std::endl;
    std::cout << "Base2::x=" << Base2::x << std::endl;
    std::cout << "Derived::c=" << c << std::endl;
  }

  // λόγω του ότι υπάρχει σύγκρουση στις Base1, Base2 για τη συνάρτηση μέλους fun
  // θα πρέπει να οριστεί ποια από τις 2 συναρτήσεις θα χρησιμοποιείται στην Derived
  // με την ακόλουθη δήλωση, ορίζεται ότι θα χρησιμοποιηθεί η έκδοση της συνάρτησης στην Base1
  using Base1::fun;
};

int main()
{
  Derived obj;
  obj.fun1();  // κλήση συνάρτησης μέλους που έχει επαναοριστεί (override) στην Derived
  obj.fun2();  // κλήση συνάρτησης μέλους που έχει κληρονομηθεί από την Base1
  obj.fun3();  // κλήση overloaded συνάρτησης μέλους
  obj.fun3(2); // κλήση overloaded συνάρτησης μέλους
  obj.fun();   // κλήση συνάρτησης που έχει οριστεί στην Base1 και Base2 (επιλογή του Base1)
  obj.print_data_members();
  return 0;
}

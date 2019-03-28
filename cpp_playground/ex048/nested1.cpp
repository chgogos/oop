#include <iostream>

class A
{
  private:
    int x1;

  public:
    // η κλάση Β είναι εμφωλιασμένη μέσα στην κλάση Α
    class B
    {
      private:
        int x2;

      public:
        int x3;
    };

    void fun1()
    {
        x1 = 1;
        B obj;
        // obj.x2 = 1; // NOT OK
        obj.x3 = 1; // OK
        std::cout << x1 << " " << obj.x3 << std::endl;
    }
};

int main()
{
    A a;
    a.fun1();
    A::B b;   // OK η κλάση B ορίζεται στο public τμήμα της κλάσης A
    b.x3 = 3; // OK
    std::cout << b.x3 << std::endl;
}

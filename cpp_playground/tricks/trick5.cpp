#include <iostream>

class A
{
  public:
    // δεν μπορεί να χρησιμοποιηθεί ο default constructor
    A() = delete;
};

class B
{
  public:
    // δεν μπορεί να χρησιμοποιηθεί ο τελεστής new
    void *operator new(std::size_t) = delete;
};

int main()
{
    A obj1;         // the default constructor of "MyClass" cannot be referenced -- it is a deleted function
    B *p = new B(); // function "B::operator new(std::size_t)" cannot be referenced -- it is a deleted function

    return 0;
}

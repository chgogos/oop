#include <iostream>

class MyClass
{
  private:
    int a;

  public:
    // ο μετγλωττιστής θα προσπαθήσει να κάνει inline τη συνάρτηση fun1
    // καθώς η συνάρτηση αυτή έχει οριστεί μέσα στην κλάση
    void fun1()
    {
        std::cout << "MyClass::fun1" << std::endl;
    }
    void fun2();
};

void MyClass::fun2()
{
    std::cout << "MyClass::fun2" << std::endl;
}

int main()
{
    MyClass obj;
    obj.fun1();
    obj.fun2();

    return 0;
}

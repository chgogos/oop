#include <iostream>

class Base
{
  protected:
    int *px;

  public:
    Base(int x) : px(new int(x)) {
         std::cout << "Base() called" << std::endl;
    }
    ~Base()
    {
        std::cout << "~Base() called" << std::endl;
        delete px;
    }
    virtual void print()
    {
        std::cout << "Base::print() " << *px << std::endl;
    }
};

class Derived : public Base
{
    int *py;

  public:
    Derived(int x, int y) : Base(x), py(new int(y))
    {
        std::cout << "Derived() called" << std::endl;
    }

    // αν ο destructor της Base δεν δηλωθεί ως virtual τότε ο ~Derived() δεν καλείται ποτέ
    ~Derived()
    {
        std::cout << "~Derived() called" << std::endl;
        delete py;
    }
    void print()
    {
        std::cout << "Derived::print() " << *px << " " << *py << std::endl;
    }
};

int main()
{
    Base *p1 = new Base(5);
    Base *p2 = new Derived(5, 7);
    p1->print();
    p2->print();
    delete p1;
    delete p2;
    return 0;
}

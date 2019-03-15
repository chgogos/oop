#include <iostream>

class MyClass
{
  private:
    double x;

  public:
    MyClass(double v) : x(v) {}
    inline void square()
    {
        x = x * x;
    }
    double get_x()
    {
        return x;
    }
};

inline void cube(double v)
{
    std::cout << "calling inline function " << v * v * v << std::endl;
}

int main()
{
    MyClass obj(5.2);
    obj.square();
    std::cout << "calling inline member function " << obj.get_x() << std::endl;
    cube(5.1);
    return 0;
}
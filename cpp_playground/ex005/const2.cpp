#include <iostream>

class MyClass
{
  private:
    int x;

  public:
    void fun1() const {
        std::cout << "test" << std::endl;
    }
    void mutate()
    {
        x++;
    }
};

void fun(const MyClass &obj){
    obj.fun1();
    // obj.mutate(); // error: 'this' argument to member function 'mutate' has type 'const MyClass', but function is not marked const
}

int main()
{
    MyClass obj;
    fun(obj);

    return 0;
}

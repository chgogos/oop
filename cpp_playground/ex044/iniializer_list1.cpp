#include <iostream>
#include <vector>

class MyClass
{
  private:
    std::vector<std::string> v_;

  public:
    // constructor with an initializer list as parameter
    MyClass(const std::initializer_list<const char *> v)
    {
        v_.insert(begin(v_), begin(v), end(v));
    }

    void print()
    {
        for (std::string x : v_)
        {
            std::cout << x << " ";
        }
        std::cout << std::endl;
    }
};

int main()
{
    MyClass obj1{"This", "is", "a", "text"}; // braced init list
    obj1.print();
    MyClass obj2 = {"This", "is", "another", "text"};
    obj2.print();
    return 0;
}
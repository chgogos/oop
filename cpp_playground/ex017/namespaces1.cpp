#include <iostream>

int data1 = 10;
namespace NS1
{
int data1 = 20;
namespace NNS
{
int data2 = 30;
int func(int x)
{
    return x * 2;
}
class MyClass
{
  private:
    int a;

  public:
    MyClass(int a) : a(a) {}
    void print()
    {
        std::cout << a << std::endl;
    }
};
} // namespace NNS
} // namespace NS1

int main()
{
    std::cout << "CHECKPOINT 1" << std::endl;
    std::cout << data1 << std::endl;
    std::cout << NS1::data1 << std::endl;
    std::cout << NS1::NNS::data2 << std::endl;
    std::cout << NS1::NNS::func(5) << std::endl;
    NS1::NNS::MyClass c(40);
    c.print();
    {
        std::cout << "CHECKPOINT 2" << std::endl;
        using namespace NS1;
        std::cout << ::data1 << std::endl;
        std::cout << NS1::data1 << std::endl;
        std::cout << NNS::data2 << std::endl;
        std::cout << NNS::func(5) << std::endl;
        NNS::MyClass c(40);
        c.print();
    }
    {
        std::cout << "CHECKPOINT 3" << std::endl;
        using namespace std;
        cout << data1 << endl;
        cout << NS1::data1 << endl;
        cout << NS1::NNS::data2 << endl;
        cout << NS1::NNS::func(5) << endl;
        NS1::NNS::MyClass c(40);
        c.print();
    }
}

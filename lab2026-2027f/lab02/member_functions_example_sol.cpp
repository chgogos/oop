#include <iostream>

using namespace std;

class A
{
private:
    void fun(int a)
    {
        cout << a << endl;
    }
public:
    void delegate_to_fun(int a){
        fun(a);
    }
};

int main()
{
    A obj;
    // obj.fun(); // όχι διότι η συνάρτηση fun είναι private
    obj.delegate_to_fun(5);
}


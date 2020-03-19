#include <iostream>
#include <thread>
using namespace std;

void f()
{
    cout << "hello ";
}

struct F
{
    void operator()()
    {
        cout << "parallel world!";
    }
};

int main()
{
    thread t1(f);
    thread t2{F()};

    t1.join();
    t2.join();
}

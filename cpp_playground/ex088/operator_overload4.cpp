#include <iostream>
#include <string>
using namespace std;

struct pointer
{
    string *p;

    auto *operator->()
    {
        cout << "operator -> called" << endl;
        return p;
    }

    auto *operator->() const
    {
        cout << "operator -> const called" << endl;
        return p;
    }
};

int main()
{
    string s{"hello world"};
    pointer dumb_pointer{&s};
    const pointer dumb_pointer2{&s};
    cout << dumb_pointer->size() << '\n';
    cout << dumb_pointer2->size() << '\n';
}

/* 
operator -> called
11
operator -> const called
11
*/
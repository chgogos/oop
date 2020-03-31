// https://stackoverflow.com/questions/1282295/what-exactly-is-nullptr/1283623#1283623

#include <iostream>

using namespace std;

void fun(int c)
{
    cout << "A" << endl;
}

void fun(char *c)
{
    cout << "B" << endl;
}

int main()
{
    fun(0);
    // fun(NULL); // error: call to 'fun' is ambiguous
    fun(nullptr);
}

/* 
A
B
*/
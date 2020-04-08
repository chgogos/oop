#include <iostream>

using namespace std;

int main()
{
    char *CharPointer;
    CharPointer = new char;

    *CharPointer = 'A';
    cout << *CharPointer << "\n";
    
    delete CharPointer;
    return 0;
}

/*
A
*/
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    for (int i = 1; i < argc; i++)
        cout << argv[i];
}

/*
$ ./a.out 1 3.14 abc 
13.14abc
*/
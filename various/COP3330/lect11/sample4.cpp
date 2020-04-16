#include <iostream>

using namespace std;

int mystrlen(const char *str)
{
    if (*str == '\0')
    {
        return 0;
    }
    return 1 + mystrlen(str + 1);
}

main()
{
    char res[100];
    cout << "strlen of \"Hello World.\" is " << mystrlen("Hello World.") << endl;
}

/*
strlen of "Hello World." is 12
*/
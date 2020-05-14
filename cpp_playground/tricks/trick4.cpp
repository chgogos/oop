#include <iostream>
#include <cstring>

// χρήση του strlen για τον τερματισμό της επανάληψης
int main()
{
    const char *s = "This is a text";

    for (int i = 0; i < strlen(s); i++)
    {
        std::cout << s[i];
    }
    std::cout << std::endl;

    // without strlen
    for (int i = 0; s[i]; i++)
    {
        std::cout << s[i];
    }
    std::cout << std::endl;

    return 0;
}

/*
This is a text
This is a text
*/
#include <iostream>

// χρήση του const για τη διασφάλιση ότι μια συνάρτηση δεν αλλάζει ένα reference που δέχεται
void fun1(const int &x)
{
    std::cout << x << std::endl;
    // x++; // error: cannot assign to variable 'x' with const-qualified type 'const int &'
}

int main()
{
    int a=5;
    fun1(a);
    std::cout << a << std::endl;
    return 0;
}

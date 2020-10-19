#include <iostream>

int main()
{
    int x = 1;
    int &rx = x;
    // int &r; // references must be initialized on definition
    rx++;
    std::cout << x << " - " << rx << std::endl;
}

/*
2 - 2
*/
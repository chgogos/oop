#include <iostream>
#include <random>

int main()
{
    // ρήψη "ζαριού" 10 φορές 
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        std::cout << rand() % 6 + 1 << " ";
    }
    std::cout << std::endl;

    // ρήψη "ζαριού" 10 φορές (ίδιο αποτέλεσμα σε κάθε εκτέλεση)
    srand(123456L);
    for (int i = 0; i < 10; i++)
    {
        std::cout << rand() % 6 + 1 << " ";
    }
    std::cout << std::endl;

    return 0;
}

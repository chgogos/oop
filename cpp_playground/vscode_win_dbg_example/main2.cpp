#include <iostream>
#include <vector>

// η ύπαρξη της αναφοράς στο όρισμα της συνάρτησης αλλάζει το αποτέλεσμα
void fun(int &x)
{
    x = 2 * x;
}

int main()
{
    std::vector<int> v{1, 2, 3, 4, 5};
    int sum = 0;
    // η ύπαρξη της αναφοράς στο range for αλλάζει το αποτέλεσμα
    for (auto &x : v)
    {
        fun(x);
        sum += x;
    }
    std::cout << "The sum is = " << sum << std::endl;

    for (auto &x : v)
    {
        std::cout << x << " ";
    }

    std::cout << std::endl;
}
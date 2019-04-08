#include <iostream>
#include <utility> // std::swap

template <class T>
void swap(T a, T b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <class K>
struct node
{
    K data;
    struct node *node;
};

int main()
{
    int x = 5, y = 7;
    swap(x, y);
    std::cout << x << " " << y << std::endl;

    double w = 3.1, v = 7.3;
    swap(w, v);
    std::cout << w << " " << v << std::endl;

    std::swap(x, y);
    std::cout << x << " " << y << std::endl;


    return 0;
}

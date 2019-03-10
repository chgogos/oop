#include <iostream>

void func(int *p)
{
    (*p) += 10;
    std::cout << "3.  *p = " << *p << std::endl;
}

int main()
{
    const int x = 10;
    const int *px = &x;
    std::cout << "1.   x = " << x << std::endl;
    std::cout << "2. *px = " << x << std::endl;
    // func(px); // error: no matching function for call to 'func'
    func(const_cast<int *>(px));
    std::cout << "4.   x = " << x << std::endl;
    std::cout << "5. *px = " << x << std::endl;
    return 0;
}

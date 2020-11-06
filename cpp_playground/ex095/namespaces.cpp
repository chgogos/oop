#include <iostream>

namespace cbv
{
    void swap(int a, int b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
} // namespace cbv

namespace cbr
{
    void swap(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
} // namespace cbr

int main()
{
    int x = 1, y = 2;
    cbv::swap(x, y);
    std::cout << "x= " << x << " y= " << y << std::endl;
    cbr::swap(x, y);
    std::cout << "x= " << x << " y= " << y << std::endl;
}
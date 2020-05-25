#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v{1, 2, 3, 4, 5};
    try
    {
        for (int i = 0; i < 10; i++)
        {
            std::cout << v.at(i) << " ";
            // std::cout << v[i] << " "; // δεν κάνει throw exception
        }
        std::cout << std::endl;
    }
    catch (std::out_of_range &e)
    {
        std::cerr << "exception: " << e.what() << std::endl;
    }

    std::cout << "More things to do" << std::endl;
}

/*
1 2 3 4 5 exception: vector::_M_range_check: __n (which is 5) >= this->size() (which is 5)
More things to do
*/
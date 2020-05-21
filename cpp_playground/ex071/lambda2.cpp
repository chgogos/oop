#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> v{1, 2, 3, 4, 5};
    std::transform(std::begin(v), std::end(v), std::begin(v), [](int x) { return x * 3; });

    std::vector<int> v2;
    // διπλασιασμός κάθε τιμής του και προσθήκη στο v2
    std::transform(std::begin(v), std::end(v), std::back_inserter(v2), [](int x) { return x * 2; });

    for (int x : v)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    for (int x : v2)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}


/*
3 6 9 12 15 
6 12 18 24 30
*/
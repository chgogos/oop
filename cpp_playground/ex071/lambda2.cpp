#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> v{1, 2, 3, 4, 5};
    
    // διπλασιασμός κάθε τιμής και προσθήκη στο τέλος του vector
    std::transform(std::begin(v), std::end(v), std::back_inserter(v), [](int x) { return x * 2; });

    for (int x : v)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}

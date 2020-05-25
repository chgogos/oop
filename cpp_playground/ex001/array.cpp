#include <iostream>
#include <algorithm>
#include <iterator>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};

    // κλασσική διάσχιση πίνακα
    std::cout << "CLASSIC:         ";
    for (int i = 0; i < 5; i++)
    {
        std::cout << "a[" << i << "]=" << a[i] << " ";
    }
    std::cout << std::endl;

    // διάσχιση πίνακα χρησιμοποιώντας δείκτες
    std::cout << "USING POINTERS:  ";
    for (int *p = a, *end = a + 5; p != end; ++p)
    {
        int i = p - &a[0];
        // int i = p - a;
        std::cout << "a[" << i << "]=" << *p << " ";
    }
    std::cout << std::endl;

    // διάσχιση πίνακα με RANGE BASED FOR (c++11)
    std::cout << "RANGE BASED FOR: ";
    for (int &x : a)
    {
        int i = &x - &a[0];
        std::cout << "a[" << i << "]=" << x << " ";
    }
    std::cout << std::endl;

    // διάσχιση πίνακα με iterator
    std::cout << "ITERATORS:       ";
    for (int *p = std::begin(a); p != std::end(a); ++p)
    {
        auto i = std::distance(std::begin(a), p);
        std::cout << "a[" << i << "]=" << *p << " ";
    }
    std::cout << std::endl;

    // For_each
    std::cout << "FOR_EACH:        ";
    std::for_each(std::begin(a),
                  std::end(a),
                  [&a](int &x) { auto i = &x - &a[0]; std::cout << "a[" << i << "]=" << x << " "; });
    std::cout << std::endl;

    // copy 
    std::cout << "COPY:            ";
    std::copy(std::begin(a), std::end(a), std::ostream_iterator<int>(std::cout, " "));

    return 0;
}

/*
CLASSIC:         a[0]=1 a[1]=2 a[2]=3 a[3]=4 a[4]=5 
USING POINTERS:  a[0]=1 a[1]=2 a[2]=3 a[3]=4 a[4]=5
RANGE BASED FOR: a[0]=1 a[1]=2 a[2]=3 a[3]=4 a[4]=5
ITERATORS:       a[0]=1 a[1]=2 a[2]=3 a[3]=4 a[4]=5
FOR_EACH:        a[0]=1 a[1]=2 a[2]=3 a[3]=4 a[4]=5
COPY:        1 2 3 4 5
*/

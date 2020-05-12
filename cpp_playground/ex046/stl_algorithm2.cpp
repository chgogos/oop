#include <iostream>
#include <vector>
#include <algorithm>

bool compareOddEven(const int &a, const int &b)
{
    return (a % 2 == b % 2);
}

int main()
{
    std::vector<int> a{3, 6, 7, 1};
    std::vector<int> b{3, 6, 9, 1};

    bool isEqual = std::equal(std::begin(a), std::end(a), std::begin(b), std::end(b));
    if (isEqual)
    {
        std::cout << "EQUAL VECTORS" << std::endl;
    }
    else
    {
        std::cout << "UNEQUAL VECTORS" << std::endl;
    }

    // έλεγχος για το εάν τα διανύσματα περιέχουν άρτιες και περιττές τιμές στις ίδιες θέσεις
    bool isEvenOddEqual = std::equal(std::begin(a), std::end(a), std::begin(b), std::end(b), compareOddEven); // C++14
    if (isEvenOddEqual)
    {
        std::cout << "EQUAL VECTORS EVEN/ODD" << std::endl;
    }
    else
    {
        std::cout << "UNEQUAL VECTORS EVEN/ODD" << std::endl;
    }

    // έλεγχος για το εάν τα διανύσματα περιέχουν άρτιες και περιττές τιμές στις ίδιες θέσεις (με λάμδα συνάρτηση)
    isEvenOddEqual = std::equal(a.cbegin(), a.cend(), b.cbegin(), b.cend(), [](int a, int b) { return a % 2 == b % 2; }); // C++14
    if (isEvenOddEqual)
    {
        std::cout << "EQUAL VECTORS EVEN/ODD" << std::endl;
    }
    else
    {
        std::cout << "UNEQUAL VECTORS EVEN/ODD" << std::endl;
    }
}

/*
UNEQUAL VECTORS
EQUAL VECTORS EVEN/ODD
EQUAL VECTORS EVEN/ODD
*/
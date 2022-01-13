#include <iostream>
#include <array>

int main()
{
    std::cout << "array (example 1)" << std::endl;
    std::array<int, 5> array1;
    // εμφανίζει "σκουπίδια" καθώς δεν έχει αρχικοποιηθεί ο πίνακας
    for (size_t i = 0; i < array1.size(); i++)
    {
        std::cout << array1[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "array (example 2)" << std::endl;
    // δήλωση και αρχικοποίηση πίνακα 5 θέσεων
    // std::array array2{1, 2, 3, 4, 5};
    std::array<int, 5> array2{1, 2, 3, 4, 5}; // ισοδύναμο με το παραπάνω
    for (size_t i = 0; i < array2.size(); i++)
    {
        std::cout << array2[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "using range for" << std::endl;
    for (auto &x : array2)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    std::cout << "array (example 3)" << std::endl;
    // δήλωση και αρχικοποίηση πίνακα 5 θέσεων με μόνο 2 τιμές, συμπλήρωση των υπόλοιπων τιμών με μηδενικά
    std::array<int, 5> array3{1, 2};
    for (size_t i = 0; i < array3.size(); i++)
    {
        std::cout << array3[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "2D array (example 4)" << std::endl;
    // πίνακας 2 διαστάσεων (2Χ4)
    std::array<std::array<int, 4>, 2> array4{1, 2, 3, 4, 5, 6, 7, 8};
    for (size_t i = 0; i < array4.size(); i++)
    {
        for (size_t j = 0; j < array4[i].size(); j++)
        {
            std::cout << array4[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // εμφάνιση των στοιχείων του πίνακα 2 διαστάσεων χρησιμοποιώντας range for
    std::cout << "using range for" << std::endl;
    for (auto &row : array4)
    {
        for (auto &item : row)
        {
            std::cout << item << " ";
        }
        std::cout << std::endl;
    }
}

/*
array (example 1)     
0 0 4201051 0 4199744 
array (example 2)
1 2 3 4 5
using range for
1 2 3 4 5
array (example 3)
1 2 0 0 0
2D array (example 4)
1 2 3 4
5 6 7 8
using range for
1 2 3 4
5 6 7 8
*/
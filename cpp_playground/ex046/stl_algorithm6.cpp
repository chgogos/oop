#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>

// MODIFYING STL ALGORITHMS

int main()
{
    std::ostream_iterator<int> output(std::cout, " ");
    std::vector<int> v{1, 2, 3, 4, 5, 5, 5, 6, 7, 8, 9, 10};

    std::cout << "CHECKPOINT 1" << std::endl;
    std::copy(v.cbegin(), v.cend(), output);
    std::cout << std::endl;

    // transform
    std::transform(v.begin(), v.end(), v.begin(), [](int x){return x*2;}); // διπλασιασμός κάθε τιμής του v
    std::cout << "CHECKPOINT 1" << std::endl;
    std::copy(v.cbegin(), v.cend(), output);
    std::cout << std::endl;

    // copy

    // copy_backward

    // swap

    // swap_ranges

    // iter_swap

    // replace

    // fill
    std::fill(v.begin(), v.end(), 10); // γέμισε το vector με μηδενικά
    std::cout << "CHECKPOINT X" << std::endl;
    std::copy(v.cbegin(), v.cend(), output);
    std::cout << std::endl;

    // fill_n
    std::fill_n(v.begin(), 5, 0); // γέμισε τα 5 πρώτα στοιχεία του vector με μηδενικά
    std::cout << "CHECKPOINT X" << std::endl;
    std::copy(v.cbegin(), v.cend(), output);
    std::cout << std::endl;

    // generate
    int x = 0;
    auto gen = [&x]() { return x++; };
    std::generate(v.begin(), v.end(), gen); // συμπλήρωση vector με τιμές που επιστρέφει ένας generator
    std::cout << "CHECKPOINT X" << std::endl;
    std::copy(v.cbegin(), v.cend(), output);
    std::cout << std::endl;

    // generate_n
    x = 100;
    std::generate_n(v.begin(), 5, gen); // συμπλήρωση των 5 πρώτων στοιχείων ενός vector με τιμές που επιστρέφει ένας generator
    std::cout << "CHECKPOINT X" << std::endl;
    std::copy(v.cbegin(), v.cend(), output);
    std::cout << std::endl;

    // remove

    // remove_if

    // unique
    v.assign({1, 1, 1, 2, 2, 2, 3, 3, 4, 4, 4, 4}); // αφαίρεση διπλότυπων που βρίσκονται σε συνεχόμενες θέσεις
    auto it = std::unique(v.begin(), v.end());
    v.resize(it - v.begin());
    std::cout << "CHECKPOINT X" << std::endl;
    std::copy(v.cbegin(), v.cend(), output);
    std::cout << std::endl;

    // unique_copy

    // reverse

    // reverse_copy

    // rotate

    // partition

    // stable_partition
}

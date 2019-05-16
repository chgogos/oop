#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

// NON MODIFYING STL ALGORITHMS

int main()
{
    std::ostream_iterator<int> output(std::cout, " ");
    std::vector<int> v{1, 2, 3, 4, 5, 5, 5, 6, 7, 8, 9, 10};

    std::cout << "CHECKPOINT 1" << std::endl; 
    std::copy(v.cbegin(), v.cend(), output);
    std::cout << std::endl;

    // for_each
    std::cout << "CHECKPOINT 2" << std::endl;
    std::for_each(v.cbegin(), v.cend(), [](int x){std::cout << x+1 << " ";});
    std::cout << std::endl;

    // find

    // find_if

    // find_end

    // find_first_of

    // adjacent_find

    // count

    // count_if

    // mismatch

    // equal

    // search

    // search_n
}

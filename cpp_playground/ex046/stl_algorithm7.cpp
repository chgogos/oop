#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

// SORT STL ALGORITHMS

int main()
{
    std::ostream_iterator<int> output(std::cout, " ");
    std::vector<int> v{1, 2, 3, 4, 5, 5, 5, 6, 7, 8, 9, 10};

    std::cout << "CHECKPOINT 1" << std::endl; 
    std::copy(v.cbegin(), v.cend(), output);
    std::cout << std::endl;

    // random_shuffle

    // sort

    // stable_partition

    // lower_bound

    // upper_bound

    // equal_range

    // binary_search
}

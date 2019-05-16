#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

// MODIFYING STL ALGORITHMS

int main()
{
    std::ostream_iterator<int> output(std::cout, " ");
    std::vector<int> v{1, 2, 3, 4, 5, 5, 5, 6, 7, 8, 9, 10};

    std::cout << "CHECKPOINT 1" << std::endl; 
    std::copy(v.cbegin(), v.cend(), output);
    std::cout << std::endl;

    // transform

    // copy

    // copy_backward

    // swap

    // swap_ranges

    // iter_swap

    // replace

    // fill

    // fill_n

    // generate

    // generate_n

    // remove

    // remove_if

    // unique

    // unique_copy

    // reverse

    // reverse_copy

    // rotate

    // partition

    // stable_partition

}

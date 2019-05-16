#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

// MERGE STL ALGORITHMS

int main()
{
    std::ostream_iterator<int> output(std::cout, " ");
    std::vector<int> v{1, 2, 3, 4, 5, 5, 5, 6, 7, 8, 9, 10};

    std::cout << "CHECKPOINT 1" << std::endl; 
    std::copy(v.cbegin(), v.cend(), output);
    std::cout << std::endl;

    // merge

    // includes

    // min_element

    // max_element

    // inplace_merge

    // set_difference

    // set_intersection

    // set_symmetric_difference

    // set_union

    

}

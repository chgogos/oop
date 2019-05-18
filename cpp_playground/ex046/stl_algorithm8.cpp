#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>

// MERGE STL ALGORITHMS

int main()
{
    std::ostream_iterator<int> output(std::cout, " ");
    std::vector<int> v1{1, 2, 3, 4, 5, 5, 5, 6, 7, 8, 9, 10};
    std::vector<int> v2{1, 1, 1, 4, 5, 6, 7, 7, 7, 8, 8, 11};

    std::cout << "CHECKPOINT 1" << std::endl;
    std::copy(v1.cbegin(), v1.cend(), output);
    std::cout << std::endl;
    std::copy(v2.cbegin(), v2.cend(), output);
    std::cout << std::endl;

    // merge
    std::cout << "CHECKPOINT 2" << std::endl;
    std::vector<int> v3(v1.size() + v2.size());
    std::sort(v1.begin(), v1.end());
    std::sort(v2.begin(), v2.end());
    std::merge(v1.cbegin(), v1.cend(), v2.cbegin(), v2.cend(), v3.begin());
    std::copy(v3.cbegin(), v3.cend(), output);
    std::cout << std::endl;

    // includes
    std::cout << "CHECKPOINT 3" << std::endl;
    std::vector<int> v4{5, 5, 6, 7};
    if (std::includes(v1.begin(), v1.end(), v4.begin(), v4.end()))
    {
        std::cout << "subsequence found" << std::endl;
    }
    else
    {
        std::cout << "subsequence not found" << std::endl;
    }

    // min_element
    std::cout << "CHECKPOINT 4" << std::endl;
    auto it1 = std::min_element(v1.cbegin(), v1.cbegin() + 5);
    std::cout << "MIN = " << *it1 << " at position " <<  it1 - v1.cbegin() << std::endl;

    // max_element
    std::cout << "CHECKPOINT 4" << std::endl;
    auto it2 = std::max_element(v1.cbegin(), v1.cbegin() + 5);
    std::cout << "MAX = " << *it2 << " at position " <<  it2 - v1.cbegin() << std::endl;

    // inplace_merge

    // set_difference

    // set_intersection

    // set_symmetric_difference

    // set_union
}

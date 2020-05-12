#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

// HEAPSORT

int main()
{
    std::ostream_iterator<int> output(std::cout, " ");

    std::vector<int> v{34,23,21,45,12,7,19,20,22};
    std::cout << "CHECKPOINT 1" << std::endl;
    std::copy(v.cbegin(), v.cend(), output);
    std::cout << std::endl;

    // make_heap
    std::cout << "CHECKPOINT 2" << std::endl;
    std::make_heap(v.begin(), v.end());
    std::copy(v.cbegin(), v.cend(), output);
    std::cout << std::endl;

    // pop_heap
    std::cout << "CHECKPOINT 3" << std::endl;
    std::cout << "Maximum element: " << v.front() << std::endl;
    std::pop_heap(v.begin(), v.end());
    std::cout << "Maximum element: " << v.front() << std::endl;

    // is_heap
    std::cout << "CHECKPOINT 4" << std::endl;
    v.push_back(100);
    std::cout << std::boolalpha << std::is_heap(v.begin(), v.end()) << std::endl;

    std::cout << "CHECKPOINT 5" << std::endl;
    std::make_heap(v.begin(), v.end());
    std::cout << std::boolalpha << std::is_heap(v.begin(), v.end()) << std::endl;
    std::cout << "Maximum element: " << v.front() << std::endl;

    // sort_heap
    std::cout << "CHECKPOINT 6" << std::endl;
    std::sort_heap(v.begin(), v.end());
    std::copy(v.cbegin(), v.cend(), output);
    std::cout << std::endl;
    

}

/*
CHECKPOINT 1
34 23 21 45 12 7 19 20 22 
CHECKPOINT 2
45 34 21 23 12 7 19 20 22 
CHECKPOINT 3
Maximum element: 45
Maximum element: 34
CHECKPOINT 4
false
CHECKPOINT 5
true
Maximum element: 100
CHECKPOINT 6
7 12 19 20 21 22 23 34 45 100
*/
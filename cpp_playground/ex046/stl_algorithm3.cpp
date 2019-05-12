#include <iostream>
#include <algorithm>
#include <numeric> // accumulate
#include <vector>
#include <iterator> // ostream_iterator
#include <random>

int main()
{
    std::ostream_iterator<int> output(std::cout, " ");
    std::vector<int> v1(10); // vector 10 θέσεων
    std::vector<int> v2{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // γέμισε το v1 με 9
    std::fill(v1.begin(), v1.end(), 9);
    std::cout << "CHECKPOINT1" << std::endl;
    std::copy(v1.cbegin(), v1.cend(), output);

    // count
    v1[0] = 0;
    v1[1] = 0;
    std::cout << "\nCHECKPOINT2" << std::endl;
    std::cout << std::count(v1.cbegin(), v1.cend(), 9);

    // count_if
    std::cout << "\nCHECKPOINT3" << std::endl;
    std::cout << std::count_if(v1.cbegin(), v1.cend(), [](int x) { return x < 5; });

    // min_element
    std::cout << "\nCHECKPOINT4" << std::endl;
    std::cout << *std::min_element(v2.cbegin(), v2.cend()) << std::endl;

    // max_element
    std::cout << "\nCHECKPOINT5" << std::endl;
    std::cout << *std::max_element(v2.cbegin(), v2.cend()) << std::endl;

    // minmax_element
    std::cout << "\nCHECKPOINT6" << std::endl;
    auto r = std::minmax_element(v2.cbegin(), v2.cend());
    std::cout << *r.first << " " << *r.second;

    // accumulate
    std::cout << "\nCHECKPOINT7" << std::endl;
    std::cout << std::accumulate(v2.cbegin(), v2.cend(), 0);

    // for_each
    std::cout << "\nCHECKPOINT8" << std::endl;
    std::for_each(v2.cbegin(), v2.cend(), [](int x) { std::cout << x << " "; });

    // random_shuffle
    std::cout << "\nCHECKPOINT9" << std::endl;
    std::random_device rng;
    std::mt19937 urng(rng());
    std::shuffle(v2.begin(), v2.end(), urng);
    std::copy(v2.cbegin(), v2.cend(), output);

    // transform
    std::vector<int> v3(v2.size());
    std::cout << "\nCHECKPOINT10" << std::endl;
    std::transform(v2.cbegin(), v2.cend(), v3.begin(), [](int x) { return x * x; });
    std::copy(v3.cbegin(), v3.cend(), output);
    std::cout << std::endl;
    
    return 0;
}

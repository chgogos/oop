#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>

// SORT STL ALGORITHMS

int main()
{
    std::ostream_iterator<int> output(std::cout, " ");
    std::vector<int> v{1, 2, 3, 4, 5, 5, 5, 6, 7, 8, 9, 10};

    std::cout << "CHECKPOINT 1" << std::endl;
    std::copy(v.cbegin(), v.cend(), output);
    std::cout << std::endl;

    // random_shuffle
    std::cout << "CHECKPOINT 2" << std::endl;
    std::random_shuffle(v.begin(), v.end());
    std::copy(v.cbegin(), v.cend(), output);
    std::cout << std::endl;

    // sort
    std::cout << "CHECKPOINT 3" << std::endl;
    std::sort(v.begin(), v.end()); // αύξουσα ταξινόμηση
    // std::sort(v.begin(), v.end(), std::less<int>()); // ίδιο με το παραπάνω
    // std::sort(v.begin(), v.end(), std::greater<int>()); // φθίνουσα ταξινόμηση
    std::copy(v.cbegin(), v.cend(), output);
    std::cout << std::endl;

    // stable_partition
    std::cout << "CHECKPOINT 4" << std::endl;
    std::random_shuffle(v.begin(), v.end());
    std::copy(v.cbegin(), v.cend(), output);
    std::cout << std::endl;
    std::vector<int>::const_iterator it = std::stable_partition(v.begin(), v.end(), [](int x) { return x % 2 == 0; });
    std::copy(v.cbegin(), v.cend(), output);
    std::cout << std::endl;
    std::copy(v.cbegin(), it, output); // εμφάνιση των άρτιων τιμών
    std::cout << std::endl;
    std::copy(it + 1, v.cend(), output); // εμφάνιση των περιττών τιμών
    std::cout << std::endl;

    // lower_bound
    std::cout << "CHECKPOINT 5" << std::endl;
    std::sort(v.begin(), v.end());
    std::copy(v.cbegin(), v.cend(), output);
    std::cout << std::endl;
    auto it2 = std::lower_bound(v.begin(), v.end(), 5);
    std::cout << it2 - v.begin() << std::endl;

    // upper_bound
    std::cout << "CHECKPOINT 6" << std::endl;
    std::copy(v.cbegin(), v.cend(), output);
    std::cout << std::endl;
    auto it3 = std::upper_bound(v.begin(), v.end(), 5);
    std::cout << it3 - v.begin() << std::endl;

    // equal_range
    std::cout << "CHECKPOINT 7" << std::endl;
    std::copy(v.cbegin(), v.cend(), output);
    std::cout << std::endl;
    auto p = std::equal_range(v.begin(), v.end(), 5);
    std::cout << p.first - v.begin() << " " << p.second - v.begin() << std::endl;

    // binary_search
    std::cout << "CHECKPOINT 8" << std::endl;
    int key = 8;
    std::sort(v.begin(), v.end());
    if (std::binary_search(v.begin(), v.end(), key))
    {
        std::cout << "Key " << key << " found" << std::endl;
    }
    else
    {
        std::cout << "Key " << key << " not found" << std::endl;
    }

    return 0;
}

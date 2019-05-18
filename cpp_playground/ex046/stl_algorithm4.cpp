#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>

int main(){
    std::ostream_iterator<int> output(std::cout, " ");
    std::vector<int> v{11,22,13,14,22,5};

    // find
    std::cout << "CHECKPOINT 1" << std::endl;
    auto pos = find(v.cbegin(), v.cend(), 14);
    if (pos!=v.cend()){
        std::cout << "Found at " << (pos - v.cbegin()) << std::endl;
    } else {
        std::cout << "Not found" << std::endl;
    }

    // find_if
    std::cout << "CHECKPOINT 2" << std::endl;
    pos = find_if(v.cbegin(), v.cend(), [](int x){return x%2==0;});
    if (pos!=v.cend()){
        std::cout << "Found at " << (pos - v.cbegin()) << std::endl;
    } else {
        std::cout << "Not found" << std::endl;
    }

    // find_if_not
   std::cout << "CHECKPOINT 3" << std::endl;
    pos = find_if_not(v.cbegin(), v.cend(), [](int x){return x%2==0;});
    if (pos!=v.cend()){
        std::cout << "Found at " << (pos - v.cbegin()) << std::endl;
    } else {
        std::cout << "Not found" << std::endl;
    }

    // sort 
    std::cout << "CHECKPOINT 4" << std::endl;
    sort(v.begin(), v.end());
    std::copy(v.cbegin(), v.cend(), output);
    std::cout << std::endl;
    sort(v.begin(), v.end(), [](int a, int b){return a > b;}); // φθίνουσα σειρά
    std::copy(v.cbegin(), v.cend(), output);
    
    std::cout << "\nCHECKPOINT 5" << std::endl;
    std::list<int> l{7,13,2,1,8,9};
    l.sort();
    std::copy(l.cbegin(), l.cend(), output);
    std::cout << std::endl;
    l.sort([](int a, int b){return a>b;}); // φθίνουσα σειρά
    std::copy(l.cbegin(), l.cend(), output);

    // binary_search
    std::cout << "\nCHECKPOINT 6" << std::endl;
    sort(v.begin(), v.end());
    if (binary_search(v.begin(), v.end(), 22)){
        std::cout << "key found" << std::endl;
    } else {
        std::cout << "key not found" << std::endl;
    }

    // all_of
    std::cout << "CHECKPOINT 6" << std::endl;
    if (all_of(v.begin(), v.end(), [](int x){return x>0;})){
        std::cout << "all positives" << std::endl;
    } else {
        std::cout << "not all positives" << std::endl;
    }

    // any_of
    std::cout << "CHECKPOINT 7" << std::endl;
    if (any_of(v.begin(), v.end(), [](int x){return x%2==0;})){
        std::cout << "an even exists" << std::endl;
    } else {
        std::cout << "only odd numbers exist" << std::endl;
    }

    // none_of
    std::cout << "CHECKPOINT 8" << std::endl;
    if (none_of(v.begin(), v.end(), [](int x){return x<0;})){
        std::cout << "no negatives" << std::endl;
    } else {
        std::cout << "at least one negative exists" << std::endl;
    }

}
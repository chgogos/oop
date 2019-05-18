#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>

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
    std::for_each(v.cbegin(), v.cend(), [](int x) { std::cout << x - 1 << " "; });
    std::cout << std::endl;

    // find
    // εύρεση όλων των θέσεων της τιμής 5
    std::cout << "CHECKPOINT 3" << std::endl;
    int key = 5;
    auto it1 = std::find(v.cbegin(), v.cend(), key);
    while (it1 != v.cend())
    {
        std::cout << "Key " << key << " found at position: " << it1 - v.cbegin() << std::endl;
        it1 = std::find(it1 + 1, v.cend(), key);
    }

    // find_if
    // εύρεση όλων των θέσεων των άρτιων τιμών
    std::cout << "CHECKPOINT 4" << std::endl;
    auto it2 = v.cbegin();
    do
    {
        it2 = std::find_if(it2, v.cend(), [](int x) { return x % 2 == 0; });
        if (it2 != v.cend())
        {
            std::cout << "Key " << *it2 << " found at position: " << it2 - v.cbegin() << std::endl;
        }
        it2++;
    } while (it2 != v.cend());

    // find_end
    // εύρεση της τελευταίας θέσης εμφάνισης της υποακολουθίας {5,5}
    std::cout << "CHECKPOINT 5" << std::endl;
    std::vector<int> v2{5, 5};
    auto it3 = std::find_end(v.cbegin(), v.cend(), v2.cbegin(), v2.cend());
    std::cout << "Last occurence of {5,5} is at " << it3 - v.cbegin() << std::endl;

    // find_first_of
    // εύρεση της πρώτης θέσης εμφάνισης της υποακολουθίας {5,5}
    std::cout << "CHECKPOINT 6" << std::endl;
    auto it4 = std::find_first_of(v.cbegin(), v.cend(), v2.cbegin(), v2.cend());
    std::cout << "First occurence of {5,5} is at " << it4 - v.cbegin() << std::endl;

    // adjacent_find
    // εύρεση της πρώτης θέσης εμφάνισης δύο συνεχόμενα ίδιων τιμών
    std::cout << "CHECKPOINT 7" << std::endl;
    std::vector<int> v3{1, 3, 10, 2, 10, 10, 6, 7, 2};
    auto it5 = std::adjacent_find(v3.cbegin(), v3.cend());
    if (it5 != v3.cend())
    {
        std::cout << "Adjacent equal items exist at position: " << it5 - v3.cbegin() << std::endl;
    }
    else
    {
        std::cout << "Adjacent equal items not found" << std::endl;
    }

    // count
    // εύρεση του πλήθους των 'a'
    std::cout << "CHECKPOINT 8" << std::endl;
    std::vector<char> v4{'a', 'b', 'a', 'e', 'h', 'a', 'i'};
    std::ostream_iterator<char> output_c(std::cout, " ");
    std::copy(v4.cbegin(), v4.cend(), output_c);
    std::cout << "\nOccurences of 'a': " << std::count(v4.cbegin(), v4.cend(), 'a') << std::endl;

    // count_if
    // εύρεση του πλήθους των 'a' και 'e'
    std::cout << "CHECKPOINT 9" << std::endl;
    std::cout << "Occurences of 'a' and 'e' : " << std::count_if(v4.cbegin(), v4.cend(), [](char c) { return (c == 'a' || c == 'e'); }) << std::endl;

    // mismatch
    // εύρεση, ανάμεσα σε 2 vectors, του πρώτου στοιχείου κάθε vector στο οποίο διαφέρουν
    std::cout << "CHECKPOINT 10" << std::endl;
    std::vector<int> v5{1,2,3,4,5,6,7,8,9};
    std::vector<int> v6{1,2,3,4,4,6,7,8,9};
    std::copy(v5.cbegin(), v5.cend(), output);
    std::cout << std::endl;
    std::copy(v6.cbegin(), v6.cend(), output);
    auto it6 = std::mismatch(v5.cbegin(), v5.cend(), v6.cbegin());
    std:: cout << "First difference in v5: " << *it6.first << std::endl;
    std:: cout << "First difference in v6: " << *it6.second << std::endl;

    // equal
    // έλεγχος των πρώτων 4 στοιχείων του vector v5 για το εαν είναι ίσα με τα 4 πρώτα στοιχεία του vector v6 
    std::cout << "CHECKPOINT 11" << std::endl;
    if (std::equal(v5.cbegin(), v5.cbegin() + 4, v6.cbegin())){
        std::cout << "equal" << std::endl;
    } else {
        std::cout << "not equal" << std::endl;
    }

    // search
    // έλεγχος για το εαν οι τιμές {41,42,43} υπάρχουν σε συνεχόμενες θέσεις σε ένα vector
    std::cout << "CHECKPOINT 12" << std::endl;
    std::vector<int> v7{1,2,3,41,42,43,4,5,6,7,41,42,8};
    std::vector<int> v8{41,42,43};
    std::copy(v7.cbegin(), v7.cend(), output);
    std::cout << std::endl;
    std::copy(v8.cbegin(), v8.cend(), output);
    std::cout << std::endl;
    auto it7 = std::search(v7.cbegin(), v7.cend(), v8.cbegin(), v8.cend());
    if (it7!=v7.cend()){
        std::cout << "search succeeded, subsequence found at position: " << it7 - v7.cbegin() <<  std::endl;
    } else {
        std::cout << "search unsuccessful" << std::endl;
    }

    // search_n
    // έλεγχος για το εαν η τιμή 42 υπάρχει 3 συνεχόμενες φορές σε ένα vector
    std::cout << "CHECKPOINT 13" << std::endl;
    std::vector<int> v9{1,2,42,42,42,4,5,6,7,7,42,8};
    std::copy(v9.cbegin(), v9.cend(), output);
    std::cout << std::endl;
    int value = 42;
    int n = 3;
    auto it8 = std::search_n(v9.cbegin(), v9.cend(), n, value);
    if (it8!=v9.cend()){
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

}

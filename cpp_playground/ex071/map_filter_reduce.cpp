#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

void print(std::vector<int> v)
{
    std::for_each(std::begin(v), std::end(v), [](const int &x) { std::cout << x << " "; });
    std::cout << std::endl;
}

int main()
{
    std::vector<int> v(10);
    std::iota(std::begin(v), std::end(v), 0);
    print(v);

    // map
    std::transform(std::begin(v), std::end(v), std::begin(v), [](const int &x) { return x * 2; });
    print(v);

    // filter (τοποθετεί τα στοιχεία που συμφωμνούν με το φίλτρο στο τέλος του διανύσματος)
    auto iter1 = std::remove_if(std::begin(v), std::end(v), [](const int &x) { return (x < 5 || x > 15); });
    print(v);

    // διαγραφή στοιχείων που έχουν φιλτραριστεί
    v.erase(iter1, std::end(v));
    print(v);

    // reduce (άθροισμα στοιχείων)
    int sum = std::accumulate(std::begin(v), std::end(v), 0);
    std::cout << sum << std::endl;

    // reduce (εύρεση μέγιστου)
    int max = std::accumulate(std::begin(v), std::end(v), v[0],
                              [](const int &x, const int &y) { if (x>y) return x; else return y; });
    std::cout << max << std::endl;

    // reduce (εύρεση ελάχιστου)
    int min = std::accumulate(std::begin(v), std::end(v), v[0],
                              [](const int &x, const int &y) { return x < y ? x : y; });
    std::cout << min << std::endl;

    return 0;
}

/*
0 1 2 3 4 5 6 7 8 9      
0 2 4 6 8 10 12 14 16 18 
6 8 10 12 14 10 12 14 16 18
6 8 10 12 14
50
14
6
*/
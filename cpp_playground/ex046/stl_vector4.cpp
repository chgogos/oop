#include <iostream>
#include <vector>
#include <algorithm>
#include <random> // default_random_engine
#include <chrono> // chrono::system_clock
#include <ctime>  // time

using namespace std;

template <class T>
void print_vector(vector<T> v)
{
    static int NR = 1;
    cout << NR++ << ". ";
    for (T x : v)
        cout << x << " ";
    cout << endl;
}

int main()
{
    vector<int> v{4, 2, 5, 1, 8, 7, 5, 6};
    print_vector(v);

    // ταξινόμηση σε αύξουσα σειρά
    sort(v.begin(), v.end());
    // sort(v.begin(), v.end(), less{}); // εναλλακτικά
    print_vector(v);

    // ταξινόμηση σε φθίνουσα σειρά
    sort(v.begin(), v.end(), greater{});
    // sort(v.begin(), v.end(), greater<int>()); // εναλλακτικά
    print_vector(v);

    // shuffle
    // shuffle(v.begin(), v.end(), default_random_engine(time(0)));
    shuffle(v.begin(), v.end(), default_random_engine(random_device{}()));
    // shuffle(v.begin(), v.end(), default_random_engine(chrono::system_clock::now().time_since_epoch().count()));
    print_vector(v);

    sort(v.begin(), v.end(), [](int a, int b) { return a < b; });
    print_vector(v);

    sort(v.begin(), v.end(), [](int a, int b) {
        if (a % 2 == 0 && b % 2 == 1)
            return true;
        else if (a % 2 == 1 && b % 2 == 0)
            return false;
        else
            return a < b;
    });
    print_vector(v);
}

/*
1. 4 2 5 1 8 7 5 6 
2. 1 2 4 5 5 6 7 8
3. 8 7 6 5 5 4 2 1
4. 5 8 1 2 6 7 4 5
5. 1 2 4 5 5 6 7 8
6. 2 4 6 8 1 5 5 7
*/
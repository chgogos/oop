#include <iostream>
#include <vector>

using namespace std;

void print_vector(vector<int> v)
{
    for_each(begin(v), end(v), [](int x) { cout << x << " "; });
    cout << endl;
}

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    print_vector(v);

    partition(begin(v), end(v), [](int elem){return elem %2 ==0;});
    print_vector(v);

    v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    stable_partition(begin(v), end(v), [](int elem){return elem %2 ==0;});
    print_vector(v);


}

/*
1 2 3 4 5 6 7 8 9 10 
1 4 2 3 5 6 7 8 9 10 
*/
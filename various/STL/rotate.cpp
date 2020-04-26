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
    // 1,[2,3,4],5,6,7,8,9,10 --> 1,[4,2,3],5,6,7,8,9,10 
    rotate(begin(v)+1, begin(v) + 3, begin(v)+4);
    print_vector(v);

}

/*
1 2 3 4 5 6 7 8 9 10 
1 4 2 3 5 6 7 8 9 10 
*/
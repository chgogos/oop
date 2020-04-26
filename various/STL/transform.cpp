#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

void print_vector(vector<int> v)
{
    for_each(begin(v), end(v), [](int x) { cout << x << " "; });
    cout << endl;
}

int main()
{
    vector<int> v(10);
    iota(begin(v), end(v), 1);
    print_vector(v);

    // διπλασιασμός κάθε τιμής του διανύσματος
    transform(begin(v), end(v), begin(v), [](int elem){return elem*2;});
    print_vector(v);

    // pairwise transform
    vector<int> v1(10), v2(10), v3(10);
    iota(begin(v1), end(v1), 0);
    iota(begin(v2), end(v2), 1);
    transform(begin(v1), end(v1), begin(v2), begin(v3), [](int elem1, int elem2){return elem2 - elem1;});
    print_vector(v3);

}
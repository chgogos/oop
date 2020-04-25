#include <iostream>
#include <vector>

using namespace std;

void print_vector(vector<int> v){
    for_each(begin(v), end(v), [](int x){cout << x << " ";});
    cout << endl;
}

int main()
{
    vector<int> source{1, 2, 3, 4, 5};
    vector<int> v2(3);
    copy(begin(source), begin(source)+3, begin(v2));
    print_vector(v2);
}
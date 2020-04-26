#include <iostream>
#include <vector>

using namespace std;

void print_vector(vector<int> v)
{
    for_each(begin(v), end(v), [](int x) { cout << x << " "; });
    cout << endl;
}

int main(){
    vector<int> v{1,1,1,2,2,2,3,3,3,3,4,4,4,5,5,5,5};
    v.erase(unique(begin(v), end(v)), end(v));
    print_vector(v);
}

/*
1 2 3 4 5 
*/
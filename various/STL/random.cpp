#include <iostream>
#include <random>
#include <vector>
using namespace std;

void print_vector(vector<int> v){
    for(int x: v)
        cout << x << " ";
    cout << endl;
}

int main()
{
    random_device rd;
    mt19937 generator(rd());

    vector<int> v{0,1,2,3,4,5,6,7,8,9};
    shuffle(begin(v), end(v), generator);
    print_vector(v);
    return 0;
}


/*
9 1 5 0 6 2 4 7 8 3 
*/
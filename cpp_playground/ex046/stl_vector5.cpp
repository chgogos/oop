#include <iostream>
#include <vector>

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

    vector<int>::iterator itr= v.begin();
    // auto itr= v.begin(); // εναλλακτικά
    while(itr != v.end()){
        *itr *= 10;
        ++itr;
    }
    print_vector(v);


    vector<int>::reverse_iterator ritr= v.rbegin();
    // auto itr= v.rbegin(); // εναλλακτικά
    while(ritr != v.rend()){
        cout << *ritr << " ";
        ++ritr;
    }


}

/*
1. 4 2 5 1 8 7 5 6 
2. 40 20 50 10 80 70 50 60
60 50 70 80 10 50 20 40
*/
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
    vector<int> v(10, 0);
    print_vector(v);

    for (int i = 0; i < v.size(); i++)
    {
        v[i]++;
    }
    print_vector(v);

    for (int x : v)
    {
        x++;
    }
    print_vector(v);

    for (int &x : v)
    {
        x++;
    }
    print_vector(v);

    v.pop_back();
    v.push_back(5);
    print_vector(v);
   
}

/*
1. 0 0 0 0 0 0 0 0 0 0 
2. 1 1 1 1 1 1 1 1 1 1
3. 1 1 1 1 1 1 1 1 1 1
4. 2 2 2 2 2 2 2 2 2 2
5. 2 2 2 2 2 2 2 2 2 5
*/

/*
0 0 0 0 0 0 0 0 0 0 
1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1
2 2 2 2 2 2 2 2 2 2
2 2 2 2 2 2 2 2 2 5
*/
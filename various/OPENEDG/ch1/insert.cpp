#include <vector>
#include <iostream>

using namespace std;

template <class I>
void print (const I & start, const I & end)
{
    I it;
    for(it = start; it != end; ++it)
    {
        cout<< *it << " ";
    }
    cout<<endl;
}

int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    vector <int> v(a,a+10);

    vector<int>::iterator it = v.insert(v.begin()+5, 100);
    print(v.begin(), v.end());
    cout<<"Inserted element: "<<*it<<endl;
    cout <<"Size: "<<v.size()<<endl;
    
    vector <int> v2;
    v2.insert(v2.begin(), v.rbegin(), v.rend());
    print(v2.begin(), v2.end());

    vector <int> v3(v.begin(), v.begin()+5);
    v3.insert(v3.end(),3,100);

    print(v3.begin(), v3.end());

    return 0;
}

/*
1 2 3 4 5 100 6 7 8 9 10 
Inserted element: 100
Size: 11
10 9 8 7 6 100 5 4 3 2 1
1 2 3 4 5 100 100 100 
*/
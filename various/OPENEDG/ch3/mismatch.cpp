// 3.1.8

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <list>

using namespace std;

template<class T>
void print(const T & value) 
{
    cout<<value<<" ";
}

struct Compare
{

    bool operator()(const char &f, const char &s)
    {
        return tolower(f)==tolower(s);
    }
};

int main()
{
    int t1[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int t2[]={1, 2, 4, 6, 7, 3, 5, 9, 10, 8};

    vector <int> v1(t1, t1+10);
    list <int> l1(t2, t2+10);

    cout<<"v1: "; for_each(v1.begin(), v1.end(), print<int>); cout<<endl;
    cout<<"l1: "; for_each(l1.begin(), l1.end(), print<int>); cout<<endl;

    pair<vector<int>::iterator, list<int>::iterator> p1 = mismatch(v1.begin(), v1.end(), l1.begin());
    if (p1.first == v1.end() && p1.second == l1.end())
    {
        cout<<"Collections v1 i l1 are equal!\n";
    }
    else
    {
        cout<<"Collections v1 i l1 are NOT equal!\n";
        cout<<"Mismatch at position: "<<distance(v1.begin(), p1.first)<<endl;
        cout<<"First not matching element - v1: "<<*(p1.first)<<" l1: "<< *(p1.second)<<endl;
    }
    cout<<endl;

    char t3[]={'a','b', 'C', 'd', 'e', 'F','g', 'h', 'i', 'J'};
    char t4[]={'a','b', 'C', 'D', 'E', 'F','g', 'h', 'i', 'j'};

    vector <int> v2(t3, t3+10);
    list <int> l2(t4, t4+10);

    cout<<"v2: "; for_each(v2.begin(), v2.end(), print<int>); cout<<endl;
    cout<<"l2: "; for_each(l2.begin(), l2.end(), print<int>); cout<<endl;

    cout<<"Case sensitive comparison:\n";
    pair<vector<int>::iterator, list<int>::iterator> p2 = mismatch(v2.begin(), v2.end(), l2.begin());
    if (p2.first == v2.end() && p2.second == l2.end())
    {
        cout<<"Collections v2 i l2 are equal!\n";
    }
    else
    {
        cout<<"Collections v2 i l2 are NOT equal!\n";
        cout<<"Mismatch at position: "<<distance(v2.begin(), p2.first)<<endl;
        cout<<"First not matching element - v2: "<<*(p2.first)<<" l2: "<< *(p2.second)<<endl;
    }
    cout<<endl;

    cout<<"Case insensitive comparison:\n";
    p2 = mismatch(v2.begin(), v2.end(), l2.begin(), Compare());
    if (p2.first == v2.end() && p2.second == l2.end())
    {
        cout<<"Collections v2 i l2 are equal!\n";
    }
    else
    {
        cout<<"Collections v2 i l2 are NOT equal!\n";
        cout<<"Mismatch at position: "<<distance(v2.begin(), p2.first)<<endl;
        cout<<"First not matching element - v2: "<<*(p2.first)<<" l2: "<< *(p2.second)<<endl;
    }
    return 0;
}

/*
v1: 1 2 3 4 5 6 7 8 9 10 
l1: 1 2 4 6 7 3 5 9 10 8
Collections v1 i l1 are NOT equal!
Mismatch at position: 2
First not matching element - v1: 3 l1: 4

v2: 97 98 67 100 101 70 103 104 105 74
l2: 97 98 67 68 69 70 103 104 105 106 
Case sensitive comparison:
Collections v2 i l2 are NOT equal!
Mismatch at position: 3
First not matching element - v2: 100 l2: 68

Case insensitive comparison:
Collections v2 i l2 are equal!
*/
// 2.2.10
#include <set>
#include <iostream>
#include <functional>

using namespace std;

template <class T> void print(T start, T end) {
        for ( ;start != end; ++start) {
                std::cout << *start << " ";
        }
    }

int main()
{
    int t[]={16, 10, 8, 40, 6, 15, 3, 9, 7, 2};
    set<int, greater<int> > s1(t,t+10);
    print(s1.begin(), s1.end()); cout<<endl<<endl;
    cout<<"Removing element from a certain position (iterator):\n";
    set<int>::iterator it = s1.find(15);
    s1.erase(it);
    print(s1.begin(), s1.end()); cout<<endl<<endl;

    cout<<"Removing certain value (9) from the set:\n";
    s1.erase(9);
    print(s1.begin(), s1.end()); cout<<endl<<endl;

    cout<<"Removing range of iterators:\n";
    s1.erase(s1.find(6), s1.end());
    print(s1.begin(), s1.end()); cout<<endl<<endl;

    cout<<"Removing all the elements from the set\n";
    s1.clear();
    cout<<"S1 size: "<<s1.size()<<endl;
    return 0;
}

/*
40 16 15 10 9 8 7 6 3 2 

Removing element from a certain position (iterator):
40 16 10 9 8 7 6 3 2

Removing certain value (9) from the set:
40 16 10 8 7 6 3 2

Removing range of iterators:
40 16 10 8 7

Removing all the elements from the set
S1 size: 0
*/


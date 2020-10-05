// 3.1.2
#include <iostream>
#include <list>
#include <set>
#include <algorithm>

using namespace std;

void print(int & value) //change argument to const int & value for set 
{
    cout<<value<<" ";
}

struct Print 
{
    void operator()(int & value) //change argument to const int & value for set
    {
        cout<<value<<" ";
    }
};

int main()
{
    int t[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    list <int> l1(t, t+10);
    cout<<"Print all elements of the container - using function\n";
    for_each(l1.begin(), l1.end(), print); cout<<endl<<endl;

    cout<<"Print all elements of the container - using function object\n";
    for_each(l1.begin(), l1.end(), Print()); cout<<endl<<endl;

    //!! Be aware of sets and maps !!
    // change arguments of function print and function object must be const
    /*
    set <int>s1(t, t+10);

    cout<<"Print all elements of the set - using function\n";
    for_each(s1.begin(), s1.end(), print); cout<<endl<<endl;

    cout<<"Print all elements of the set - using function object\n";
    for_each(s1.begin(), s1.end(), Print() ); cout<<endl<<endl;
    */
    return 0;
}

/*
Print all elements of the container - using function
1 2 3 4 5 6 7 8 9 10

Print all elements of the container - using function object
1 2 3 4 5 6 7 8 9 10
*/
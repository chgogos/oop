// 1.4.15
#include <list>
#include <iostream>

using namespace std;

template<class I>
void print (const I & start, const I & end)
{
    for(I it = start; it != end; ++it)
    {
        cout<< *it << " ";
    }
    cout<<endl;
}
struct DeleteOdd
{
    bool operator ()(int value)
    {
        if (value % 2 > 0 )
        {
            return true;
        }
        return false;
    }
};
bool deleteEven(int value)
{
    if (value % 2 == 0 )
    {
        return true;
    }
    return false;
}

int main()
{
    int a[]={1,2,1,3,2,3,4,3,4,7,8,9,6,6,5,8,9,10};
    
    list <int> l1(a,a+18);
    list <int> l2(a,a+18);
    print(l1.begin(), l1.end());
    //remove odd numbers
    l1.remove_if(DeleteOdd());
    cout<<"All odd numbers have been deleted"<<endl;
    print(l1.begin(), l1.end());
    //remove even numbers
    l2.remove_if(deleteEven);
    cout<<"All even numbers have been deleted"<<endl;
    print(l2.begin(), l2.end());
    
    return 0;
}

/*
1 2 1 3 2 3 4 3 4 7 8 9 6 6 5 8 9 10 
All odd numbers have been deleted
2 2 4 4 8 6 6 8 10
All even numbers have been deleted
1 1 3 3 3 7 9 5 9
*/
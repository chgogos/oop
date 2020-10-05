// 3.1.3
#include <iostream>
#include <deque>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    int t[] = {10, 2, 4, 3, 5, 6, 10, 8, 9, 10,};
    deque <int> d1(t, t+10);
    cout<<"Look for the first even element in the container:\n";
    deque<int>::iterator found = find(d1.begin(), d1.end(), 10);
    if (found!=d1.end())
    {
        cout<<"Value 10 found at position : "<<distance(found, d1.begin()) <<endl;
        cout<<endl;
        cout<<"Founding all remaining elements of value 10\n";
        ++found; // skip element already found if any;
        while ( (found = find(found, d1.end(), 10)) != d1.end())
        {
            cout<<"Next value 10 found at position : "<<distance(d1.begin(), found ) <<endl;
            ++found;
        }
    }
    else
    {
        cout<<"Value 10 not found\n";
    }
    
    return 0;
}

/*
Value 10 found at position : 0

Founding all remaining elements of value 10
Next value 10 found at position : 6
Next value 10 found at position : 9
*/
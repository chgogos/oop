#include <iostream>
#include <queue>
#include <deque>
#include <list>
#include <vector>
using namespace std;

int main()
{
    int a1[]={1,2,3,4,5,6,7,8,9,10};
    //1. default constructor
    queue <int> s1;
    //2. copy constructor;
    queue <int> s2(s1);
    //3. initiilization using predefined container
    deque <int> d1(a1, a1+10);
    queue <int> s3(d1);
    
    //4. using non-default storage
    queue<int, list <int> > s4;
    queue<int, vector <int> > s5;
    return 0;
}
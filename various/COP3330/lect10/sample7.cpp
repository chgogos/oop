#include <iostream>

using namespace std;


int *Increment(int x)
{
  int *NewInt = new int;
  *NewInt = x+1;
  return NewInt;
}

int main()
{
  int *MyIntPointer;
  
  MyIntPointer = Increment(5);
  Increment(20);

  cout<<*MyIntPointer<<"\n";  
  return 0;
}

/*
6
*/
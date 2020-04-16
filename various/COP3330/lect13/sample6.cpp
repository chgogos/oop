#include <iostream>

using namespace std;

class MyClass{
public:
  MyClass()
  {
    for(int i=0; i< 7; i++)
      data[i] = 'a';
    data[6] = '\0';
  }
  char* operator& ()
  {
    cout<<"Running & operator "<<endl;
    return (char*)&data;
  }
private:
  char data[7];
};

int main()
{
  MyClass c1;
  
  cout<<&c1<<endl;

  return 0;  
}

/*
Running & operator 
aaaaaa
*/
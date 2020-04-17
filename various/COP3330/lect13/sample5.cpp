#include <iostream>

using namespace std;

class MyClass
{
public:
  MyClass()
  {
    for (int i = 0; i < 7; i++)
      data[i] = i;
  }

  const int &operator[](int index) const
  {
    cout << "Running const " << index << "!\n";
    return data[index];
  }

  /*  
  int operator[] (int index) const
  {
  cout<<"Running int "<<index<<"!\n";
    return data[index];
  }
  */

  int &operator[](int index)
  {
    cout << "Running normal " << index << "!\n";
    return data[index];
  }

private:
  int data[7];
};

int main()
{
  const MyClass c1;
  MyClass c2;
  int num;

  num = c1[5]; //line 32
  cout << num << endl;

  c2[2] = 8;
  cout << c2[2] << endl;

  //security risks?
  int &intref = c2[0];

  for (int i = 0; i < 7; i++)
    *(&intref + i) = 99;

  for (int i = 0; i < 7; i++)
    cout << "array[" << i << "] = " << c2[i] << endl;
  return 0;
}

/*
Running const 5!
5
Running normal 2!
Running normal 2!
8
Running normal 0!
array[0] = Running normal 0!
99
array[1] = Running normal 1!
99
array[2] = Running normal 2!
99
array[3] = Running normal 3!
99
array[4] = Running normal 4!
99
array[5] = Running normal 5!
99
array[6] = Running normal 6!
99
*/
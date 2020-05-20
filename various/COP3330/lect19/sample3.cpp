#include <iostream>
using namespace std;

#define sum(a, b) a+b
#define product(a, b) ((a)*(b))

int main() 
{
  int i;
  cout << "sum(5, 10) = " <<  sum(5, 10) << endl;
  cout << "product(5, 10) = " << product(5, 10) << endl;
  
  cout << "product(2+3, 5+5) = " << product(2+3, 5+5) << endl;  
  cout << "10 * sum(2, 3) = " << 10 * sum(2, 3) << endl;
  return 0;
}
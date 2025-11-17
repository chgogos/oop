#include <cassert>
#include <iostream>

using namespace std;

int factorial(int n) {
  assert(n >= 0);
  if (n <= 1)
    return 1;
  else
    return n * factorial(n - 1);
}

int main() {
  for (int i = 0; i < 10; i++) cout << i << "!=" << factorial(i) << endl;
}

/*
0!=1
1!=1
2!=2
3!=6
4!=24
5!=120
6!=720
7!=5040
8!=40320
9!=362880
*/
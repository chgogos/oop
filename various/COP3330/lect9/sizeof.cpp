#include <iostream>
using namespace std;

int main() {
  char c = 'a';
  int i = 42;
  double d = 3.1415926535;  // 3.141592653500000054
  float f = 3.1415926535f;  // 3.141592741F

  char* ptr_c = &c;
  int* ptr_i = &i;
  float* ptr_f = &f;
  double* ptr_d = &d;

  cout << "size of char = " << sizeof(char) << endl;
  cout << "size of char variable = " << sizeof(c) << endl;
  cout << "size of char* = " << sizeof(char*) << endl;
  cout << "size of char* variable = " << sizeof(ptr_c) << endl;

  cout << "size of int = " << sizeof(int) << endl;
  cout << "size of int variable = " << sizeof(i) << endl;
  cout << "size of int* = " << sizeof(int*) << endl;
  cout << "size of int* variable = " << sizeof(ptr_i) << endl;

  cout << "size of float = " << sizeof(float) << endl;
  cout << "size of float variable = " << sizeof(f) << endl;
  cout << "size of float* = " << sizeof(float*) << endl;
  cout << "size of float* variable = " << sizeof(ptr_f) << endl;

  cout << "size of double = " << sizeof(double) << endl;
  cout << "size of double variable = " << sizeof(d) << endl;
  cout << "size of double* = " << sizeof(double*) << endl;
  cout << "size of double* variable = " << sizeof(ptr_d) << endl;

  return 0;
}

/*
size of char = 1
size of char variable = 1
size of char* = 8
size of char* variable = 8
size of int = 4
size of int variable = 4
size of int* = 8
size of int* variable = 8
size of float = 4
size of float variable = 4
size of float* = 8
size of float* variable = 8
size of double = 8
size of double variable = 8
size of double* = 8
size of double* variable = 8
*/

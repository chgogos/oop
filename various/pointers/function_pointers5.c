#include <stdio.h>

// https://www.cprogramming.com/tutorial/function-pointers.html

void func1(int x) { printf("%d\n", x); }

int main(void) {
  // pointer to a function that takes an int parameter and returns void
  void (*fptr)(int);
  fptr = func1; // fptr = &func1; 
  for (int i = 0; i < 5; i++) {
    fptr(i);
    // (*fptr)(i);
  }
}
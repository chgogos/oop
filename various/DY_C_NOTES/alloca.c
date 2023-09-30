#include <stdlib.h>

void fun() { int *a = alloca(10); }// is equivalent with int a[10]; 
int main() { fun(); }
#include <stdio.h>

// δήλωση τύπων παραμέτρων στη C, έξω από την παρένθεση ορισμάτων της συνάρτησης 
// μη έγκυρο στη C++
int fun(a, b) 
int a;
int b;
{
    return a + b;
}

int main()
{
    int c = fun(2,3);
    printf("%d\n", c);
    return 0;
}
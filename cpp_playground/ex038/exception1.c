#include <stdio.h>
#include <math.h>
// #define NDEBUG  // uncomment to disable asserts 
#include <assert.h>

void func(double x)
{
    assert(x>0.0);
    printf("%.2f\n", sqrt(x));
}

int main()
{
    func(25.0);
    func(-4.0);
    return 0;
}

/*
5.00
Assertion failed!

Program: exception1.exe
File: exception1.c, Line 8
*/
#include <stdio.h>
int f1(int a, int b, int c)
{
    printf("(in %s) %d\n", __FUNCTION__, a * b + c);
    // return a*b+c; // OOPS, accidentally I forgot to add this
}

int main()
{
    printf("(in %s) %d\n", __FUNCTION__, f1(123, 456, 789));
}

/*
(in f1) 56877
(in main) 14
*/
#include <cstdio>
using namespace std;

int main()
{
    int x = 5;
    int *px; // δήλωση αλλά όχι αρχικοποίηση δείκτη
    px = &x; // αρχικοποίηση δείκτη
    *px = 7; // αποαναφορά (dereference) δείκτη
    printf("x=%i &x=%x\n", x, &x);
    printf("px=%x *px=%i, &px=%x\n", px, *px, &px);
}
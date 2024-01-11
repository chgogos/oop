#include <cstdio>
using namespace std;

int main()
{
    int a = 5, b = 10;
    const int c = 20;
    int *p1; // pointer to int

    int const *p2; // pointer to const int
    // const int *p2; // pointer to const int

    int *const p3 = &a; // const pointer to int

    int const *const p4 = &a; // const pointer to const int
    // const int *const p4 = &a; // const pointer to const int

    p1 = &a;
    (*p1)++;
    p1 = &b;
    (*p1)++;
    // p1 = &c; // error: assigning to 'int *' from incompatible type 'const int *'
    printf("pointer to int: a=%i b=%i c=%i *p1=%i\n", a, b, c, *p1);

    a = 5;
    b = 10;
    p2 = &a;
    p2 = &b;
    p2 = &c;
    printf("pointer to const int: a=%i b=%i c=%i *p2=%i\n", a, b, c, *p2);
    // p2 = &a;
    // (*p2)++; // error: read-only variable is not assignable

    a = 5;
    b = 10;
    (*p3)++;
    // p3 = &b; // error: cannot assign to variable 'p3' with const-qualified type 'int *const'
    printf("const pointer to int: a=%i b=%i c=%i *p3=%i\n", a, b, c, *p3);

    a = 5;
    b = 10;
    // (*p4)++; // error: read-only variable is not assignable
    // p4 = &b; // error: cannot assign to variable 'p4' with const-qualified type 'const int *const'
    // p4 = &c; // error: cannot assign to variable 'p4' with const-qualified type 'const int *const'
    printf("const pointer to const int: a=%i b=%i c=%i *p4=%i\n", a, b, c, *p4);
}
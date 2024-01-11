#include <cstdio>

using namespace std;

union my_union {
    int i;
    double d;
    char c;
};

int main()
{
    my_union mu;
    my_union *p = &mu;
    printf("sizeof union is %d\n", sizeof(mu));

    p->i = 1;
    printf("%d %.2f %c\n", p->i, p->d, p->c);

    p->d = 3.14;
    printf("%d %.2f %c\n", p->i, p->d, p->c);

    p->c = 'a';
    printf("%d %.2f %c\n", p->i, p->d, p->c);
}
// https://github.com/fredoverflow/skorbut-release

#include <cstdio>

using namespace std;

void swap1(const char *p, const char *q)
{
    const char *t;
    t = p;
    p = q;
    q = t;
}

void swap2(const char **p, const char **q)
{
    const char *t;
    t = *p;
    *p = *q;
    *q = t;
}

void swap3(const char *&p, const char *&q)
{
    const char *t;
    t = p;
    p = q;
    q = t;
}

// not working
void scenario1()
{
    const char *a = "you";
    const char *b = "hey";
    printf("%s %s\n", a, b);
    swap1(a, b);
    printf("%s %s\n", a, b);
}

void scenario2()
{
    const char *a = "you";
    const char *b = "hey";
    printf("%s %s\n", a, b);
    swap2(&a, &b);
    printf("%s %s\n", a, b);
}

void scenario3()
{
    const char *a = "you";
    const char *b = "hey";
    printf("%s %s\n", a, b);
    swap3(a, b);
    printf("%s %s\n", a, b);
}

int main()
{
    printf("Testing scenario 1 (not ok swap)\n");
    scenario1();

    printf("Testing scenario 2 (ok swap)\n");
    scenario2();

    printf("Testing scenario 3 (ok swap)\n");
    scenario3();
}
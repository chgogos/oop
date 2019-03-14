#include <stdio.h>

void func1()
{
    int c1 = 0;
    static int c2 = 0;
    c1++;
    c2++;
    printf("local variable value = %d, static variable value = %d \n", c1, c2);
}

int main()
{
    for (int i = 0; i < 5; i++)
    {
        func1();
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int A[5] = {[0] = 1, [1] = 2, [4] = 5};
    x = 42;
    printf("%d\n", x);
    for (size_t i = 0; i < 5; ++i)
    {
        printf("%i --> %d\n", i, A[i]);
    }
    return EXIT_SUCCESS;
}
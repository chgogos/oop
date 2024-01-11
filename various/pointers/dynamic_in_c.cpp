#include <cstdio>
#include <cstdlib>

int main()
{
    int *p = (int *)malloc(sizeof(int));
    *p = 5;
    printf("p=%x *p=%i\n", p, *p);
    free(p);

    p = (int *)calloc(sizeof(int), 1);
    printf("p=%x *p=%i\n", p, *p);
    free(p);

    p = (int *)malloc(sizeof(int)*2);
    p[0]=1;
    p[1]=2;
    printf("p=%x p[0]=%i p[1]=%i\n", p, p[0], p[1]);
    p = (int*)realloc(p,3);
    p[2]=3;
    printf("p=%x p[0]=%i p[1]=%i, p[2]=%i\n", p, p[0], p[1], p[2]);
    free (p);
}
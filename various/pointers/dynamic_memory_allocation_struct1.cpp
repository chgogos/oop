#include <cstdlib>
#include <cstdio>
using namespace std;

struct point
{
    int x;
    int y;
};

int main()
{
    point *p = (point *)malloc(sizeof(point));
    p->x = 1;
    p->y = 1;
    printf("%i %i\n", p->x, p->y);
    free(p);
}
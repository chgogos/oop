#include <cstdio>
using namespace std;

void fun1(int *p)
{
    printf("fun(int*) >>> &p=%x p=%x *p=%i\n", &p, p, *p);
}

void fun2(double *p)
{
    printf("fun(double*) >>> &p=%x p=%x *p=%.2f\n", &p, p, *p);
}

int main()
{
    int *ip = new int(7);
    double *dp = new double(7.7);
    void *vp = nullptr;
    printf("1. ip=%x dp=%x vp=%x *ip=%i *dp=%.2f\n", ip, dp, vp, *ip, *dp);

    vp = ip;
    *(int *)vp = 1;
    printf("2. ip=%x dp=%x vp=%x *ip=%i *dp=%.2f\n", ip, dp, vp, *ip, *dp);
    fun1((int *)vp);

    vp = dp;
    *(double *)vp = 1.5;
    printf("3. ip=%x dp=%x vp=%x *ip=%i *dp=%.2f\n", ip, dp, vp, *ip, *dp);
    fun2((double *)vp);
}
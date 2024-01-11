#include <cstdio>
using namespace std;

int main()
{

    int *p1;
    int *p2 = NULL;
    int *p3 = nullptr; // C++ guidelines
    printf("p1=%x, p2=%x, p3=%x\n", p1, p2, p3);

    *p1 = 7; // μη προβλέψιμη συμπεριφορά
    printf("bye");
}
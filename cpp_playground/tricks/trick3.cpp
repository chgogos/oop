#include <iostream>
#include <numeric> // iota

#define PRINT(A,N) for(int i=0;i<N;i++){std::cout<<A[i]<<" ";}std::cout<<std::endl;

int main()
{
    int a[10];
    std::iota(a, a + 10, 0);
    PRINT(a, 10);

    std::iota(a, a + 10, 200);
    PRINT(a, 10);

    char c[26];
    std::iota(c, c + 26, 'a');
    PRINT(c, 26);

    std::iota(c, c + 26, 'A');
    PRINT(c, 26);

    return 0;
}

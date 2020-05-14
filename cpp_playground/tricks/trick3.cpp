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

/*
0 1 2 3 4 5 6 7 8 9
200 201 202 203 204 205 206 207 208 209
a b c d e f g h i j k l m n o p q r s t u v w x y z
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
*/

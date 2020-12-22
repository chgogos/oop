#include <stdio.h>
#include <stdlib.h>

int main(){
    size_t i;
    for(i=10;i<=10;i--){
        printf("%zu\n", i);
    }
    printf("%zu\n", i);

}

/*
10
9
8
7
6
5
4
3
2
1
0
18446744073709551615
*/
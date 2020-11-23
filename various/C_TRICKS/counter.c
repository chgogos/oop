#include <stdio.h>
#define print_dec(var)  printf("%s=%d\n",#var,var);

int main(){
    for(int counter=1;counter<=5;counter++){
        print_dec(counter);
    }

    for(int count=1;count<=5;count++){
        print_dec(count);
    }
}

/*
counter=1
counter=2
counter=3
counter=4
counter=5
count=1
count=2
count=3
count=4
count=5
*/
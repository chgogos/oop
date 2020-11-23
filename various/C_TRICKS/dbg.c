#include <stdio.h>
#define WHERE fprintf(stderr,"[LOG]%s:%s:%d\n",__FILE__,__PRETTY_FUNCTION__, __LINE__);

void fun(int i){
    WHERE
}

int main(){
    WHERE
    for(int i=0;i<5;i++){
        fun(i);
    }
    WHERE
}

/*
[LOG]dbg.c:main:9
[LOG]dbg.c:fun:5
[LOG]dbg.c:fun:5
[LOG]dbg.c:fun:5
[LOG]dbg.c:fun:5
[LOG]dbg.c:fun:5
[LOG]dbg.c:main:13
*/
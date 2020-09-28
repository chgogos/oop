#include <stdio.h>

int main(){
    fprintf(stderr, "This is an error");

    return 0;
}

/*
$ ./stderr 2> a.out

./stderr : This is an error
At line:1 char:1
+ ./stderr 2> a.out
+ ~~~~~~~~~~~~~~~~~
    + CategoryInfo          : NotSpecified: (This is an error:String) [], RemoteException
    + FullyQualifiedErrorId : NativeCommandError
 

*/
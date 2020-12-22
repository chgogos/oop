// ???
#include <stdio.h>
#include <tgmath.h> // type generic mathemetical functions
#include <stdbool.h>

double const eps = 1E-9;

int main(){
    double const a = 34.0; 
    double x = 0.5; 
    int i=0;
    while (i<10) {
        double d = fabs(1.0 - a*x);
        printf("(%g)->", d);
        x *= (2.0 - a*x); 
        printf("%g\n", x);
        i++;
    }  
}

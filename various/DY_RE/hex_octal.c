#include <stdio.h>

int main(){
    int a = 0566; // octal
    int b = 0xA2F; // hexadecimal
    int c = 0b01010101; // binary (gcc specific)

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
}
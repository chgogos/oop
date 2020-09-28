#include <stdio.h>

int main() {
  char *s = "ABCDEFG";

  // a[i] ==> *(a+i)
  printf("1. %c\n", s[2]);
  printf("2. %c\n", *(s + 2));
  printf("3. %c\n", *(&s[0] + 2));
  printf("4. %c\n", 2 [s]);
  printf("5. %c\n", *(2 + s));
}
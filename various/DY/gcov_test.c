#include <stdio.h>
void f1(int in) {
  int array[100][200];
  if (in > 100) {
    printf("Error!\n");
    return;
  };
  for (int i = 0; i < 100; i++)
    for (int j = 0; j < 200; j++) {
      array[i][j] = in * i + j;
    };
};
int main() { f1(12); };
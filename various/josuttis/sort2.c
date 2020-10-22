#include <stdio.h>
#include <stdlib.h>

int intCompare(const void *xp, const void *yp) {
  return *(const int *)xp - *(const int *)yp;
}

int main() {
  int vals[] = {42, 0, -7, 42, 11};
  qsort(vals, 5, sizeof(int), intCompare);
  for (int i = 0; i < 5; i++) {
    printf("%d ", vals[i]);
  }
}

/*
-7 0 11 42 42
*/
#include <stdio.h>
#include <stdlib.h>

int intCompare(const void *xp, const void *yp) {
  int x = *(const int *)xp;
  int y = *(const int *)yp;
  if (x < y)
    return -1;
  if (y < x)
    return 1;
  return 0;
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
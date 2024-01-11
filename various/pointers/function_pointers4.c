#include <stdio.h>
#include <stdlib.h> // qsort

/**
 void qsort(void *base, size_t nmemb, size_t size,
            int(*compar)(const void *, const void *));
 **/

int int_sorter(const void *x, const void *y) {
  int first = *(int *)x;
  int second = *(int *)y;
  if (first < second)
    return -1;
  else if (first == second)
    return 0;
  else
    return 1;
}

int main(void) {
  int a[10] = {34, 21, 45, 78, 12, 23, 44, 16, 11, 10};
  qsort(a, 10, sizeof(int), int_sorter);
  for (int i = 0; i < 10; i++)
    printf("%d ", a[i]);
}

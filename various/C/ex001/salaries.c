#include <stdio.h>
#include <stdlib.h>

int main() {
  int sal;

  FILE *in_file = fopen("salary_data.txt", "r");

  if (!in_file) {
    printf("File can't be read\n");
    exit(-1);
  }
  int c1 = 0;
  int c2 = 0;
  while (fscanf(in_file, "%d", &sal) == 1) {
    if (sal < 0)
      continue;
    if (sal > 3000)
      c1++;
    if (sal >= 800 && sal <= 1200)
      c2++;
  }
  fclose(in_file);

  printf("%d\n", c1);
  printf("%d\n", c2);
}

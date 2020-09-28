#include <stdio.h>

struct color {
  int R;
  int G;
  int B;
};
struct color blue = {.B = 255}; // initialize specific structure fields

void print_color_info(struct color *c) {
  printf("%d %d %d\n", c->R, c->G, c->B);
};

struct color f(int x, int y, int z) {
  return (struct color){.R = x, .G = y, .B = z};
};

int main() {
  // 1.
  print_color_info(&blue);

  // 2.
  print_color_info(&(struct color){
      .G = 255}); // create a structure right in the function arguments

  // 3.
  struct color c = f(100, 100, 100);
  print_color_info(&c);
}

/*
0 0 255
0 255 0
100 100 100
*/
#include <stdio.h>

#define _DEBUG

void dbg_print(const char *fmt, ...) {
#ifdef _DEBUG
  // open log file
  // write to log file
  printf("**** %s\n", fmt);
// close log file
#endif
};

int main() { dbg_print("Debug this"); }
#include <stdio.h>
#include <string.h>

int main() {
  char str[] = "The quick brown fox jumps over the lazy dog"; // correct
  
  //   char *str= "The quick brown fox jumps over the lazy dog"; // incorrect
  // the C string has type const char*, i.e., it is located in the constant data segment, writeprotected

  char *sep = " ";
  /* get the first token */
  char *token = strtok(str, sep);
  /* walk through other tokens */
  while (token != NULL) {
    printf("%s\n", token);
    token = strtok(NULL, sep);
  }
}
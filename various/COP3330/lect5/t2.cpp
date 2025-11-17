int main() {
  const int x = 5;
  int* x_ptr;

  x_ptr = &x;  // a value of type "const int *" cannot be assigned to an entity
               // of type "int *"
}
#include <iostream>
using namespace std;

void fun(char *a, int size){
    int sum =0;
    for (int i = 0; i < size; i++)
    {
        sum += int(a[i]);
    }
    
}


// fuzz_target.cc
extern "C" int LLVMFuzzerTestOneInput(const uint8_t *Data, size_t Size) {
  fun((char*)Data, Size);
  return 0;  // Non-zero return values are reserved for future use.
}


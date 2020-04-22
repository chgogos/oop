#include <iostream>
#include <folly/FBString.h>
 
int main()
{
    folly::fbstring str("Hello, Folly World!");
    std::cout << str << "\n";
}
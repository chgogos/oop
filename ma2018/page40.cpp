#include <string>
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    vector<string> fruits{"apple", "melon"};
    fruits.push_back("pear");
    fruits.push_back("nut");
    // Iterate over the elements in the vector and print them
    for (auto it = fruits.cbegin();
         it != fruits.cend(); ++it)
    {
        cout << *it << endl;
    }
    //Print the elements again using C++11 range-based for loop
    for (auto &str : fruits)
        cout << str << endl;
    return 0;
}
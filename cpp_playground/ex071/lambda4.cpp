#include <iostream>
#include <functional>

using namespace std;

int main()
{
    auto my_lambda1 = [](int x) { return x * 2; };
    auto my_lambda2 = [](int x) -> int { return x * 2; }; // εναλλακτική δήλωση lambda με τύπο επιστροφής
    function<int(int)> my_lambda3 = [](int x) -> int { return x * 2; }; // εναλλακτική δήλωση lambda με τύπο επιστροφής και τύπο lambda ως std::function
    int (*my_lambda4)(int) = [](int x) -> int { return x * 2; }; // εναλλακτική δήλωση lambda με τύπο επιστροφής και τύπο lambda ως function pointer
    
    cout << my_lambda1(5) << endl;
    cout << my_lambda2(5) << endl;
    cout << my_lambda3(5) << endl;
    cout << my_lambda4(5) << endl;
}

/*
10
10
10
10
*/
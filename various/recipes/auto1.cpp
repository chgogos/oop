// χρήση του auto στις παραμέτρους και στον τύπο επιστροφής ενός lambda (C++14)

#include <iostream>

using namespace std;

int main()
{
    auto add = [](auto const a, auto const b) { return a + b; };

    cout << add(2, 3) << endl;

    cout << add(2.1, 3.2) << endl;

    cout << add("Hello"s, " World"s) << endl;
}

/*
5
5.3
Hello World
*/
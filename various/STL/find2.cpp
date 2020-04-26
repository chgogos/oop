#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string text{"This is a message"};

    // εύρεση του πρώτου e μετά το πρώτο a
    auto result = find(begin(text), end(text), 'a');
    result = find(result, end(text), 'e');
    if (result != end(text))
    {
        cout << "found " << *result  << " at position " << result - begin(text) << endl;
    }
}

/*
found e at position 11
*/
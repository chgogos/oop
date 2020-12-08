// https://stackoverflow.com/questions/53849/how-do-i-tokenize-a-string-in-c

#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main()
{
    string str("The quick brown fox");
    regex reg("\\s+");

    sregex_token_iterator iter(str.begin(), str.end(), reg, -1);
    sregex_token_iterator end;

    vector<string> vec(iter, end);

    for (auto a : vec)
    {
        cout << a << endl;
    }
}

/*
The
quick
brown
fox
*/
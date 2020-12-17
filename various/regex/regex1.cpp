#include <iostream>
#include <regex>
#include <algorithm>

using namespace std;

vector<string> words{"test", "abc", "aababt", "ababb", "tabt", "xxabxxab", "xxababxx"};

void regex_example1()
{
    string ptrn = "^ab"; // κείμενο που ξεκινά με ab
    regex r{ptrn};  
    cout << "Example of regex_search using pattern:" << ptrn << endl;
    for (string text : words)
    {
        if (regex_search(text, r))
        {
            cout << text << " MATCH" << endl;
        }
        else
        {
            cout << text << " NO MATCH" << endl;
        }
    }
}

void regex_example2()
{
    string ptrn = "t$"; // κείμενο που τελειώνει σε t
    regex r{ptrn}; 
    cout << "Example of regex_search using pattern:" << ptrn << endl;
    for (string text : words)
    {
        if (regex_search(text, r))
        {
            cout << text << " MATCH" << endl;
        }
        else
        {
            cout << text << " NO MATCH" << endl;
        }
    }
}

void regex_example3()
{
    string ptrn = "(ab){2}"; // κείμενο με 2 συνεχόμενα ab
    regex r{ptrn};
    cout << "Example of regex_search using pattern:" << ptrn << endl;
    for (string text : words)
    {
        if (regex_search(text, r))
        {
            cout << text << " MATCH" << endl;
        }
        else
        {
            cout << text << " NO MATCH" << endl;
        }
    }
}

void regex_example4()
{
    string ptrn = "a.a";
    regex r{ptrn}; // κείμενο με a.a όπου . είναι οποιοσδήποτε χαρακτήρας
    cout << "Example of regex_search using pattern:" << ptrn << endl;
    for (string text : words)
    {
        if (regex_search(text, r))
        {
            cout << text << " MATCH" << endl;
        }
        else
        {
            cout << text << " NO MATCH" << endl;
        }
    }
}

int main()
{
    cout << "Text to be searched:" << endl;
    copy(words.begin(), words.end(), ostream_iterator<string>(cout, "\n"));
    regex_example1();
    cout << string(20, '#') << endl;
    regex_example2();
    cout << string(20, '#') << endl;
    regex_example3();
    cout << string(20, '#') << endl;
    regex_example4();
    cout << string(20, '#') << endl;
}

/*
Text to be searched:
test
abc
aababt
ababb
tabt
xxabxxab
xxababxx
Example of regex_search using pattern:^ab
test NO MATCH
abc MATCH
aababt NO MATCH
ababb MATCH
tabt NO MATCH
xxabxxab NO MATCH
xxababxx NO MATCH
####################
Example of regex_search using pattern:t$
test MATCH
abc NO MATCH
aababt MATCH
ababb NO MATCH
tabt MATCH
xxabxxab NO MATCH
xxababxx NO MATCH
####################
Example of regex_search using pattern:(ab){2}
test NO MATCH
abc NO MATCH
aababt MATCH
ababb MATCH
tabt NO MATCH
xxabxxab NO MATCH
xxababxx MATCH
####################
Example of regex_search using pattern:a.a
test NO MATCH
abc NO MATCH
aababt MATCH    
ababb MATCH
tabt NO MATCH
xxabxxab NO MATCH
xxababxx MATCH
####################
*/

#include <iostream>
#include <regex>

using namespace std;

void regex_example1()
{
    string ptrn = "gr[ae]y";
    regex r = regex(ptrn);
    vector<string> texts{"grey", "gray", "green", "This is grey", "This is gray"};

    cout << "Example of regex_search using pattern:" << ptrn << endl;
    for (auto t : texts)
    {
        if (regex_search(t, r))
        {
            cout << t << " MATCH" << endl;
        }
        else
        {
            cout << t << " NO MATCH" << endl;
        }
    }
}

void regex_example2()
{
    string ptrn = "gr[ae]y";
    regex r = regex(ptrn);
    vector<string> texts{"grey", "gray", "green", "This is grey", "This is gray"};

    cout << "Example of regex_match using pattern:" << ptrn << endl;
    for (auto t : texts)
    {
        if (regex_match(t, r))
        {
            cout << t << " MATCH" << endl;
        }
        else
        {
            cout << t << " NO MATCH" << endl;
        }
    }
}

void regex_example3()
{
    string ptrn = "\\d+"; // αριθμοί με ένα ή περισσότερα ψηφία
    regex r = regex(ptrn);
    string text("This is a text containg numeric values like 12 34 and key values like x:10 y:20");

    cout << "Example of regex_search (smatch) using pattern:" << ptrn << endl;
    auto sm = smatch{};
    while (regex_search(text, sm, r))
    {
        for (auto x : sm)
        {
            cout << x << endl;
        }
        text = sm.suffix().str();
    }
    cout << string(20, '-') << endl;

    text = "This is a text containg numeric values like 12 34 and key values like x:10 y:20";
    ptrn = ":\\d+";
    r = regex(ptrn);
    cout << "Example of regex_search (smatch) using pattern:" << ptrn << endl;
    sm = smatch{};
    while (regex_search(text, sm, r))
    {
        for (auto x : sm)
        {
            cout << stoi(x.str().substr(1, x.length())) << endl;
        }
        text = sm.suffix().str();
    }
}

int main()
{
    regex_example1();
    cout << string(20, '#') << endl;
    regex_example2();
    cout << string(20, '#') << endl;
    regex_example3();
}

/*
Example of regex_search using pattern:gr[ae]y
grey MATCH
gray MATCH
green NO MATCH
This is grey MATCH
This is gray MATCH
####################
Example of regex_match using pattern:gr[ae]y 
grey MATCH
gray MATCH
green NO MATCH
This is grey NO MATCH
This is gray NO MATCH
####################
Example of regex_search (smatch) using pattern:\d+
12
34
10
20
--------------------
Example of regex_search (smatch) using pattern::\d+
10
20
*/
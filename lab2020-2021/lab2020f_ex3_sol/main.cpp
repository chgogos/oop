#include <iostream>
#include <limits>
#include <algorithm>
#include "lexicon.hpp"

using namespace std;

void display_results(vector<string> results)
{
    cout << "Words found=" << results.size() << endl;
    if (!results.empty())
    {
        cout << "Display words (y/n):";
        string yn;
        cin >> yn;
        if (yn == "y")
        {
            for (string w : results)
            {
                cout << w << " ";
            }
            cout << endl;
        }
    }
}

int main(int argc, char *argv[])
{
    string fn = "wordlist.10000.txt";
    if (argc == 2)
    {
        fn = argv[1];
    }
    cout << "File loaded:" << fn << endl;
    // cin.clear();
    Lexicon lexicon(fn);
    vector<string> results;
    int choice;
    do
    {
        cout << "1. Find words of size" << endl;
        cout << "2. Find words starting with" << endl;
        cout << "3. Find words ending with" << endl;
        cout << "4. Find words including" << endl;
        cout << "5. Find words including pattern" << endl;
        cout << "6. Exit" << endl;
        cout << "Input choice:";
        cin >> choice;
        // cin.clear();
        // cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (choice)
        {
        case 1:
        {
            cout << "Input word length:";
            int length;
            cin >> length;
            results = lexicon.words_by_length(length);
            display_results(results);
        }
        break;
        case 2:
        {
            cout << "Input starting letters:";
            string s;
            cin >> s;
            results = lexicon.words_starting_with(s);
            display_results(results);
        }
        break;
        case 3:
        {
            cout << "Input ending letters:";
            string s;
            cin >> s;
            results = lexicon.words_ending_with(s);
            display_results(results);
        }
        break;
        case 4:
        {
            cout << "Input sequence of letters and repetitions:";
            string s;
            cin >> s;
            int rep;
            cin >> rep;
            results = lexicon.words_incl_seq(s, rep);
            display_results(results);
        }
        break;
        case 5:
        {
            cout << "Input pattern:";
            string s;
            cin >> s;
            results = lexicon.words_incl_pattern(s);
            display_results(results);
        }
        break;
        case 6:
            break;
        }
    } while (choice != 6);
}

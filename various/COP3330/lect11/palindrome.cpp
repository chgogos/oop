#include <iostream>
#include <string>
#include <vector>
#include <cstdbool>

using namespace std;

bool ispalindrome(string word, int front, int back)
{
    if (front >= back && word[front] == word[back])
        return true;
    else if (word[front] == word[back])
        return ispalindrome(word, ++front, --back);
    else
        return false;
}

bool ispalindrome(string word)
{
    return ispalindrome(word, 0, word.size() - 1);
}

int main()
{
    vector<string> words{"sofos", "anna", "civic", "kayak", "madam", "radar", "refer", "sofia"};
    for (const auto &w : words)
    {
        cout << boolalpha << w << " " << ispalindrome(w) << endl;
    }
}

/*
sofos true
anna true
civic true
kayak true
madam true
radar true
refer true
sofia false  
*/
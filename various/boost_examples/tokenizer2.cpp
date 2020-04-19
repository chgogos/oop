#include <iostream>
#include <string>
#include <boost/tokenizer.hpp>

using namespace boost;
using namespace std;

int main(){
    char_separator<char> sep("e", " ", keep_empty_tokens);
    string s = "This is a text. Surpise, some more text!!!";
    tokenizer<char_separator<char>> tok(s, sep);
    for(auto word: tok){
        cout << "<" << word << ">" << endl;
    }
}

/*
<This>
< >
<is>
< >
<a>
< >
<t>
<xt.>
< >
<Surpis>
<,>
< >
<som>
<>
< >
<mor>
<>
< >
<t>
<xt!!!>
*/

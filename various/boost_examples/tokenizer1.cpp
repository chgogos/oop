#include <iostream>
#include <string>
#include <boost/tokenizer.hpp>

using namespace boost;
using namespace std;

int main(){
    string s = "This is a text. Surpise, some more text!!!";
    tokenizer<> tok(s);
    for(auto word: tok){
        cout << "<" << word << ">" << endl;
    }
}

/*
<This>
<is>
<a>
<text>
<Surpise>
<some>
<more>
<text>
*/

#include <iostream>
#include <string>
#include <boost/tokenizer.hpp>

using namespace boost;
using namespace std;

int main(){
    string s = "This is a text. Surpise, some more text!!!";
    int offsets[]={1,2,3};
    offset_separator os(offsets, offsets+3);
    tokenizer<offset_separator> tok(s, os);
    for(auto word: tok){
        cout << "<" << word << ">" << endl;
    }
}

/*
<T>
<hi>
<s i>
<s>
< a>
< te>
<x>
<t.>
< Su>
<r>
<pi>
<se,>
< >
<so>
<me >
<m>
<or>
<e t>
<e>
<xt>
<!!!>
*/

#include <iostream>
#include <string>
#include <boost/lexical_cast.hpp>

using namespace boost;

using namespace std;

int main(){
    string s1 = "3.14";
    double d = lexical_cast<double>(s1);
    
    string s2 = "12345";   
    int i = lexical_cast<double>(s2); //better than atoi, stoi
    // int i = stoi(s2);

    cout << d << ", " << i << endl;

    try{
        cout << lexical_cast<int>("a12") << endl;
    }
    catch(const bad_lexical_cast& e){
        cout << e.what() << endl;
    }
}

/*
3.14, 12345
bad lexical cast: source type value could not be interpreted as target
*/
#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main()
{
    unordered_map<int,int> dict;
    for (int i = 0; i < 10; i++){
        dict[i]=0;
    }
    for (int i = 1; i <= 10000000; i++)
    {
        for(char c: to_string(i)){
            dict[c-'0']++;
        }
        
    }
    for (int i=0;i<10;i++)
    {
        cout << i << " " << dict[i] << endl;
    }
}

/*
0 5888896
1 7000001
2 7000000
3 7000000
4 7000000
5 7000000
6 7000000
7 7000000
8 7000000
9 7000000

Οι πίνακες κατακερματισμού (std::unordered_set, std::unordered_map) μπορούν να είναι ταχύτεροι από τα ισοζυγισμένα δυαδικά δένδρα αναζήτησης (std::set, std::map)
*/
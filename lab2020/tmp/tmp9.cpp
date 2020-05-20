// δήλωση και αρχικοποίηση vector<int>
// πέρασμα από κάθε τιμή και αν είναι άρτια διπλασιασμός

#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> v{7, 8, 1, 2, 44, 5};

    auto itr=v.begin();
    while(itr != v.end()){
        if ((*itr) % 2 == 0)
            *itr = (*itr) * 2;
        itr++;
    }

    for(auto x: v){
        cout << x << " ";
    }
}
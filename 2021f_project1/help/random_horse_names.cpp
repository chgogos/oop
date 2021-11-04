#include <iostream>
#include <vector>
#include <random>
#include <chrono>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> horse_names = {"Blitz", "Bolt", "Goliath", "Hercules"};

    unsigned seed = chrono::steady_clock::now().time_since_epoch().count();
    auto rng = default_random_engine{seed};
    shuffle(begin(horse_names), end(horse_names), rng);

    vector<string> selected_horse_names;

    for(int i=0;i<3;i++){
        selected_horse_names.push_back(horse_names[i]);
    }
    for (string n: selected_horse_names){
        cout << n << endl;
    }


}
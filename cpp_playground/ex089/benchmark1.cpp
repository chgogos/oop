#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <chrono>
#include <random>
#include <sysinfoapi.h>

using namespace std;

int main(){

    vector<int> v(1000); 
    iota(v.begin(), v.end(), 1);
    auto t1 = GetTickCount();
    int sum =0;
    for(int i=0;i<10000;i++){
        unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
        shuffle(v.begin(), v.end(), default_random_engine(seed));
        sum += v[0];
    }
    auto elapsed_ms = GetTickCount() - t1;
    cout << "SUM=" << sum << " Time elapsed: " << elapsed_ms << "ms" <<  endl;


}
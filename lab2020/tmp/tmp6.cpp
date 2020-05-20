// δήλωση vector με 5 double
// υπολογισμός μέσου όρου και προσθήκη στο vector
// εμφάνιση του vector

#include <vector>
#include <list>
#include <iostream>

using namespace std;

int main(){
    list<double> v{2.1, 3.2, 5.3, 1.1, 7.3};
    double sum =0.0;
    for(auto x: v){
        sum += x;
    }
    v.push_front(sum/v.size());
    for(auto x: v){
        cout << x << " ";
    }
}
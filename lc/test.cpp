#include <iostream>

using namespace std;

class Cargo{
    private:
        int id;
        string destination;
        double weight;
        bool fragile;
    public:

        void show(){
            cout << "ID:" << id << " DESTINATION:" << destination << " WEIGHT:" << weight << " FRAGILE:" << fragile << endl; 
        }
};


int main(){
        Cargo c1;
        c1.show();
}
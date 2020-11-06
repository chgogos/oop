#include <iostream>

using namespace std;

class Cargo{
    private:
        int id;
        string destination;
        double weight;
        bool fragile;
    public:
        Cargo(): id(0), destination("UNDEFINED"), weight(.0), fragile(false) {}
        Cargo(int i, string d, double w, bool f): id(i), destination(d), weight(w), fragile(f) {}
        void show(){
            cout << "ID:" << id << " DESTINATION:" << destination << " WEIGHT:" << weight << " FRAGILE:" << fragile << endl; 
        }

        double get_weight(){
            return weight;
        }

        void set_weight(double w){
            weight = w;
        }
};

int main(){
        Cargo c1, c2(12345, "ATHENS", 1000, true);
        c1.show();
        c2.show();
}
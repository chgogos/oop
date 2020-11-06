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

        void make_safe(){
            if (fragile==false){
                weight = weight + 5;
            }
            fragile = true;
        }
};

int main(){
        Cargo c1, c2(12345, "ATHENS", 1000, false);
        c1.show();
        c2.show();
        c2.make_safe();
        c2.show();

    Cargo a[]={
        {1, "Patras", 1000, false},
        {2, "Athens", 200, true},
        {3, "Kalamata", 2000, false},
        {4, "Patras", 1500, true},
        {5, "Athens", 1100, false},
        };
    
    for(int i=0;i<5;i++){
        a[i].show();
    }

}
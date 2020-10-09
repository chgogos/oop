#include <iostream>

using namespace std;

class Rectangle {
    private:
        double width, height;
    public:
        // κατασκευαστής
        Rectangle(double w, double h){
            width=w;
            height=h;
        }

        double area() {
            return width*height;
        }
};


int main(){
    Rectangle obj1(20.5, 11.3);
    
    cout << obj1.area() << endl;
    
}
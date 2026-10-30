#include <iostream>
using namespace std;

struct circle{
    double center_x;
    double center_y;
    double radius;
};

double area(circle c){
    return 3.14*c.radius *c.radius;
}

int main(){
    circle c{0,0,7};
    double a = area(c);
    cout << "The area is " << a << endl;
}
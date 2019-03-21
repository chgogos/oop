#include <iostream>

class Shape {
    public:
        void draw(){
            std::cout << "drawing..." << std::endl;
        }
        void move() {
            std::cout << "moving..." << std::endl;
        }
};

class Circle : public  Shape {
};

class Triangle : public  Shape {

};

class Rectangle : public  Shape {
    
};

void play(Shape& s){
    s.draw();
    s.move();
    s.draw();
}

int main(){
    Circle c;
    Triangle t;
    Rectangle r;
    play(c);
    play(t);
    play(r);
    return 0;
}

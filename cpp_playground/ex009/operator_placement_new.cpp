#include <iostream>

struct Point {
    int x;
    int y;
};

class LineSegment {
    public:
        struct Point start;
        struct Point finish;
        LineSegment(int x1, int x2, int y1, int y2):start({x1,y1}), finish({x2,y2}){
            std::cout << "Constructor called " << std::endl;
        };
        ~LineSegment(){
            std::cout << "Destructor called " << std::endl;
        }
};

int main(){
    char buffer[1000];
    int *p1 = new (buffer) int; // memory allocation occurs on stack
    Point *p2 = new (buffer) Point; // memory allocation occurs on stack
    LineSegment *p3 = new (buffer) LineSegment(1,1,10,10); // memory allocation occurs on stack
    p3->~LineSegment(); // explicitly call destructor

    // memory is automatically deallocated from buffer, no deletes
}
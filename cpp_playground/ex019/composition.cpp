#include <iostream>

class Engine {
    private:
        int cylinders;
        double cubic_centimeters;
    public:
        // default constructor
        Engine() : Engine(8, 1200.0) {} // delegating construction (c++11)
        
        Engine(int c, double cc) : cylinders(c), cubic_centimeters(cc) {}
        
        void start(){
            std::cout << "Broom" << std::endl;
        }

        // overload << 
        friend std::ostream& operator<<(std::ostream &os, const Engine &e){
            os << "cylinders=" << e.cylinders << " cubic centimeters=" << e.cubic_centimeters;
            return os;
        }
};

class Car {
    private:
        int seats;
        Engine engine;
    public:
        Car() : seats(5), engine() {}

        void start() {
            engine.start();
        }

        void print(){
            std::cout << "Seats: " << seats << " " << engine << std::endl;
        }
};

int main(){
    Engine e;
    e.start();
    std::cout << e << std::endl;

    Car c;
    c.start();
    c.print();
}

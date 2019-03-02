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

class Car : private Engine {
    private:
        int seats;
    public:
        Car() : seats(5), Engine() {}

        // χρήση της συνάρτησης Engine::start σαν να πρόκειται για συνάρτηση της κλάσης Car
        using Engine::start; 

        void print(){
            std::cout << "Seats: " << seats << std::endl;
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

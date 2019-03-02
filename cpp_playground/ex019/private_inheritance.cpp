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
            std::string s="";
            for(int i=0;i<cylinders;i++)
                s += "o";
            std::cout << "Br" + s +  "m" << std::endl;
        }
};

class Car : private Engine {
    private:
        int seats;
    public:
        Car() : seats(5), Engine() {}

        // χρήση της συνάρτησης Engine::start σαν να πρόκειται για συνάρτηση της κλάσης Car
        using Engine::start; 
};

int main(){
    Car c;
    c.start();
}

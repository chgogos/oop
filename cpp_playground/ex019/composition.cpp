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

        // overload << for Engine objects  
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
        Car(int s, int c, double cc) : seats(s), engine(c,cc) {}

        void start() {
            engine.start();
        }

        void print(){
            std::cout << "seats: " << seats << " " << engine << std::endl;
        }

        // overload << for Car objects  
        friend std::ostream& operator<<(std::ostream& os, const Car& c){
            os << "seats: " << c.seats << " " << c.engine;
            return os;
        }
};

int main(){
    std::cout << "Engine object" << std::endl;
    Engine e;
    e.start();
    std::cout << e << std::endl;

    std::cout << "Car object" << std::endl;
    Car c1;
    c1.print();
    c1.start();

    std::cout << "Car object" << std::endl;
    Car c2(2, 16, 2000.0);
    std::cout << c2 << std::endl;
    c2.start();

    return 0;
}

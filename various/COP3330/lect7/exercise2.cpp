#include <iostream>
#include <string>
using namespace std;

class CPU {
private:
    string model;
    double speed;

public:
    CPU(string m, double s) : model(m), speed(s) {}

    void process() const {
        cout << "CPU " << model << " running at " << speed << " GHz is processing data..." << endl;
    }
};

class Computer {
private:
    string brand;
    int ram; 
    CPU& cpu; 

public:
    Computer(string b, int r, CPU& c) : brand(b), ram(r), cpu(c) {}

    void start() const {
        cout << "Starting computer " << brand << " with " << ram << "GB RAM..." << endl;
        cpu.process(); 
    }
};

int main() {
    CPU cpu1("Intel Core i7", 3.5);   
    {
        Computer myPC("Lenovo", 16, cpu1); 
        myPC.start();                  
    } // Το myPC καταστρέφεται εδώ, αλλά η cpu1 παραμένει

    cout << "Computer object destroyed, but the CPU still exists and works:" << endl;
    cpu1.process(); 

    return 0;
}

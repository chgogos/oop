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
        cout << "CPU " << model << " running at " 
        << speed << " GHz is processing data..." << endl;
    }
};

class Computer {
private:
    string brand;
    int ram;
    CPU cpu; 

public:
    Computer(string b, int r, string cpuModel, double cpuSpeed)
        : brand(b), ram(r), cpu(cpuModel, cpuSpeed) {}

    void start() const {
        cout << "Starting computer " << brand 
        << " with " << ram << "GB RAM..." << endl;
        cpu.process();
    }
};

int main() {
    Computer myPC("Lenovo", 16, "Intel Core i7", 3.5);
    myPC.start();

    return 0;
}

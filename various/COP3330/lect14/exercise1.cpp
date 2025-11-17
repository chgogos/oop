#include <iostream>
using namespace std;

class Device {
 protected:
  int serial;

 public:
  Device(int s) : serial(s) {
    cout << "Device constructed. Serial = " << serial << endl;
  }

  ~Device() { cout << "Device destroyed. Serial = " << serial << endl; }
};

class SmartDevice : public Device {
 private:
  int usage;

 public:
  SmartDevice(int s) : Device(s), usage(0) {
    cout << "SmartDevice constructed. Serial = " << serial
         << ", Usage = " << usage << endl;
  }

  ~SmartDevice() {
    cout << "SmartDevice destroyed. Serial = " << serial
         << ", Usage = " << usage << endl;
  }

  void increment() {
    usage++;
    cout << "increment() called. Serial = " << serial << ", Usage = " << usage
         << endl;
  }
};

int main() {
  Device d1(100);
  SmartDevice sd1(200);

  sd1.increment();

  return 0;
}

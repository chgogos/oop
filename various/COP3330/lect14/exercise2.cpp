#include <iostream>
#include <string>
using namespace std;

class Message {
 protected:
  string message;

 public:
  Message(const string& msg) : message(msg) {}

  void show() { cout << "General message: " << message << endl; }
};

class WarningMessage : public Message {
 public:
  WarningMessage(const string& msg) : Message(msg) {}

  void show() { cout << "Warning message: " << message << endl; }
};

int main() {
  Message m("System running normally.");
  WarningMessage wm("Low battery level.");

  m.show();
  wm.show();

  return 0;
}

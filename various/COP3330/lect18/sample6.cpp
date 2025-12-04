#include <iostream>
#include <string>
using namespace std;

class NegativeNumber {
 public:
  NegativeNumber() {};
  NegativeNumber(string theMessage) : message(theMessage) {};
  string getMessage() const { return message; }

 private:
  string message;
};

class DivideByZero {};

int main() {
  int i;

  for (i = -5; i < 5; i++) {
    try {
      if (i < 0)
        throw NegativeNumber("A negative number error");
      else if (i % 2 == 0)
        throw DivideByZero();
      else
        throw 0.5;
    } catch (NegativeNumber e) {
      cout << "get NegativeNumber exception no: " << e.getMessage() << endl;
    } catch (DivideByZero) {
      cout << "get DivideByZero exception\n";
    } catch (...) {
      cout << "get other exception\n";
    }
  }
}

/*
get NegativeNumber exception no: A negative number error
get NegativeNumber exception no: A negative number error
get NegativeNumber exception no: A negative number error
get NegativeNumber exception no: A negative number error
get NegativeNumber exception no: A negative number error
get DivideByZero exception
get other exception
get DivideByZero exception
get other exception
get DivideByZero exception
*/

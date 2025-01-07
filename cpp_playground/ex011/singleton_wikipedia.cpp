// https://en.wikipedia.org/wiki/Singleton_pattern
// C++23 implementation

import std;

class Singleton {
 public:
  // defines an class operation that lets clients access its unique instance.
  static Singleton& get() {
    // may be responsible for creating its own unique instance.
    if (nullptr == instance) instance = new Singleton;
    return *instance;
  }
  Singleton(const Singleton&) = delete;  // rule of three
  Singleton& operator=(const Singleton&) = delete;
  static void destruct() {
    delete instance;
    instance = nullptr;
  }
  // existing interface goes here
  int getValue() { return value; }
  void setValue(int value_) { value = value_; }

 private:
  Singleton() = default;       // no public constructor
  ~Singleton() = default;      // no public destructor
  static Singleton* instance;  // declaration class variable
  int value;
};

Singleton* Singleton::instance = nullptr;  // definition class variable

int main() {
  Singleton::get().setValue(42);
  std::println("value={}", Singleton::get().getValue());
  Singleton::destruct();
}
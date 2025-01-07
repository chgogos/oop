// https://en.wikipedia.org/wiki/Singleton_pattern
// An implementation of the Meyers singleton

import std;

class Singleton {
 public:
  static Singleton& get() {
    static Singleton instance;
    return instance;
  }
  int getValue() { return value; }
  void setValue(int value_) { value = value_; }

 private:
  Singleton() = default;
  ~Singleton() = default;
  int value;
};

int main() {
  Singleton::get().setValue(42);
  std::println("value={}", Singleton::get().getValue());
}
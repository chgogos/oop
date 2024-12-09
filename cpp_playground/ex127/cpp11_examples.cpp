// Based on "Modern C++ for absolute beginners"

#include <iostream>
#include <memory>
#include <thread>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>

using namespace std;

// class example used for demonstrating std::move, move constructor, move
// assignement operator, rule of 5
class MyClass {
 private:
  int* data;

 public:
  // Constructor
  MyClass(int value) {
    data = new int(value);
    std::cout << "Constructed MyClass with value " << *data << std::endl;
  }

  // Copy Constructor
  MyClass(const MyClass& other) {
    data = new int(*other.data);
    std::cout << "Copied MyClass with value " << *data << std::endl;
  }

  // Move Constructor
  MyClass(MyClass&& other) noexcept : data(other.data) {
    other.data = nullptr;  // Steal the resource and nullify the source
    std::cout << "Moved MyClass with value " << *data << std::endl;
  }

  // Copy Assignment Operator
  MyClass& operator=(const MyClass& other) {
    if (this == &other) return *this;  // Handle self-assignment
    delete data;                       // Clean up existing resource
    data = new int(*other.data);
    std::cout << "Assigned MyClass (copy) with value " << *data << std::endl;
    return *this;
  }

  // Move Assignment Operator
  MyClass& operator=(MyClass&& other) noexcept {
    if (this == &other) return *this;  // Handle self-assignment
    delete data;                       // Clean up existing resource
    data = other.data;                 // Steal the resource
    other.data = nullptr;              // Nullify the source
    std::cout << "Assigned MyClass (move) with value " << *data << std::endl;
    return *this;
  }

  // Destructor
  ~MyClass() {
    if (data) {
      std::cout << "Destroyed MyClass with value " << *data << std::endl;
    } else {
      std::cout << "Destroyed empty MyClass" << std::endl;
    }
    delete data;
  }

  int getValue() const { return data ? *data : 0; }
};

class MyClass2 {
 public:
  MyClass2() = default;  // avoids implicitly deletion of the constructor (since
                         // another constructor exists)
  MyClass2(const MyClass2& other)  // copy constructor explicitly defined
  {
    cout << "Copy constructor invoked" << endl;
  }
  MyClass2& operator=(const MyClass2& other) =
      delete;  // delete the implicitly generated copy assignment operator
};

int main() {
  cout << "1. Automatic type deduction" << endl;
  auto x = 42;
  cout << x << endl;

  cout << "2. Range based loops" << endl;
  for (auto x : {1, 2, 3, 4}) {
    cout << x << " ";
  }
  cout << endl;

  cout << "3. Initalizer list" << endl;
  int y{42};
  //   int z{3.14}; // error: type 'double' cannot be narrowed to 'int' in
  //   initializer list [-Wc++11-narrowing]
  vector<int> v{1, 2, 3, 4, 5};
  cout << y << endl;
  for (auto x : v) {
    cout << x << " ";
  }
  cout << endl;

  cout << "4. Move semantics" << endl;
  {
    MyClass obj1(10);                // Constructor
    MyClass obj2 = std::move(obj1);  // Move constructor
    MyClass obj3(20);                // Constructor
    obj3 = std::move(obj2);          // Move assignment operator

    std::cout << "obj1 value: " << obj1.getValue()
              << std::endl;  // Should output 0 (obj1 was moved)
    std::cout << "obj2 value: " << obj2.getValue()
              << std::endl;  // Should output 0 (obj2 was moved)
    std::cout << "obj3 value: " << obj3.getValue()
              << std::endl;  // Should output 10
  }

  cout << "5. Lambda expressions" << endl;
  cout << count_if(v.begin(), v.end(), [](int x) { return x % 2 == 0; })
       << endl;

  cout << "6. constexpr" << endl;
  constexpr double pi = 3.14;

  cout << "7. Scoped enumerators" << endl;
  enum class Colors { RED, GREEN, ORANGE };
  Colors color = Colors::RED;
  if (color == Colors::RED) {
    cout << "RED" << endl;
  }

  cout << "8. Smart pointers" << endl;
  unique_ptr<int> p1(new int(42));
  // unique_ptr<int> p2 = p1; // error p1 is a unique pointer
  cout << *p1 << endl;

  shared_ptr<int> p3(new int(42));
  shared_ptr<int> p4 = p3;
  *p3 = 55;
  cout << *p3 << " " << *p4 << endl;

  cout << "9. std::unordered_set" << endl;
  unordered_set<int> us = {1, 0, 3, 5, 8, 9};
  us.insert(7);
  us.insert(5);  // 5 already exists, it is not inserted again
  us.insert({0, 1, 2, 3, 4, 5, 6, 7, 8, 9});  // insert multiple values
  us.erase(5);
  for (auto x : us) {
    cout << x << " ";
  }
  cout << endl;

  cout << "10. std::unordered_map" << endl;
  unordered_map<string, int> um = {{"Alice", 21}, {"Bob", 30}, {"Charles", 15}};
  um.insert({"Donald", 40});
  um["Bob"] = 31;
  for (auto kv : um) {
    cout << kv.first << " " << kv.second << endl;
  }

  cout << "11. tuple" << endl;
  tuple<int, char, double> t{42, 'a', 3.14};
  cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << endl;

  cout << "12. static_assert" << endl;
  constexpr int z = 1023 + 1;
  static_assert(z == 1024, "OK");

  cout << "13. concurrency" << endl;
  thread t1{[](string msg) { cout << "Hello from " << msg << endl; },
            "thread 1"};
  thread t2{[](string msg) { cout << "Hello from " << msg << endl; },
            "thread 2"};
  cout << "Main thread" << endl;
  t1.join();
  t2.join();

  cout << "14. deleted, defaulted functions" << endl;
  MyClass2 obj;  // default constructor invoked (ok, since it is "defaulted")
  MyClass2 obj2 = obj;  // copy constructor invoked
  MyClass2 obj3;
  // obj3 = obj;  // assignment operator invoked (not ok, since it is "deleted")

  cout << "15. Type aliases" << endl;
  using vi = vector<int>;
  vi v2{1, 2, 3, 4, 5};
  for (auto x : v2) {
    cout << x << " ";
  }
  cout << endl;
}

/*
1. Automatic type deduction
42
2. Range based loops
1 2 3 4 
3. Initalizer list
42
1 2 3 4 5 
4. Move semantics
Constructed MyClass with value 10
Moved MyClass with value 10
Constructed MyClass with value 20
Assigned MyClass (move) with value 10
obj1 value: 0
obj2 value: 0
obj3 value: 10
Destroyed MyClass with value 10
Destroyed empty MyClass
Destroyed empty MyClass
5. Lambda expressions
2
6. constexpr
7. Scoped enumerators
RED
8. Smart pointers
42
55 55
9. std::unordered_set
6 4 2 7 9 8 3 0 1 
10. std::unordered_map
Donald 40
Charles 15
Bob 31
Alice 21
11. tuple
42 a 3.14
12. static_assert
13. concurrency
Hello from thread 1
Hello from thread 2
Main thread
14. deleted, defaulted functions
Copy constructor invoked
15. Type aliases
1 2 3 4 5 
*/
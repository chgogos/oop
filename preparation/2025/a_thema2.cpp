#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Recipe {
 protected:
  string title;
  string instructions;
  vector<string>* ptr_ingredients;

 public:
  Recipe(const string& t, const string& instr) : title(t), instructions(instr) {
    ptr_ingredients = new vector<string>();
  }

  void add_ingredient(const string& item) { ptr_ingredients->push_back(item); }

  Recipe(const Recipe& other)
      : title(other.title), instructions(other.instructions) {
    ptr_ingredients = new vector<string>();
    for (const auto& ing : *other.ptr_ingredients)
      ptr_ingredients->push_back(ing);
  }

  virtual ~Recipe() { delete ptr_ingredients; }
};

class Desert : public Recipe {
 private:
  int calories;

 public:
  Desert(const string& t, const string& instr, int cal)
      : Recipe(t, instr), calories(cal) {}

  Desert(const Desert& other) : Recipe(other), calories(other.calories) {}
};

int main() {
  Desert d("choco-banana", "Mix and serve.", 2500);
  d.add_ingredient("dark chocolate");
  d.add_ingredient("bananas");

  return 0;
}

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class person {
 private:
  string name;
  double weight;  // kilograms
  double height;  // meters

 public:
  person(string n, double w, double h) : name(n), weight(w), height(h) {}
  double get_BMI() const { return weight / (height * height); }
  string get_category() const {
    double bmi = get_BMI();
    if (bmi <= 18.5) {
      return "underweight";
    } else if (bmi <= 24.9) {
      return "normal";
    } else if (bmi <= 29.9) {
      return "overweight";
    } else {
      return "obese";
    }
  }
  bool operator<(const person &other) const { return name < other.name; }

  friend ostream &operator<<(ostream &os, const person &p) {
    os << p.name << " [" << p.weight << "," << p.height << "]";
    return os;
  }
};

int main() {
  vector<person> v;
  v.push_back({"nikos", 90.5, 1.82});
  v.push_back({"andreas", 100.7, 1.72});
  v.push_back({"petros", 60.5, 1.85});

  cout << "Sorted by name" << endl;
  sort(v.begin(), v.end());
  for (const auto &p : v) {
    cout << p << " " << p.get_BMI() << " " << p.get_category() << endl;
  }

  cout << "Sorted by BMI" << endl;
  sort(v.begin(), v.end(), [](const person &p1, const person &p2) {
    return p1.get_BMI() < p2.get_BMI();
  });
  for (auto it = v.begin(); it != v.end(); ++it) {
    cout << *it << " " << it->get_BMI() << " " << it->get_category() << endl;
  }
}

/*
Sorted by name
andreas [100.7,1.72] 34.0387 obese
nikos [90.5,1.82] 27.3216 overweight
petros [60.5,1.85] 17.6771 underweight
Sorted by BMI
petros [60.5,1.85] 17.6771 underweight
nikos [90.5,1.82] 27.3216 overweight
andreas [100.7,1.72] 34.0387 obese
*/

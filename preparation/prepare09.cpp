#include <algorithm>
#include <iostream>
#include <ostream>
#include <vector>

using namespace std;

class rectangle {
 private:
  double width;
  double height;

 public:
  rectangle(double w, double h) : width(w), height(h) {}
  double area() const { return width * height; }
  bool operator<(const rectangle &other) const { return area() < other.area(); }
  friend ostream &operator<<(ostream &os, const rectangle &r) {
    os << "with:" << r.width << " height:" << r.height << " area:" << r.area();
    return os;
  }
};

int main() {
  vector<rectangle> v{{7., 1.3}, {3.2, 2.2}, {5.1, 5.}, {2.7, 3.3}, {6.1, 1.2}};
  double sum = 0.0;
  for (rectangle r : v) {
    sum += r.area();
  }
  cout << "1. TOTAL AREA=" << sum << endl;

  cout << "2. SORT BY AREA" << endl;
  sort(v.begin(), v.end());
  for (rectangle r : v) {
    cout << r << endl;
  }
  cout << "3. SORT BY AREA DESC" << endl;
  sort(v.begin(), v.end(),
       [](rectangle r1, rectangle r2) { return r1.area() > r2.area(); });
  for (rectangle r : v) {
    cout << r << endl;
  }
  cout << "4. COUNT RECTANGLES HAVING AREA > AVG AREA" << endl;
  int c = 0;
  for (rectangle r : v) {
    if (r.area() > sum / v.size()) {
      c++;
    }
  }
  cout << c << endl;
}

/*
1. TOTAL AREA=57.87
2. SORT BY AREA
with:3.2 height:2.2 area:7.04
with:6.1 height:1.2 area:7.32
with:2.7 height:3.3 area:8.91
with:7 height:1.3 area:9.1
with:5.1 height:5 area:25.5
3. SORT BY AREA DESC
with:5.1 height:5 area:25.5
with:7 height:1.3 area:9.1
with:2.7 height:3.3 area:8.91
with:6.1 height:1.2 area:7.32
with:3.2 height:2.2 area:7.04
4. COUNT RECTANGLES HAVING AREA > AVG AREA
1
*/

#include <iostream>
#include <vector>
using namespace std;

class Histogram {
  vector<double> limits;
  vector<int> counts;

 public:
  Histogram(const vector<double>& lim)
      : limits(lim), counts(lim.size() - 1, 0) {}

  void insert(double x) {
    for (size_t i = 0; i < limits.size() - 1; ++i) {
      double a = limits[i];
      double b = limits[i + 1];

      if (x >= a && x < b) {
        counts[i]++;
        return;
      }
    }
  }

  void print() const {
    for (size_t i = 0; i < counts.size(); ++i) {
      cout << "[" << limits[i] << ", " << limits[i + 1] << ")";
      cout << ": " << counts[i] << endl;
    }
  }

  void clear() { fill(counts.begin(), counts.end(), 0); }
};

int main() {
  vector<double> bins = {0.0, 5.0, 10.0, 15.0, 20.0};
  Histogram h(bins);

  cout << "Enter 10 values:\n";
  for (int i = 0; i < 10; ++i) {
    double x;
    cin >> x;
    h.insert(x);
  }

  cout << "\nHistogram results:\n";
  h.print();

  return 0;
}

#include <algorithm>
#include <iostream>
#include <limits>
#include <vector>

struct Athlete {
  std::string name;
  double time;

  Athlete(std::string n, double t) : name(n), time(t) {}
};

double calculateMinDifference(const std::vector<Athlete> &athletes) {
  double minDifference = std::numeric_limits<double>::infinity();
  for (size_t i = 0; i < athletes.size(); ++i) {
    for (size_t j = i + 1; j < athletes.size(); ++j) {
      double diff = std::abs(athletes[i].time - athletes[j].time);
      if (diff < minDifference) {
        minDifference = diff;
      }
    }
  }
  return minDifference;
}

int main() {
  std::vector<Athlete> athletes;

  for (int i = 0; i < 5; ++i) {
    std::string name;
    double time;
    std::cout << "Enter the name of athlete " << i + 1 << ": ";
    std::cin >> name;
    std::cout << "Enter the time (in seconds) for " << name << ": ";
    std::cin >> time;
    athletes.push_back(Athlete(name, time));
  }

  std::sort(athletes.begin(), athletes.end(),
            [](const Athlete &a, const Athlete &b) { return a.time < b.time; });

  std::cout << "\nTop 3 athletes with the best times:\n";
  for (int i = 0; i < 3; ++i) {
    std::cout << athletes[i].name << " with time: " << athletes[i].time
              << " seconds\n";
  }

  double minDifference = calculateMinDifference(athletes);
  std::cout << "\nThe smallest time difference between two athletes is: "
            << minDifference << " seconds\n";

  return 0;
}

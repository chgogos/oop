#include <deque>
#include <iostream>
#include <limits>

int main() {
  std::deque<double> temps;
  double value;
  while (true) {
    std::cout << "Enter temperature (Ctrl+D stops): ";
    if (!(std::cin >> value)) {
      if (std::cin.eof()) {
        std::cout << "\nEnd of input\n";  // Ctrl+D για Linux,
                                           // Ctrl+Z και Enter για Windows
        break;
      }
      std::cin.clear();  // για μη έγκυρη είσοδο
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      std::cout << "Invalid input, please enter a number.\n";
      continue;
    }
    temps.push_back(value);
    if (temps.size() > 5) temps.pop_front();
    std::cout << "Current deque: ";
    for (double t : temps) std::cout << t << " ";
    std::cout << std::endl;
  }
  if (!temps.empty()) {
    double sum = 0.0;
    for (double t : temps) sum += t;
    double avg = sum / temps.size();
    std::cout << "Average of last " << temps.size() << " measurements: " << avg
              << std::endl;
  } else {
    std::cout << "No measurements entered." << std::endl;
  }
  return 0;
}

#include <algorithm>
#include <chrono>
#include <ctime>
#include <iostream>
#include <thread>
#include <utility>
#include <vector>

using namespace std::rel_ops;

class Task {
 private:
  int priority;
  std::time_t timestamp;

 public:
  Task(int p) : priority(p), timestamp(std::time(nullptr)) {}

  bool operator<(const Task& other) const { return priority < other.priority; }

  bool operator==(const Task& other) const {
    return priority == other.priority;
  }

  void print() const {
    std::cout << "Priority: " << priority << ", Timestamp: " << timestamp
              << '\n';
  }
};

int main() {
  std::vector<Task> tasks;

  for (int priority : {3, 5, 2, 5, 1}) {
    Task a_task = Task(priority);
    tasks.push_back(a_task);
    std::this_thread::sleep_for(std::chrono::seconds(1));
    a_task.print();
  }

  std::sort(tasks.begin(), tasks.end());

  std::cout << "Ταξινομημένες εργασίες:\n";
  for (const auto& t : tasks) t.print();

  return 0;
}

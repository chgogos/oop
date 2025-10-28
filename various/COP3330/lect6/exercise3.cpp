#include <algorithm>
#include <chrono>
#include <ctime>
#include <iostream>
#include <thread>
#include <utility>
#include <vector>

using namespace std::rel_ops;
using namespace std;

class Task {
 private:
  int priority;
  time_t timestamp;

 public:
  Task(int p) : priority(p), timestamp(time(nullptr)) {}

  bool operator<(const Task& other) const {
    if (priority != other.priority) return priority < other.priority;
    return timestamp < other.timestamp;
  }

  bool operator==(const Task& other) const {
    return priority == other.priority && timestamp == other.timestamp;
  }

  void print() const {
    cout << "Task(priority=" << priority << ", timestamp=" << timestamp
         << ')\n';
  }

  friend ostream& operator<<(ostream& os, const Task& t) {
    os << "Task(priority=" << t.priority << ", timestamp=" << t.timestamp
       << ")";
    return os;
  }
};

int main() {
  vector<Task> tasks;
  for (int priority : {3, 5, 2, 5, 1}) {
    Task a_task = Task(priority);
    tasks.push_back(a_task);
    std::this_thread::sleep_for(std::chrono::seconds(1));
    a_task.print();
  }
  sort(tasks.begin(), tasks.end());
  cout << "Ταξινομημένες εργασίες:\n";
  for (const auto& t : tasks) {
    // t.print();
    cout << t << endl;
  };

  return 0;
}

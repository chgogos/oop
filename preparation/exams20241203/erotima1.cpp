#include <iostream>
using namespace std;

class Pomodoro {
 private:
  int workDuration;
  int breakDuration;
  bool isCompleted;

 public:
  Pomodoro() : workDuration(25), breakDuration(5), isCompleted(false) {}

  int getWorkDuration() const { return workDuration; }

  void setWorkDuration(int duration) { workDuration = duration; }

  void markComplete() { isCompleted = true; }

  friend ostream& operator<<(ostream& os, const Pomodoro& p) {
    os << "Pomodoro: Work Duration = " << p.workDuration
       << " mins, Break Duration = " << p.breakDuration
       << " mins, Completed = " << (p.isCompleted ? "Yes" : "No");
    return os;
  }
};

int main() {
  Pomodoro p;
  p.setWorkDuration(15);
  p.markComplete();
  cout << p << endl;
  return 0;
}

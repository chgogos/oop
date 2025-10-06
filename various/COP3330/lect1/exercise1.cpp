#include <iomanip>  // για setw και setfill
#include <iostream>

using namespace std;

class Clock {
 public:
  int hour, min, sec;

  void set_hour_min_sec(int h, int m, int s) {
    hour = h;
    min = m;
    sec = s;
  }

  void reset() {
    hour = 0;
    min = 0;
    sec = 0;
  }

  void tick() {
    sec++;
    if (sec >= 60) {
      sec = 0;
      min++;
      if (min >= 60) {
        min = 0;
        hour++;
        if (hour >= 24) hour = 0;
      }
    }
  }

  void display() {
    cout << setfill('0') << setw(2) << hour << ":" << setw(2) << min << ":"
         << setw(2) << sec << endl;
  }
};

int main() {
  Clock c;

  c.set_hour_min_sec(12, 0, 0);

  for (int i = 0; i < 5000; i++) c.tick();

  cout << "Μετά από 5000 δευτερόλεπτα: ";
  c.display();

  c.reset();
  cout << "Μετά το reset: ";
  c.display();

  return 0;
}

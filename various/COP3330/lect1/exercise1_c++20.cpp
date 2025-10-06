#include <format>
#include <iostream>

class Clock {
 public:
  int hour{}, min{}, sec{};
  void set_hour_min_sec(int h, int m, int s) {
    hour = h;
    min = m;
    sec = s;
  }
  void reset() { hour = min = sec = 0; }
  void tick() {
    if (++sec == 60) {
      sec = 0;
      if (++min == 60) {
        min = 0;
        if (++hour == 24) hour = 0;
      }
    }
  }
  void display() {
    std::cout << std::format("{:02d}:{:02d}:{:02d}\n", hour, min, sec);
  }
};

int main() {
  Clock c;
  c.set_hour_min_sec(12, 0, 0);
  for (int i = 0; i < 5000; ++i) c.tick();
  std::cout << "Μετά από 5000 δευτερόλεπτα: ";
  c.display();
  c.reset();
  std::cout << "Μετά το reset: ";
  c.display();
  return 0;
}

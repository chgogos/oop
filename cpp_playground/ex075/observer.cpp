#include <iostream>
#include <string>
#include <vector>

class listener {
 public:
  virtual void on_event(std::string msg) = 0;
};

class publisher {
 private:
  std::vector<listener*> listeners;

 public:
  void add_listener(listener* lp) { listeners.push_back(lp); }

  void publish_event(std::string msg) {
    for (listener* lp : listeners) {
      lp->on_event(msg);
    }
  }
};

class listener1 : public listener {
 public:
  listener1(publisher& p) { p.add_listener(this); }

  void on_event(std::string msg) {
    std::cout << "type 1 listener received message: " << msg << std::endl;
  }
};

class listener2 : public listener {
 public:
  listener2(publisher& p) { p.add_listener(this); }

  void on_event(std::string msg) {
    std::cout << "type 2 listener received message: " << msg << std::endl;
  }
};

int main() {
  publisher a_publisher;
  listener1* l1p1 = new listener1(a_publisher);
  listener1* l1p2 = new listener1(a_publisher);
  listener2* l2p1 = new listener2(a_publisher);

  a_publisher.publish_event("something happened");
  a_publisher.publish_event("something happened again");

  delete l1p1;
  delete l1p2;
  delete l2p1;
}

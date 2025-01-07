// https://en.wikipedia.org/wiki/Observer_pattern#C++

#include <functional>
#include <iostream>
#include <list>

class Subject;  // Forward declaration for usage in Observer

class Observer {
 public:
  explicit Observer(Subject& subj);
  virtual ~Observer();

  Observer(const Observer&) = delete;  // rule of three
  Observer& operator=(const Observer&) = delete;

  virtual void update(Subject& s) const = 0;

 private:
  // Reference to a Subject object to detach in the destructor
  Subject& subject;
};

// Subject is the base class for event generation
class Subject {
 public:
  using RefObserver = std::reference_wrapper<const Observer>;

  // Notify all the attached obsevers
  void notify() {
    for (const auto& x : observers) {
      x.get().update(*this);
    }
  }

  // Add an observer
  void attach(const Observer& observer) { observers.push_front(observer); }

  // Remove an observer
  void detach(Observer& observer) {
    observers.remove_if([&observer](const RefObserver& obj) {
      return &obj.get() == &observer;
    });
  }

 private:
  std::list<RefObserver> observers;
};

Observer::Observer(Subject& subj) : subject(subj) { subject.attach(*this); }

Observer::~Observer() { subject.detach(*this); }

// Example of usage
class ConcreteObserver : public Observer {
 public:
  ConcreteObserver(Subject& subj) : Observer(subj) {}

  // Get notification
  void update(Subject&) const override {
    std::cout << "Got a notification" << std::endl;
  }
};

int main() {
  Subject cs;
  ConcreteObserver co1(cs);
  ConcreteObserver co2(cs);
  cs.notify();
}
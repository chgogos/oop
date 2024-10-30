#include <iostream>
#include <string>

class Engine {
public:
  Engine(const std::string &type) : type(type) {
    std::cout << "Engine of type " << type << " created.\n";
  }

  ~Engine() { std::cout << "Engine of type " << type << " destroyed.\n"; }

  void start() const { std::cout << "Engine " << type << " started.\n"; }

private:
  std::string type;
};

// Strong containment: η μηχανή θα καταστραφεί με την καταστροφή του αυτοκινήτου
class Car {
public:
  Car(const std::string &type) : engine(type) {
    std::cout << "Car created with strong containment.\n";
  }

  ~Car() { std::cout << "Car destroyed with strong containment.\n"; }

  void start() { engine.start(); }

private:
  Engine engine; // Strong containment: Το αυτοκίνητο έχει στην ιδιοκτησία του
                 // τη μηχανή
};

// Weak containment: Το γκαράζ απλά διατηρεί μια αναφορά προς ένα εξωτερικό
// αυτοκίνητο
class Garage {
public:
  Garage(Car *carPtr) : car(carPtr) {
    std::cout << "Garage created with weak containment of Car.\n";
  }

  ~Garage() { std::cout << "Garage destroyed with weak containment of Car.\n"; }

  void startCar() const {
    if (car) {
      car->start();
    } else {
      std::cout << "No car found in Garage.\n";
    }
  }

private:
  Car *car; // Weak containment: Το γκαράζ δεν έχει στην ιδιοκτησία του το
            // αυτοκίνητο
};

int main() {
  std::cout << "=== Strong Containment ===\n";
  {
    Car car("V8");
    car.start();
  } // Το αυτοκίνητο και η μηχανή βγαίνουν εκτός εμβέλειας και καταστρέφονται σε
    // αυτό το σημείο

  std::cout << "=== Creating Car ===\n";
  Car *externalCar = new Car("Sedan"); // Δυναμική δέσμευη αντικειμένου Car, δεν
                                       // ανήκει σε αντικείμενο Garage

  std::cout << "\n=== Weak Containment in Garage ===\n";
  {
    Garage garage(externalCar);
    garage.startCar();
  } // Το αντικείμενο Garage βγαίνει εκτός εμβέλειας, αλλά το αντικείμενο
    // externalCar εξακολουθεί να υπάρχει

  std::cout << "\n=== Car persists after Garage destruction ===\n";
  externalCar->start();

  // Χειροκίνητος τρόπος διαγραφής του αντικειμένου externalCar
  delete externalCar;

  return 0;
}

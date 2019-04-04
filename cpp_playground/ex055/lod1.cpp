#include <iostream>

// παραβίαση του Law of Demeter
// Ο Driver έχει πρόσβαση μέσω του Car στο Engine και μέσω του Engine στο Ignition και στο FuelPump
// Η μέθοδος Driver::drive "πρέπει να γνωρίζει πολλά" για την εσωτερική λειτουργία της
// μηχανής του αυτοκινήτου

class Ignition
{

  public:
    Ignition()
    {
        std::cout << "Ignition created" << std::endl;
    }
    void start()
    {
        std::cout << "Ignition started" << std::endl;
    }
};

class FuelPump
{

  public:
    FuelPump()
    {
        std::cout << "FuelPump created" << std::endl;
    }
    void start()
    {
        std::cout << "FuelPump started" << std::endl;
    }
};

class Engine
{
  private:
    Ignition &ignition;
    FuelPump &fuelPump;

  public:
    Engine(Ignition &ign, FuelPump &fp) : ignition(ign), fuelPump(fp)
    {
        std::cout << "Engine created" << std::endl;
    }
    Ignition &getIginition()
    {
        return ignition;
    }
    FuelPump &getFuelPump()
    {
        return fuelPump;
    }
};

class Car
{
  private:
    Engine &engine;

  public:
    Car(Engine &eng) : engine(eng)
    {
        std::cout << "Car created" << std::endl;
    }
    Engine &getEngine()
    {
        return engine;
    }
};

class Driver
{

  public:
    Driver()
    {
        std::cout << "Driver created" << std::endl;
    }
    // δεν υπάρχει λόγος ο οδηγός να χρειάζεται να γνωρίζει αυτές
    // τις λεπτομέρειες για την εκκίνηση του αυτοκινήτου
    void drive(Car &car)
    {
        Engine &engine = car.getEngine();
        Ignition &ignition = engine.getIginition();
        FuelPump &fuelPump = engine.getFuelPump();
        ignition.start();
        fuelPump.start();
    }
};

int main()
{
    Ignition an_ignition;
    FuelPump a_fuel_pump;
    Engine an_engine(an_ignition, a_fuel_pump);
    Car a_car(an_engine);

    Driver a_driver;
    a_driver.drive(a_car);

    return 0;
}

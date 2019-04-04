#include <iostream>

// Εφαρμογή της αρχής Law of Demeter στο lod1.cpp

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

class Engine
{
private:
  Ignition &ignition;
  FuelPump &fuel_pump;

public:
  Engine(Ignition &ign, FuelPump &fp) : ignition(ign), fuel_pump(fp)
  {
    std::cout << "Engine created" << std::endl;
  }
  void start()
  {
    ignition.start();
    fuel_pump.start();
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
  void start()
  {
    engine.start();
  }
};

class Driver
{
public:
  Driver()
  {
    std::cout << "Driver created" << std::endl;
  }
  void drive(Car &car)
  {
    car.start();
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
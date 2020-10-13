# wxWidgets

## Εγκατάσταση του wxWidgets σε macosx

    $ brew install wxmac

## Hello World GUI app

Παράθυρο με μενού

* [hello_world.cpp](./hello_world.cpp)

    $ g++ hello_world.cpp  `wx-config --cxxflags --libs` -o hello_world
    $ ./hello_world
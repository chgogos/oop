# Αντικειμενοστραφής Προγραμματισμός (OOP=Object Oriented Programming) με χρήση της C++

    Πανεπιστήμιο Ιωαννίνων - Τμήμα Πληροφορικής και Τηλεπικοινωνιών
    Γκόγκος Χρήστος

## Παραδείγματα κώδικα

* Παράδειγμα χρήσης δείκτη, διεύθυνσης μεταβλητής και αποαναφοράς (dereference) του δείκτη [pointers1.cpp](./cpp_playground/ex001/pointers1.cpp)
* Δείκτες σε void [pointers2.cpp](./cpp_playground/ex001/pointers2.cpp) :fire:
* Δέσμευση και αποδέσμευση μνήμης στην C [dynamic1.cpp](./cpp_playground/ex001/dynamic1.cpp)
* Στατικοί και δυναμικοί πίνακες στην C [dynamic2.cpp](./cpp_playground/ex001/dynamic2.cpp)
* Δέσμευση και αποδέσμευση μνήμης στην C++ [dynamic3.cpp](./cpp_playground/ex001/dynamic3.cpp)
* Αναφορές (references) [references.cpp](./cpp_playground/ex001/references.cpp)
* Κλήση με τιμή (call by value), κλήση με αναφορά (call by reference) [calls.cpp](./cpp_playground/ex001/calls.cpp)
* Παράδειγμα απλής κλάσης (μόνο με δημόσια μέλη) και διάσπασης του κώδικα σε header και source αρχεία [Rectangle.h](./cpp_playground/ex002/Rectangle.h), [Rectangle.cpp](./cpp_playground/ex002/Rectangle.cpp), [Main.cpp](./cpp_playground/ex002/Main.cpp)
* Ενθυλάκωση, ορισμός ιδιωτικών (private) μελών [Main.cpp](./cpp_playground/ex003/Main.cpp)
* Η χρήση του const σε δηλώσεις μεταβλητών αντικειμένων και σε συναρτήσεις μέλη κλάσεων [Main.cpp](./cpp_playground/ex004/Main.cpp)

## Βασικές αρχές OOP

* Αφαίρεση (abstraction)
* Ενθυλάκωση (encapsulation)
* Πολυμορφισμός (polymorphism)
* Κληρονομικότητα (inheritance)

## Βέλτιστες πρακτικές

* DRY (Don't Repeat Yourself)
* YAGNI (You Ain't Gonna Need It)

## Λογισμικά

* Μεταγλωττιστές για την C++
  * gcc
  * clang
  
* Visual Studio Code (Microsoft)

    ```console
    # Ctrl + P (quick open)
    ext install ms-vscode.cpptools
    ext install formulahendry.code-runner
    # Ctrl + , (settings dialog)
    Extensions > Run Code configuration Here
        Run in Terminal: enable
        Save All Files Before Run: enable
    Ctrl + Alt + N => compiles and executes current file
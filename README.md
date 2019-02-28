# Αντικειμενοστραφής Προγραμματισμός (OOP=Object Oriented Programming) με χρήση της C++

    Πανεπιστήμιο Ιωαννίνων - Τμήμα Πληροφορικής και Τηλεπικοινωνιών
    Γκόγκος Χρήστος

## Live coding

* [2019-02-18](./lc/live_coding_20190218.cpp)
* [2019-02-22](./lc/live_coding_20190222.cpp)
* [2019-02-25](./lc/live_coding_20190225.cpp)

## Παραδείγματα κώδικα

* Παράδειγμα χρήσης δείκτη, διεύθυνσης μεταβλητής και αποαναφοράς (dereference) του δείκτη [pointers1.cpp](./cpp_playground/ex001/pointers1.cpp)
* Δείκτες σε void [pointers2.cpp](./cpp_playground/ex001/pointers2.cpp) :fire:
* Δέσμευση και αποδέσμευση μνήμης στην C [dynamic1.cpp](./cpp_playground/ex001/dynamic1.cpp)
* Στατικοί και δυναμικοί πίνακες στην C [dynamic2.cpp](./cpp_playground/ex001/dynamic2.cpp)
* Δέσμευση και αποδέσμευση μνήμης στην C++ [dynamic3.cpp](./cpp_playground/ex001/dynamic3.cpp)
* Αναφορές (references) [references.cpp](./cpp_playground/ex001/references.cpp)
* Κλήση με τιμή (call by value), κλήση με αναφορά (call by reference) [calls.cpp](./cpp_playground/ex001/calls.cpp)
* Παράδειγμα απλής κλάσης (μόνο με δημόσια μέλη) [Main.cpp](./cpp_playground/ex002/Main.cpp)
* Διάσπαση κώδικα σε header και source αρχεία [Rectangle.h](./cpp_playground/ex003/Rectangle.h), [Rectangle.cpp](./cpp_playground/ex003/Rectangle.cpp), [Main.cpp](./cpp_playground/ex003/Main.cpp)
* Ενθυλάκωση, ορισμός ιδιωτικών (private) μελών, κατασκευαστές (constructors), προκαθορισμένος κατασκευαστής [Main.cpp](./cpp_playground/ex004/Main.cpp)
* Η χρήση του const σε δηλώσεις μεταβλητών αντικειμένων και σε συναρτήσεις μέλη κλάσεων [Main.cpp](./cpp_playground/ex005/Main.cpp)
* Κατασκευαστής με default τιμή παραμέτρου, το παράδειγμα μιας στοίβας [Stack.cpp](./cpp_playground/ex007/Stack.cpp)
* Copy constructor (shallow vs deep copy)
  * [copy_constructor1.cpp](./cpp_playground/ex010/copy_constructor1.cpp) shallow copy και copy assignment
  * [copy_constructor2.cpp](./cpp_playground/ex010/copy_constructor2.cpp) deep copy και copy assignment
* Στατικά μέλη κλάσεων [static_example1.cpp](./cpp_playground/ex013/static_example1.cpp)
* Singleton design pattern [Singleton.cpp](./cpp_playground/ex011/Singleton.cpp)
* Φίλες (friend) συναρτήσεις [friend_function1.cpp](./cpp_playground/ex012/friend_function1.cpp) και φίλες κλάσεις [friend_class1.cpp](./cpp_playground/ex012/friend_class1.cpp)
* Κληρονομικότητα [Person.h](./cpp_playground/ex006/Person.h), [Person.cpp](./cpp_playground/ex006/Person.cpp), [Student.h](./cpp_playground/ex006/Student.h), [Main.cpp](./cpp_playground/ex006/Main.cpp)
<!-- 
* Χώροι ονομάτων (namespaces)
* Δείκτες σε συναρτήσεις 
* -->

## Βασικές αρχές OOP

* Αφαίρεση (abstraction)
* Ενθυλάκωση (encapsulation)
* Πολυμορφισμός (polymorphism)
* Κληρονομικότητα (inheritance)

## Βέλτιστες πρακτικές

* DRY (Don't Repeat Yourself)
* YAGNI (You Ain't Gonna Need It)

## Παρουσιάσεις

* [Modern C++ Object-Oriented Programming -  Margit ANTAL 2018](./ma2018/CPP_v1.1.pdf)

## Ενδιαφέρουσες σελίδες

* <https://isocpp.org/get-started>
* <https://isocpp.org/std/status>

## Λογισμικά

* Μεταγλωττιστές για την C++
  * Visual C++ 2017 Community Edition <https://visualstudio.microsoft.com/vs/features/cplusplus/>
  * gcc <https://gcc.gnu.org/>
    * <http://www.mingw.org/>
    * <http://tdm-gcc.tdragon.net/>
  * clang <http://clang.llvm.org/get_started.html>
  
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
# Αντικειμενοστραφής Προγραμματισμός (OOP=Object Oriented Programming) με χρήση της C++

    Πανεπιστήμιο Ιωαννίνων - Τμήμα Πληροφορικής και Τηλεπικοινωνιών
    Γκόγκος Χρήστος - Άρτα@2019

[ΟΡΓΑΝΩΣΗ ΜΑΘΗΜΑΤΟΣ ΕΑΡΙΝΟ 2018-2019](./resources/oop_spring_2018_2019.pdf)

    τελευταία ενημέρωση: 14/3/2019

## Live coding

|ΔΕΥΤΕΡΑ|ΠΑΡΑΣΚΕΥΗ|
|---------------------------------------------|---------------------------------------------|
| [2019-02-18](./lc/live_coding_20190218.cpp) | [2019-02-22](./lc/live_coding_20190222.cpp) |
| [2019-02-25](./lc/live_coding_20190225.cpp) | [2019-03-01a](./lc/live_coding_20190301a.cpp), [2019-03-01b](./lc/live_coding_20190301b.cpp), [2019-03-01c](./lc/live_coding_20190301c.cpp)|
| [2019-03-04a](./lc/live_coding_20190304a.cpp), [2019-03-04b](./lc/live_coding_20190304b.cpp)  |  |
| | [2019-03-15](./lc/live_coding_20190315.cpp) |
| | |

## Παραδείγματα κώδικα

* Παράδειγμα χρήσης δείκτη, διεύθυνσης μεταβλητής και αποαναφοράς (dereference) του δείκτη [pointers1.cpp](./cpp_playground/ex001/pointers1.cpp)
* Δείκτες σε void [pointers2.cpp](./cpp_playground/ex001/pointers2.cpp)
* Δέσμευση και αποδέσμευση μνήμης στην C [dynamic1.cpp](./cpp_playground/ex001/dynamic1.cpp)
* Στατικοί και δυναμικοί πίνακες στην C [dynamic2.cpp](./cpp_playground/ex001/dynamic2.cpp)
* Δέσμευση και αποδέσμευση μνήμης στην C++ [dynamic3.cpp](./cpp_playground/ex001/dynamic3.cpp)
* Δισδιάστατοι πίνακες
  * Δισδιάστατος πίνακας δεδομένων διαστάσεων ως παράμετρος πίνακα [matrix1.cpp](./cpp_playground/ex001/matrix1.cpp)
  * Δισδιάστατος πίνακας δυναμικών διαστάσεων ως παράμετρος πίνακα [matrix2a.cpp](./cpp_playground/ex001/matrix2a.cpp), [matrix2b.cpp](./cpp_playground/ex001/matrix2b.cpp)
* Αναφορές (references) [references.cpp](./cpp_playground/ex001/references.cpp)
* Κλήση με τιμή (call by value), κλήση με αναφορά (call by reference) [calls.cpp](./cpp_playground/ex001/calls.cpp)
* Παράδειγμα απλής κλάσης (μόνο με δημόσια μέλη) [Main.cpp](./cpp_playground/ex002/Main.cpp)
* Διάσπαση κώδικα σε header και source αρχεία [Rectangle.h](./cpp_playground/ex003/Rectangle.h), [Rectangle.cpp](./cpp_playground/ex003/Rectangle.cpp), [Main.cpp](./cpp_playground/ex003/Main.cpp)
* Ενθυλάκωση, ορισμός ιδιωτικών (private) μελών, κατασκευαστές (constructors), καταστροφέας (destructor), προκαθορισμένος κατασκευαστής [Main.cpp](./cpp_playground/ex004/Main.cpp)
* Η χρήση του const σε δηλώσεις μεταβλητών αντικειμένων και σε συναρτήσεις μέλη κλάσεων [Main.cpp](./cpp_playground/ex005/Main.cpp)
* Κατασκευαστής με default τιμή παραμέτρου, το παράδειγμα μιας στοίβας [Stack.cpp](./cpp_playground/ex007/Stack.cpp)
* Copy constructor (shallow vs deep copy)
  * [copy_constructor1.cpp](./cpp_playground/ex010/copy_constructor1.cpp) shallow copy
  * [copy_constructor2.cpp](./cpp_playground/ex010/copy_constructor2.cpp) deep copy και copy assignment
* "Αόρατες" αντιγραφές κατά την κλήση συναρτήσεων [copies.cpp](./cpp_playground/ex020/copies.cpp)
* Η χρήση του static στη C [static1.cpp](./cpp_playground/ex013/static1.cpp)
* Στατικά μέλη κλάσεων
  * [static_example1.cpp](./cpp_playground/ex013/static_example1.cpp)
  * [static_example2.cpp](./cpp_playground/ex013/static_example2.cpp) (πρόσβαση με static συνάρτηση στα ιδιωτικά μέλη κλάσης)
* Singleton design pattern [Singleton.cpp](./cpp_playground/ex011/Singleton.cpp)
* Φίλες (friend) συναρτήσεις [friend_function1.cpp](./cpp_playground/ex012/friend_function1.cpp) και φίλες κλάσεις [friend_class1.cpp](./cpp_playground/ex012/friend_class1.cpp)
* Απλό παράδειγμα TDD (Test Driven Development) με το [catch2](https://github.com/catchorg/Catch2)
  * [Rectangle.hpp](./cpp_playground/ex014/Rectangle.hpp), [TestRectangle.cpp](./cpp_playground/ex014/TestRectangle.cpp)
* Υπερφόρτωση τελεστών (το παράδειγμα του δυαδικού τελεστή +)
  * Υπερφόρτωση τελεστή + με χρήση καθολικής συνάρτησης [operator_overload1.cpp](./cpp_playground/ex015/operator_overload1.cpp)
  * Υπερφόρτωση τελεστή + με χρήση friend συνάρτησης [operator_overload3.cpp](./cpp_playground/ex015/operator_overload3.cpp)
  * Υπερφόρτωση τελεστή + με χρήση συνάρτησης μέλους [operator_overload2.cpp](./cpp_playground/ex015/operator_overload2.cpp)
* Υπερφόρτωση τελεστών εισόδου/εξόδου
  * Υπερφόρτωση τελεστή << και τελεστή >> με χρήση friend συναρτήσεων [io_operator_overload1.cpp](./cpp_playground/ex016/io_operator_overload1.cpp)
* Μετατροπή αντικειμένου σε λεκτικό [person_to_string.cpp](./cpp_playground/ex016/person_to_string.cpp)
* Παράδειγμα υπερφόρτωσης τελεστών (+, <<, >>) και μετατροπής αντικειμένου σε λεκτικό για την κλάση myTime [my_time.cpp](./cpp_playground/ex028/my_time.cpp)
* Χώροι ονομάτων (namespaces) [namespaces1.cpp](./cpp_playground/ex017/namespaces1.cpp)
* Κληρονομικότητα
  * [inheritance1.cpp](./cpp_playground/ex018/inheritance1.cpp)
  * [inheritance2.cpp](./cpp_playground/ex018/inheritance2.cpp)
  * [inheritance3.cpp](./cpp_playground/ex018/inheritance3.cpp)
  * [inheritance4.cpp](./cpp_playground/ex018/inheritance4.cpp)
  * [inheritance5.cpp](./cpp_playground/ex018/inheritance5.cpp)
* Παράδειγμα κληρονομικότητας (σχέση ISA) [Person.h](./cpp_playground/ex006/Person.h), [Person.cpp](./cpp_playground/ex006/Person.cpp), [Student.h](./cpp_playground/ex006/Student.h), [Main.cpp](./cpp_playground/ex006/Main.cpp)
* Παράδειγμα σύνθεσης - composition (σχέση HAS) [composition.cpp](./cpp_playground/ex019/composition.cpp)
* Upcasting / Downcasting
  * [casting1.cpp](./cpp_playground/ex021/casting1.cpp)
* Static binding vs dynamic binding (virtual συναρτήσεις)
  * [binding1.cpp](./cpp_playground/ex021/casting1.cpp)
* Virtual destructors
  * [virtual_destructor.cpp](./cpp_playground/ex021/virtual_destructor.cpp)
* Παραδείγματα πολυμορφικής ιεραρχίας, pure virtual functions, abstract classes 
  * [shapes.cpp](./cpp_playground/ex022/shapes.cpp)
  * [university1.cpp](./cpp_playground/ex023/university1.cpp)
* Casting
  * [const_cast1.cpp](./cpp_playground/ex024/const_cast1.cpp), [const_cast2.cpp](./cpp_playground/ex024/const_cast2.cpp)
* Inline συναρτήσεις (απλές και συναρτήσεις μέλη)
  * [inline1.cpp](./cpp_playground/ex025/inline1.cpp)
* Πίνακας δεικτών προς αντικείμενα [arrays_of_pointers.cpp](./cpp_playground/ex026/arrays_of_pointers.cpp)
  
<!-- 
* Δείκτες σε συναρτήσεις 
  * [university2.c](./cpp_playground/ex023/university2.c)
* -->

## Βασικές αρχές OOP

* Αφαίρεση (abstraction)
* Ενθυλάκωση (encapsulation)
* Πολυμορφισμός (polymorphism)
* Κληρονομικότητα (inheritance)

## Βέλτιστες πρακτικές

* [Software Engineering Institute CERT C++ Coding Standard](https://wiki.sei.cmu.edu/confluence/pages/viewpage.action?pageId=88046682)
* Rule of three
  * <https://www.geeksforgeeks.org/rule-of-three-in-cpp/>
* Rule of five
* DRY (Don't Repeat Yourself)
* YAGNI (You Ain't Gonna Need It)
  * <https://martinfowler.com/bliki/Yagni.html>

## Σημειώσεις - Συγγράμματα

* [Δομές δεδομένων και αλγόριθμοι με τη C++, Γκόγκος Χρήστος](https://github.com/chgogos/ceteiep_dsa/raw/master/ceteiep_dsa_book.pdf)
* [Εισαγωγή στη γλώσσα προγραμματισμού C++14, Σταμάτης Σταματιάδης](https://www.materials.uoc.gr/el/undergrad/courses/ETY215/notes.pdf)

## Παρουσιάσεις

* [Modern C++ Object-Oriented Programming -  Margit ANTAL 2018](./ma2018/CPP_v1.1.pdf)
* Programming in C++ — The C++ Language, Libraries, Tools, and Other Topics by Michael Adams, Department of Electrical and Computer Engineering University of Victoria
  * [2019-02-04.pdf](https://www.ece.uvic.ca/~frodo/cppbook/downloads/lecture_slides_for_programming_in_c++-2019-02-04.pdf)
* [C++ for C programmers - Duncan Mac-Vicar P.](https://en.opensuse.org/images/b/b9/C---for-C-programmers.pdf)

## Ενδιαφέρουσες σελίδες

* <https://isocpp.org/get-started>
* <https://isocpp.org/std/status>

## Online C++ compilers

* [C++ shell](http://cpp.sh/)
* [coliru](http://coliru.stacked-crooked.com/)
* [compile c++ gcc online](https://rextester.com/l/cpp_online_compiler_gcc)
* [repl.it](https://repl.it/languages/cpp)

## Εξάσκηση στη C++

* <https://exercism.io>
* <https://leetcode.com/>
* <https://open.kattis.com/>
* <https://github.com/LegalizeAdulthood/cpp-koans>

## Λογισμικά - βιβλιοθήκες - εργαλεία

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

* Catch2 (A modern, C++-native, header-only, test framework for unit-tests, TDD and BDD ...)
  * <https://github.com/catchorg/Catch2>

* fmt (Small, safe and fast formatting library)
  * <http://fmtlib.net/latest/index.html>

* CMAKE (An open-source, cross-platform family of tools designed to build, test and package software)
  * <https://cmake.org/>
  * <https://github.com/pr0g/cmake-examples>

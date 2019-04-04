# Αντικειμενοστραφής Προγραμματισμός (OOP=Object Oriented Programming) με χρήση της C++

    Πανεπιστήμιο Ιωαννίνων - Τμήμα Πληροφορικής και Τηλεπικοινωνιών
    Γκόγκος Χρήστος - Άρτα@2019

[ΟΡΓΑΝΩΣΗ ΜΑΘΗΜΑΤΟΣ ΕΑΡΙΝΟ 2018-2019](./resources/oop_spring_2018_2019.pdf)

    τελευταία ενημέρωση: 1/4/2019

## Live coding

|ΔΕΥΤΕΡΑ|ΠΑΡΑΣΚΕΥΗ|
|---------------------------------------------|---------------------------------------------|
| [2019-02-18](./lc/live_coding_20190218.cpp) | [2019-02-22](./lc/live_coding_20190222.cpp) |
| [2019-02-25](./lc/live_coding_20190225.cpp) | [2019-03-01a](./lc/live_coding_20190301a.cpp), [2019-03-01b](./lc/live_coding_20190301b.cpp), [2019-03-01c](./lc/live_coding_20190301c.cpp)|
| [2019-03-04a](./lc/live_coding_20190304a.cpp), [2019-03-04b](./lc/live_coding_20190304b.cpp)  |  |
| | [2019-03-15](./lc/live_coding_20190315.cpp) |
| [2019-03-18](./lc/live_coding_20190318.cpp) | [2019-03-22a](./lc/live_coding_20190322a.cpp), [2019-03-22b](./lc/live_coding_20190322b.cpp)|
|  | [2019-03-29](./lc/live_coding_20190329.cpp) |
| [2019-04-01a](./lc/live_coding_20190401a.cpp), [2019-04-01b](./lc/live_coding_20190401b.cpp) |  |

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
* Απαριθμήσεις - enumerations
  * [enum1.cpp](./cpp_playground/ex030/enum1.cpp) παλιό στυλ
  * [enum2.cpp](./cpp_playground/ex030/enum2.cpp) νέο στυλ - enum classes
* Παράδειγμα απλής κλάσης (μόνο με δημόσια μέλη) [Main.cpp](./cpp_playground/ex002/Main.cpp)
* Διάσπαση κώδικα σε header και source αρχεία [Rectangle.h](./cpp_playground/ex003/Rectangle.h), [Rectangle.cpp](./cpp_playground/ex003/Rectangle.cpp), [Main.cpp](./cpp_playground/ex003/Main.cpp)
* Ενθυλάκωση, ορισμός ιδιωτικών (private) μελών, κατασκευαστές (constructors), καταστροφέας (destructor), προκαθορισμένος κατασκευαστής [Main.cpp](./cpp_playground/ex004/Main.cpp)
* Η χρήση του const
  * [const1.cpp](./cpp_playground/ex005/const1.cpp) const σε αναφορές βασικών τύπων δεδομένων
  * [const2.cpp](./cpp_playground/ex005/const2.cpp) const σε αναφορές αντικειμένων
  * [const3.cpp](./cpp_playground/ex005/const3.cpp) const σε δείκτες
  * [const4.cpp](./cpp_playground/ex005/const4.cpp) const σε δηλώσεις μεταβλητών αντικειμένων και σε συναρτήσεις μέλη κλάσεων
  * [const5.cpp](./cpp_playground/ex005/const4.cpp) const σε αναφορές που επιστρέφουν συναρτήσεις μέλη
* Κατασκευαστής με default τιμή παραμέτρου, το παράδειγμα μιας στοίβας [Stack.cpp](./cpp_playground/ex007/Stack.cpp)
* Copy constructor (shallow vs deep copy)
  * [copy_constructor1.cpp](./cpp_playground/ex010/copy_constructor1.cpp) shallow copy
  * [copy_constructor2.cpp](./cpp_playground/ex010/copy_constructor2.cpp) deep copy και copy assignment
* "Αόρατες" αντιγραφές κατά την κλήση συναρτήσεων [copies.cpp](./cpp_playground/ex020/copies.cpp)
* Λίστα αρχικοποίησης (initializer list)
  * [initializer_list1.cpp](./cpp_playground/ex044/initializer_list1.cpp)
* Η χρήση του static στη C [static1.c](./cpp_playground/ex013/static1.c)
* Στατικά μέλη κλάσεων
  * [static_example1.cpp](./cpp_playground/ex013/static_example1.cpp)
  * [static_example2.cpp](./cpp_playground/ex013/static_example2.cpp) (πρόσβαση με static συνάρτηση στα ιδιωτικά μέλη κλάσης)
* Φίλες (friend) συναρτήσεις [friend_function1.cpp](./cpp_playground/ex012/friend_function1.cpp) και φίλες κλάσεις [friend_class1.cpp](./cpp_playground/ex012/friend_class1.cpp)
* Απλό παράδειγμα TDD (Test Driven Development) με το [catch2](https://github.com/catchorg/Catch2)
  * [Rectangle.hpp](./cpp_playground/ex014/Rectangle.hpp), [TestRectangle.cpp](./cpp_playground/ex014/TestRectangle.cpp)
* Υπερφόρτωση τελεστών (το παράδειγμα του δυαδικού τελεστή +)
  * Υπερφόρτωση τελεστή + με χρήση καθολικής συνάρτησης [operator_overload1.cpp](./cpp_playground/ex015/operator_overload1.cpp)
  * Υπερφόρτωση τελεστή + με χρήση συνάρτησης μέλους [operator_overload2.cpp](./cpp_playground/ex015/operator_overload2.cpp)
  * Υπερφόρτωση τελεστή + με χρήση friend συνάρτησης [operator_overload3.cpp](./cpp_playground/ex015/operator_overload3.cpp)
* Υπερφόρτωση τελεστών εισόδου/εξόδου
  * Υπερφόρτωση τελεστή << (inserter) και τελεστή >> (extractor) με χρήση friend συναρτήσεων [io_operator_overload1.cpp](./cpp_playground/ex016/io_operator_overload1.cpp)
* Μετατροπή αντικειμένου σε λεκτικό [person_to_string.cpp](./cpp_playground/ex016/person_to_string.cpp)
* Παράδειγμα υπερφόρτωσης τελεστών (+, <<, >>) και μετατροπής αντικειμένου σε λεκτικό για την κλάση myTime [my_time.cpp](./cpp_playground/ex028/my_time.cpp)
* Χώροι ονομάτων (namespaces) [namespaces1.cpp](./cpp_playground/ex017/namespaces1.cpp)
* Εμφωλιασμός κλάσης σε κλάση (nesting) [nested1.cpp](./cpp_playground/ex048/nested1.cpp)
* Κληρονομικότητα
  * [inheritance1.cpp](./cpp_playground/ex018/inheritance1.cpp)
  * [inheritance2.cpp](./cpp_playground/ex018/inheritance2.cpp) keyword protected
  * [inheritance3.cpp](./cpp_playground/ex018/inheritance3.cpp) overload και override
  * [inheritance4.cpp](./cpp_playground/ex018/inheritance4.cpp) κλήση constructors και destructors
  * [inheritance5.cpp](./cpp_playground/ex018/inheritance5.cpp) overload και απόκρυψη συνάρτησης γονέα
* Το keyword override
  * [override.cpp](./cpp_playground/ex049/override.cpp)
* Το keyword final
  * [final1.cpp](./cpp_playground/ex049/final1.cpp) final συνάρτηση μέλος κλάσης
  * [final2.cpp](./cpp_playground/ex049/final2.cpp) final κλάση
* Παράδειγμα κληρονομικότητας (σχέση ISA) [Person.h](./cpp_playground/ex006/Person.h), [Person.cpp](./cpp_playground/ex006/Person.cpp), [Student.h](./cpp_playground/ex006/Student.h), [Main.cpp](./cpp_playground/ex006/Main.cpp)
* Παράδειγμα σύνθεσης - composition (σχέση HAS) [composition.cpp](./cpp_playground/ex019/composition.cpp)
* Upcasting (μετατροπή μιας αναφοράς ή ενός δείκτη μιας κληρονομούμενης κλάσης στην κλάση γονέα) / Downcasting (μετατροπή μιας αναφοράς ή ενός δείκτη της κλάσης γονέα σε κληρονομούμενη κλάση, το downcasting δεν επιτρέπεται αν δεν υπάρχει explicit type cast)
  * [upcasting_downcasting1.cpp](./cpp_playground/ex021/upcasting_downcasting1.cpp)
  * [upcasting1.cpp](./cpp_playground/ex021/upcasting1.cpp)
  * [downcasting1.cpp](./cpp_playground/ex021/downcasting1.cpp)
* Static binding vs dynamic binding (virtual συναρτήσεις)
  * [binding1.cpp](./cpp_playground/ex021/binding1.cpp)
* Virtual destructors
  * [virtual_destructor.cpp](./cpp_playground/ex021/virtual_destructor.cpp)
* Παραδείγματα πολυμορφικής ιεραρχίας, pure virtual functions, abstract classes
  * [shapes.cpp](./cpp_playground/ex022/shapes.cpp)
  * [university1.cpp](./cpp_playground/ex023/university1.cpp)
* Casting
  * [const_cast1.cpp](./cpp_playground/ex024/const_cast1.cpp), [const_cast2.cpp](./cpp_playground/ex024/const_cast2.cpp)
  * [static_cast1.cpp](./cpp_playground/ex024/static_cast1.cpp)
  * [dynamic_cast1.cpp](./cpp_playground/ex024/dynamic_cast1.cpp)
* Inline συναρτήσεις (απλές και συναρτήσεις μέλη)
  * [inline1.cpp](./cpp_playground/ex025/inline1.cpp)
* Πίνακας δεικτών προς αντικείμενα [arrays_of_pointers.cpp](./cpp_playground/ex026/arrays_of_pointers.cpp)
* Πολλαπλή κληρονομικότητα (multiple inheritance)
  * [multiple_inheritance1.cpp](./cpp_playground/ex036/multiple_inheritance1.cpp)
  * [multiple_inheritance2.cpp](./cpp_playground/ex036/multiple_inheritance2.cpp) επίλυση συγκρούσεων σε μέλη δεδομένων και σε μέλη συναρτήσεις
  * [virtual_inheritance1.cpp](./cpp_playground/ex037/virtual_inheritance1.cpp)
  * [virtual_inheritance2.cpp](./cpp_playground/ex037/virtual_inheritance2.cpp)
* Σύζευξη (coupling)
  * [tight_coupling1.cpp](./cpp_playground/ex034/tight_coupling1.cpp) ισχυρή σύζευξη :-1:
  * [tight_coupling2.cpp](./cpp_playground/ex034/tight_coupling2.cpp) ισχυρή σύζευξη :-1:
  * [loose_coupling.cpp](./cpp_playground/ex034/loose_coupling.cpp) χαλαρή σύζευξη
* Πλειάδες - tuples [tuple1.cpp](./cpp_playground/ex032/tuple1.cpp), [tuple2.cpp](./cpp_playground/ex032/tuple2.cpp)
* std::to_string [to_string.cpp](./cpp_playground/ex033/to_string.cpp)
* Παραδείγματα χρήσης της βιβλιοθήκης fmt
  * [fmt1.cpp](./cpp_playground/ex027/fmt1.cpp)
  * [fmt2.cpp](./cpp_playground/ex027/fmt2.cpp)
* Εξαιρέσεις (exceptions)
  * [exception1.c](./cpp_playground/ex038/exception1.c) asserts
  * [exception2.cpp](./cpp_playground/ex038/exception2.cpp)
  * [exception3.cpp](./cpp_playground/ex038/exception3.cpp)
  * [exception4.cpp](./cpp_playground/ex038/exception4.cpp)
* Πρότυπα (templates)
  * [template1.cpp](./cpp_playground/ex039/template1.cpp)
  * [template2.cpp](./cpp_playground/ex039/template2.cpp)
  * [template3.cpp](./cpp_playground/ex039/template3.cpp)
* Παράδειγμα class template
  * [stack.hpp](./cpp_playground/ex040/stack.hpp)
  * [reverse_string.cpp](./cpp_playground/ex040/reverse_string.cpp) χρήση της στοίβας για αντιστροφή συμβολοσειράς
  * [postfix_evaluation.cpp](./cpp_playground/ex040/postfix_evaluation.cpp) χρήση της στοίβας για υπολογισμό postfix έκφρασης ψηφίων και τελεστών +,-,*,/
* Smart pointers
  * [unique_pointer1.cpp](./cpp_playground/ex041/unique_pointer1.cpp)
  * [shared_pointer1.cpp](./cpp_playground/ex041/shared_pointer1.cpp)
  * [weak_pointer1.cpp](./cpp_playground/ex041/weak_pointer1.cpp)
* Implicit conversions με βάση τους constructors μιας κλάσης και η χρήση του explicit
  * [implicit_conversion1.cpp](./cpp_playground/ex042/implicit_conversion1.cpp)
  * [explicit1.cpp](./cpp_playground/ex042/explicit1.cpp)
* Xρονομέτρηση κώδικα με το chrono
  * [timing1.cpp](./cpp_playground/ex043/timing1.cpp)
* RTTI (RunTime Type Information)
  * [rtti1.cpp](./cpp_playground/ex051/rtti1.cpp) type introspection
* Παράδειγμα εφαρμογής του Liskov Substitution Principle (LSP)
  * [lsp1.cpp](./cpp_playground/ex050/lsp1.cpp) παραβίαση της αρχής LSP :confused:
  * [lsp2.cpp](./cpp_playground/ex050/lsp2.cpp) LSP
  * [lsp3.cpp](./cpp_playground/ex050/lsp3.cpp) LSP
* Παράδειγμα εφαρμογής Interface Segregation Principle (ISP)
  * [isp1.cpp](./cpp_playground/ex052/isp1.cpp) παραβίαση της αρχής ISP :confused:
  * [isp2.cpp](./cpp_playground/ex052/isp2.cpp) ISP
* Παράδειγμα κυκλικής εξάρτησης (circular dependency) και επίλυση με forward declaration
  * [account.hpp](./cpp_playground/ex053/account.hpp), [customer.hpp](./cpp_playground/ex053/customer.hpp), [circular_dependency.cpp](./cpp_playground/ex053/circular_dependency.hpp) :confused:
* Παράδειγμα εφαρμογής του Dependency Inversion Principle (DIP)
  * [owner.hpp](./cpp_playground/ex054/owner.hpp), [account.hpp](./cpp_playground/ex054/account.hpp), [customer.hpp](./cpp_playground/ex054/customer.hpp), [dependency_inversion.cpp](./cpp_playground/ex054/dependency_inversion.cpp) 
* Standard Template Library
  * [stl_algorithm1.cpp](./cpp_playground/ex046/stl_algorithm1.cpp)
  * [stl_algorithm2.cpp](./cpp_playground/ex046/stl_algorithm2.cpp)

<!-- 
* Δείκτες σε συναρτήσεις 
  * [university2.c](./cpp_playground/ex023/university2.c)
* -->

## Design Patterns

* Creational
  * Singleton [Singleton.cpp](./cpp_playground/ex011/Singleton.cpp)

<!-- 
  * Factory
  * Builder
* Structural
  * Adapter
  * Bridge
  * Composite
  * Decorator
  * Facade
  * Flyweight
* Behavioral
  * Chain of responsibility
  * Command
  * Mediator
  * Observer
  * State
  * Strategy
-->

## Βασικές αρχές OOP

* Αφαίρεση (abstraction)
* Ενθυλάκωση (encapsulation)
* Πολυμορφισμός (polymorphism)
* Κληρονομικότητα (inheritance)

## Βέλτιστες πρακτικές

* S.O.L.I.D. principles
  * Single Responsibility Principle (SRP). Κάθε μονάδα λογισμικού (π.χ. συναρτήσεις, κλάσεις) πρέπει να έχει μια μόνο καλά ορισμένη υπευθυνότητα.
    * <https://hackernoon.com/you-dont-understand-the-single-responsibility-principle-abfdd005b137>
  * Open-Closed Principle (OCP). Κάθε μονάδα λογισμικού (π.χ. συναρτήσεις, κλάσεις) πρέπει να είναι ανοικτή για επέκταση (να μπορούν να προστίθενται νέες δυνατότητες) και κλειστή για αλλαγές (ο κώδικας που έχει ήδη γραφεί να μην χρειάζεται να τροποποιηθεί προκειμένου να ενσωματώσει τις επεκτάσεις).
    * <https://hackernoon.com/the-open-closed-principle-c3dc45419784>
  * Liskov Substitution Principle (LSP). Τα αντικείμενα ενός προγράμματος θα πρέπει να μπορούν να αντικατασταθούν από στιγμιότυπα υποκλάσεων χωρίς να παραβιάζεται η ορθότητα του προγράμματος. Οι συναρτήσεις που χρησιμοποιούν δείκτες ή αναφορές σε βασικές κλάσεις (Base) θα πρέπει να είναι σε θέση να χρησιμοποιούν αντικείμενα της παραγόμενης κλάσης (Derived) χωρίς να γνωρίζουν ότι έχουν  να κάνουν με τέτοια αντικείμενα.
    * <https://hackernoon.com/liskov-substitution-principle-a982551d584a>
  * Interface Segregation Principle (ISP). Κανείς πελάτης ενός interface δεν θα πρέπει να εξαναγκάζεται να εξαρτάται από μεθόδους που δεν χρησιμοποιεί.
    * <https://hackernoon.com/interface-segregation-principle-bdf3f94f1d11>
  * Dependency Inversion Principle (DIP). Τα υψηλού επιπέδου τμήματα λογισμικού δεν θα πρέπει να στηρίζονται σε χαμηλού επιπέδου λεπτομέρειες. Τα τμήματα λογισμικού σε όλα τα επίπεδα ιεραρχίας θα πρέπει να στηρίζονται σε αφαιρέσεις.
    * <https://hackernoon.com/dependency-inversion-principle-e402e5b69e70>
* DRY (Don't Repeat Yourself). Η επανάληψη του ίδιου κώδικα σε διάφορα σημεία προκαλεί προβλήματα στη συντήρηση του λογισμικού.
* YAGNI (You Ain't Gonna Need It). Θα πρέπει να υλοποιούνται οι απαραίτητες λειτουργίες και μόνο αυτές.
  * <https://martinfowler.com/bliki/Yagni.html>
* Law of Demeter (αρχή της ελάχιστης δυνατής γνώσης).
* Information Hiding (απόκρυψη πληροφορίας). Ένα τμήμα κώδικα Α που καλεί ένα τμήμα κώδικα Β δεν θα πρέπει να "γνωρίζει" εσωτερικά θέματα της λειτουργίας του Β.

### Βέλτιστες πρακτικές στη C++

* Rule of three (αν μια κλάση ορίζει destructor, τότε θα πρέπει να ορίζει copy constructor και copy assignment operator)
  * <https://www.geeksforgeeks.org/rule-of-three-in-cpp/>
* Rule of five (αν μια κλάση ορίζει destructor, τότε θα πρέπει να ορίζει copy constructor, copy assignment operator, move constructor και move assignment operator)
* Rule of zero (οι κλάσεις θα πρέπει να γράφονται με τέτοιο τρόπο έτσι ώστε να μην χρειάζεται destructor, copy constructor, copy assignment operator, move constructor, move assignment operator, αλλά να χρησιμοποιούνται smart pointers και containers της STL για την αυτόματη διαχείριση των πόρων)

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

## Coding styles

* [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html)
* [C++ Coding Standards](https://gist.github.com/lefticus/10191322)
* [Software Engineering Institute CERT C++ Coding Standard](https://wiki.sei.cmu.edu/confluence/pages/viewpage.action?pageId=88046682)
* <https://www.cs.northwestern.edu/academics/courses/211/html/c++-style.html>
* <https://web.cs.dal.ca/~jin/3132/assignments/style.html>

## Test Driven Development

* [Catch2](https://github.com/catchorg/Catch2)
* [CppUnit](http://cppunit.sourceforge.net/doc/cvs/cppunit_cookbook.html)
* [Boost.Test](https://www.boost.org/doc/libs/1_69_0/libs/test/doc/html/index.html)
* [CUTE](https://cute-test.com/)
* [Google Test](https://github.com/google/googletest)

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

# Εργασίες παλαιότερων ετών

## Εργασία 1 (λογαριασμός τράπεζας)

* [Εκφώνηση (pdf)](./lab2020/exercise1/20200217_assignment1.pdf)

**Λύση εργασίας**

* [account_bank.hpp](./lab2020/exercise1_solution2/account_bank.hpp)
* [account_bank.cpp](./lab2020/exercise1_solution2/account_bank.cpp)
* [main.cpp](./lab2020/exercise1_solution2/main.cpp)
* [tests.cpp](./lab2020/exercise1_solution2/tests.cpp)
* Οδηγίες μεταγλώττισης και εκτέλεσης: [readme.txt](./lab2020/exercise1_solution2/readme.txt)

## Εργασία 2 (πράξεις με μιγαδικούς αριθμούς και γραφικό περιβάλλον διεπαφής)

Α) Γράψτε ένα πρόγραμμα που να υλοποιεί την κλάση μιγαδικός αριθμός (Complex) και να παρέχει την ακόλουθη λειτουργικότητα. 

* Επιστροφή συζυγούς (conjugate) μιγαδικού (συνάρτηση μέλος conj)
* Επιστροφή του μέτρου (magnitude) μιγαδικού (συνάρτηση μέλος abs)
* Yπερφόρτωση του τελεστή +  
* Υπερφόρτωση του τελεστή -
* Υπερφόρτωση του τελεστή *
* Υπερφόρτωση του τελεστή /
* Υπερφόρτωση του τελεστή ==
* Υπερφόρτωση του τελεστή !=
* Υπερφόρτωση του τελεστή << 
* Ύψωση μιγαδικού σε ακέραια δύναμη
* Κατασκευαστής αντιγραφής

Πληροφορίες για τους μιγαδικούς και τις πράξεις με αυτούς μπορείτε να βρείτε στο διαδίκτυο.

Β) Ελέγξτε όλες τις λειτουργίες της κλάσης με unit tests της βιβλιοθήκης catch2 και με τη χρήση της κλάσης std::complex που ορίζεται στο αρχείο επικεφαλίδας <complex>. Δείτε το <https://en.cppreference.com/w/cpp/numeric/complex> και το <https://github.com/catchorg/Catch2>.

Γ) Δημιουργήστε ένα GUI (Graphical User Interface) χρησιμοποιώντας το framework wxWidgets <https://www.wxwidgets.org/>. To GUI να δίνει τη δυνατότητα στο χρήστη να συμπληρώσει τα στοιχεία 2 μιγαδικών αριθμών και να επιτρέπει τη διενέργεια των πράξεων πρόσθεση, αφαίρεση, πολλαπλασιασμός και διαίρεση, πατώντας πλήκτρα σε μια γραφική διεπαφή. 

---

Δίνεται κώδικας που παρέχει μια αρχική υλοποίηση της κλάσης Complex που περιέχει την υπερφόρτωση του τελεστή + και την υπερφόρτωση του τελεστή <<.  Επιπλέον δίνεται ένα παράδειγμα unit test για τον έλεγχο λειτουργίας του τελεστή +. Ο κώδικας μπορεί να χρησιμοποιηθεί ως βάση έναρξης της εργαστηριακής άσκησης. 

* [catch.hpp](./lab2020-2021/lab2020f_ex2/catch.hpp)
* [Complex.hpp](./lab2020-2021/lab2020f_ex2/Complex.hpp)
* [Complex.cpp](./lab2020-2021/lab2020f_ex2/Complex.cpp)
* [Tests.cpp](./lab2020-2021/lab2020f_ex2/Tests.cpp)
* [Main.cpp](./lab2020-2021/lab2020f_ex2/Main.cpp)

Οι εντολές μεταγλώττισης και εκτέλεσης των unit tests είναι:


    $ g++ Complex.cpp Tests.cpp -o Tests -std=c++14
    $ ./Tests
    ===============================================================================
    All tests passed (4 assertions in 1 test case)

Οι εντολές μεταγλώττισης και εκτέλεσης του προγράμματος οδηγού είναι:

    $ g++ Complex.cpp Main.cpp -o Main -std=c++14 
    $ Main.exe
    5 + 3i
    2 - 4i
    7 - 1i

Ένα παράδειγμα της ζητούμενης γραφικής διεπαφής είναι το [mockup_GUI.png](./lab2020-2021/lab2020f_ex2_sol/mockup_GUI.png).

**Λύση εργασίας**

* [catch.hpp](./lab2020-2021/lab2020f_ex2_sol/catch.hpp)
* [Complex.hpp](./lab2020-2021/lab2020f_ex2_sol/Complex.hpp)
* [Complex.cpp](./lab2020-2021/lab2020f_ex2_sol/Complex.cpp)
* [Main.cpp](./lab2020-2021/lab2020f_ex2_sol/Main.cpp)
* [speedup.cpp](./lab2020-2021/lab2020f_ex2_sol/speedup.cpp)
* [Tests.cpp](./lab2020-2021/lab2020f_ex2_sol/Tests.cpp)
* [BaseFrame.hpp](./lab2020-2021/lab2020f_ex2_sol/BaseFrame.hpp)
* [BaseFrame.cpp](./lab2020-2021/lab2020f_ex2_sol/BaseFrame.cpp)
* [GUI.cpp](./lab2020-2021/lab2020f_ex2_sol/GUI.cpp)

**Μεταγλώττιση και εκτέλεση του Console app**

    $ g++ Complex.cpp Main.cpp -o Main -std=c++14
    Example of operator<<
    5 + 3i
    Conjugate
    5 - 3i
    Magnitude
    5.83095
    Example of operator+
    7 - 1i
    Example of operator-
    3 + 7i
    Example of operator*
    22 - 14i
    Example of operator/
    -0.1 + 1.3i
    Example of operator==
    NOT EQUAL
    Example of operator!=
    EQUAL
    Example of raising a complex number to a positive integer power
    122 - 597i
    Example of raising a complex number to a negative integer power
    0.000328581 + 0.00160789i

**Μεταγλώττιση και εκτέλεση των Tests**

Για επιτάχυνση της μεταγλώττισης των tests

    $ g++ -c speedup.cpp -o speedup.o -std=c++14

Μεταγλώττιση και εκτέλεση των tests

    $ g++ Complex.cpp Tests.cpp speedup.o -o Tests -std=c++14
    $ Tests.exe                                                     
    ===============================================================================
    All tests passed (21 assertions in 9 test cases)                               

**Μεταγλώττιση και εκτέλεση του GUI app**

Εντολές μεταγλώττισης και εκτέλεσης (το wxWidgets έχει εγκατασταθεί στο C:\wxWidgets-3.1.4)

    $ g++ Complex.cpp Baseframe.cpp GUI.cpp -IC:\\wxWidgets-3.1.4\\include -IC:\\wxWidgets-3.1.4\\lib\\gcc_dll\\mswu -LC:\\wxWidgets-3.1.4\\lib\\gcc_dll -lwxmsw31u_core -lwxbase31u -o GUI
    $ GUI.exe

[GUI.png](./lab2020-2021/lab2020f_ex2_sol/GUI.png)


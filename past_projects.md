# Εργασίες παλαιότερων ετών

## Εργασία 1 (λογαριασμός τράπεζας)

* [Εκφώνηση (pdf)](./lab2020/exercise1/20200217_assignment1.pdf)

**Λύση εργασίας**

* [account_bank.hpp](./lab2020/exercise1_solution2/account_bank.hpp)
* [account_bank.cpp](./lab2020/exercise1_solution2/account_bank.cpp)
* [main.cpp](./lab2020/exercise1_solution2/main.cpp)
* [tests.cpp](./lab2020/exercise1_solution2/tests.cpp)
* Οδηγίες μεταγλώττισης και εκτέλεσης: [readme.txt](./lab2020/exercise1_solution2/readme.txt)

### Εργασία 2

Χρησιμοποιήστε τη γλώσσα C++ για να υλοποιήσετε μια έκδοση του παιχνιδιού “rock paper scissors” που να εκτελείται από τη γραμμή εντολών και στην οποία οι αντίπαλοι να είναι ο χρήστης του προγράμματος και ο υπολογιστής.  Ένας αγώνας θα έχει 7 γύρους και σε κάθε γύρο θα ζητείται από το χρήστη να εισάγει την επιλογή του που θα μπορεί να είναι R ή P ή S για rock, paper ή scissors αντίστοιχα. O υπολογιστής θα πραγματοποιεί τυχαία επιλογή και ο γύρος θα τελειώνει όταν θα υπάρχει νικητής, ο οποίος και θα εμφανίζεται στην οθόνη (USER ή MACHINE). Στο τέλος των 7 γύρων θα εμφανίζεται ο νικητής και το σκορ.

**Λύση εργασίας**

* [rock_paper_scissors.cpp](./lab2020-2021/lab2020f_ex1_sol/rock_paper_scissors.cpp)

## Εργασία 3 (πράξεις με μιγαδικούς αριθμούς και γραφικό περιβάλλον διεπαφής)

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

Β) Ελέγξτε όλες τις λειτουργίες της κλάσης με unit tests της βιβλιοθήκης [catch2](https://github.com/catchorg/Catch2) και με τη χρήση της κλάσης std::complex που ορίζεται στο αρχείο επικεφαλίδας <complex>. Δείτε το [https://en.cppreference.com/w/cpp/numeric/complex](https://en.cppreference.com/w/cpp/numeric/complex).

Γ) Δημιουργήστε ένα GUI (Graphical User Interface) χρησιμοποιώντας το framework wxWidgets <https://www.wxwidgets.org/>. To GUI να δίνει τη δυνατότητα στο χρήστη να συμπληρώσει τα στοιχεία 2 μιγαδικών αριθμών και να επιτρέπει τη διενέργεια των πράξεων πρόσθεση, αφαίρεση, πολλαπλασιασμός, διαίρεση και ύψωση σε ακέραια σύναμη πατώντας πλήκτρα σε μια γραφική διεπαφή. 

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

**Μεταγλώττιση και εκτέλεση των Tests**

Για επιτάχυνση της μεταγλώττισης των tests

    $ g++ -c speedup.cpp -o speedup.o -std=c++14

Μεταγλώττιση και εκτέλεση των tests

    $ g++ Complex.cpp Tests.cpp speedup.o -o Tests -std=c++14
    $ Tests.exe                                                     
    ===============================================================================
    All tests passed (21 assertions in 9 test cases)                               

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

**Μεταγλώττιση και εκτέλεση του GUI app**

Εντολές μεταγλώττισης και εκτέλεσης (το wxWidgets έχει εγκατασταθεί στο C:\wxWidgets-3.1.4)

    $ g++ Complex.cpp Baseframe.cpp GUI.cpp -IC:\\wxWidgets-3.1.4\\include -IC:\\wxWidgets-3.1.4\\lib\\gcc_dll\\mswu -LC:\\wxWidgets-3.1.4\\lib\\gcc_dll -lwxmsw31u_core -lwxbase31u -o GUI
    $ GUI.exe

[GUI.png](./lab2020-2021/lab2020f_ex2_sol/GUI.png)

## Εργασία 4 (λεξικό)

Γράψτε ένα πρόγραμμα που να εμπεριέχει μια κλάση Lexicon που να διαβάζει τα περιεχόμενα ενός αρχείου με λέξεις της αγγλικής γλώσσας (το αρχείο θα περιέχει μια λέξη ανά σειρά). Το πρόγραμμα να προσφέρει μέσω ενός μενού επιλογών τις ακόλουθες λειτουργίες: 
1. Nα εμφανίζει το πλήθος και εφόσον ο χρήστης επιθυμεί όλες τις λέξεις που έχουν το πλήθος γραμμάτων που θα δίνει ο χρήστης.
2. Nα εμφανίζει το πλήθος και εφόσον ο χρήστης επιθυμεί όλες τις λέξεις που ξεκινούν με μια ακολουθία γραμμάτων που θα δίνει ο χρήστης.
3. Nα εμφανίζει το πλήθος και εφόσον ο χρήστης επιθυμεί όλες τις λέξεις που τελειώνουν με μια ακολουθία γραμμάτων που θα δίνει ο χρήστης.
4. Nα εμφανίζει το πλήθος και εφόσον ο χρήστης επιθυμεί όλες τις λέξεις που περιέχουν μια ακολουθία γραμμάτων που θα δίνει ο χρήστης τόσες συνεχόμενες φορές όσες επίσης θα δίνει ο χρήστης.
5. Nα εμφανίζει το πλήθος και εφόσον ο χρήστης επιθυμεί όλες τις λέξεις που περιέχουν σε θέσεις που θα επιλέγει ο χρήστης συγκεκριμένα γράμματα (για παράδειγμα ba-a-a σημαίνει ότι αναζητείται οποιαδήποτε λέξη που περιέχει σε οποιοδήποτε θέση τη σειρά γραμμάτων ba-a-a με το - να σημαίνει οποιοδήποτε γράμμα, οπότε τέτοιες λέξεις είναι οι bahamas και banana).

Το πρόγραμμα να διαβάζει το αρχείο εισόδου ως παράμετρο γραμμής εντολών (χρησιμοποιήστε ως αρχείο που περιέχει λέξεις της αγγλικής γλώσσας, το αρχείο "wordlist.10000.txt" που μπορείτε να μεταφορτώσετε από το <https://www.mit.edu/~ecprice/wordlist.10000>). 

Γράψτε συναρτήσεις ελέγχου στο catch2 που να ελέγχουν και τις 5 λειτουργίες του προγράμματος.

**Παράδειγμα εκτέλεσης προγράμματος**

  ```sh
  $ lexicon.exe                                                      
  File loaded:wordlist.10000.txt                                     
  1. Find words of size                                              
  2. Find words starting with                                        
  3. Find words ending with                                          
  4. Find words including                                            
  5. Find words including pattern                                    
  6. Exit                                                            
  Input choice:1                                                     
  Input word length:16                                               
  Words found=3                                                      
  Display words (y/n):y                                              
  characterization responsibilities sublimedirectory                 
  1. Find words of size                                              
  2. Find words starting with                                        
  3. Find words ending with                                          
  4. Find words including                                            
  5. Find words including pattern                                    
  6. Exit                                                            
  Input choice:2                                                     
  Input starting letters:re                                          
  Words found=360                                                    
  Display words (y/n):n                                              
  1. Find words of size                                              
  2. Find words starting with                                        
  3. Find words ending with                                          
  4. Find words including                                            
  5. Find words including pattern                                    
  6. Exit                                                            
  Input choice:3                                                     
  Input ending letters:ing                                           
  Words found=522                                                    
  Display words (y/n):n                                              
  1. Find words of size                                              
  2. Find words starting with                                        
  3. Find words ending with                                          
  4. Find words including                                            
  5. Find words including pattern                                    
  6. Exit                                                            
  Input choice:4                                                     
  Input sequence of letters and repetitions:an 2                     
  Words found=1                                                      
  Display words (y/n):y                                              
  banana                                                             
  1. Find words of size                                              
  2. Find words starting with                                        
  3. Find words ending with                                          
  4. Find words including                                            
  5. Find words including pattern                                    
  6. Exit                                                            
  Input choice:5                                                     
  Input pattern:ba-a-a                                                                                                          
  Words found=2                                                      
  Display words (y/n):y                                              
  bahamas banana                                                     
  1. Find words of size                                              
  2. Find words starting with                                        
  3. Find words ending with                                          
  4. Find words including                                            
  5. Find words including pattern                                    
  6. Exit                                                            
  Input choice:6                                                                              
  ``` 

**Λύση εργασίας 4**

## Λύση

Κώδικας

* [lexicon.hpp](./lab2020-2021/lab2020f_ex3_sol/lexicon.hpp)
* [lexicon.cpp](./lab2020-2021/lab2020f_ex3_sol/lexicon.cpp)
* [main.cpp](./lab2020-2021/lab2020f_ex3_sol/main.cpp)
* [catch.hpp](./lab2020-2021/lab2020f_ex3_sol/catch.hpp)
* [tests.cpp](./lab2020-2021/lab2020f_ex3_sol/tests.cpp)

Δεδομένα εισόδου

* [wordlist.10000.txt](./lab2020-2021/lab2020f_ex3_sol/wordlist.10000.txt)
* [test1.txt](./lab2020-2021/lab2020f_ex3_sol/test1.txt)

Μεταγλώττιση 

    ```
    $ g++ lexicon.cpp main.cpp -o lexicon -std=c++17
    $ g++ lexicon.cpp tests.cpp -o tests -std=c++17
    ```

Εκτέλεση

    ```
    $ lexicon.exe wordlist.10000.txt
    File loaded:wordlist.10000.txt                                                                                      
    1. Find words of size                                                                                               
    2. Find words starting with                                                                                         
    3. Find words ending with                                                                                           
    4. Find words including                                                                                             
    5. Find words including pattern                                                                                     
    6. Exit                                                                                                             
    Input choice:3                                                                                                      
    Input ending letters:ing                                                                                            
    Words found=522                                                                                                     
    Display words (y/n):n                                                                                               
    1. Find words of size                                                                                               
    2. Find words starting with                                                                                         
    3. Find words ending with                                                                                           
    4. Find words including                                                                                             
    5. Find words including pattern                                                                                     
    6. Exit                                                                                                             
    Input choice:2                                                                                                      
    Input starting letters:cat                                                                                          
    Words found=14                                                                                                      
    Display words (y/n):y                                                                                               
    cat catalog catalogs catalogue catalyst catch categories category catering cathedral catherine catholic cats cattle 
    1. Find words of size                                                                                               
    2. Find words starting with                                                                                         
    3. Find words ending with                                                                                           
    4. Find words including                                                                                             
    5. Find words including pattern                                                                                     
    6. Exit                                                                                                             
    Input choice:6                                                                                                      
    ```

Εκτέλεση tests

    ```
    $ tests.exe
    a.c.b
    ===============================================================================
    All tests passed (5 assertions in 5 test cases)
    ```
---

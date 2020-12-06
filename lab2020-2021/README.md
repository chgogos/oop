# ΕΡΓΑΣΤΗΡΙΟ ΧΕΙΜΕΡΙΝΟΥ ΕΞΑΜΗΝΟΥ 2020-2021

## Λίστα εργαστηρίων

### C++

Δια ζώσης

* [Συνάντηση 1](./lab01/) Δομές (structs), κλάσεις (classes), αντικείμενα (objects), επίπεδα προστασίας (public, private), κατασκευαστές (constructors), καταστροφείς (destructors)
* [Συνάντηση 2](./lab02/) Δείκτες (pointers), αναφορές (references), πέρασμα με τιμή (pass by  value), πέρασμα με αναφορά (pass by reference), υπερφόρτωση συναρτήσεων (overload), υπερφόρτωση τελεστών (operator overload)

Εξ' αποστάσεως

* Συνάντηση 3:
  * Επανάληψη εργαστηρίου 1 και 2
  * Παραδείγματα με const
    * <https://chgogos.github.io/oop/cpp_playground/ex005/const1.cpp>
    * <https://chgogos.github.io/oop/cpp_playground/ex005/const4.cpp>
  * Επίδειξη επίλυσης λυμένης άσκησης 1 <https://chgogos.github.io/oop/lab2020-2021/lab_ex1/cargo_example.cpp>
  * Επιπλέον ερωτήματα λυμένης άσκησης 1

* [Συνάντηση 4](./lab03/) Κληρονομικότητα (inheritance), παράκαμψη (override), διαμέριση κώδικα σε αρχεία κεφαλίδων και αρχεία κώδικα (code partitioning)

* Συνάντηση 5:
  * Θέμα 2 από τα [ενδεικτικά θέματα 1](https://chgogos.github.io/oop/preparation/proodos.pdf)
    * [Λύση](https://github.com/chgogos/oop/blob/master/preparation/prepare02.cpp)
  * Θέμα 2 από τα [θέματα προόδου 15/4/2019](https://chgogos.github.io/oop/preparation/20190415_proodos_a.pdf)
    * [Λύση](https://github.com/chgogos/oop/blob/master/preparation/proodos20190415a_2.cpp)

* [Συνάντηση 6](./lab04/) Πρότυπα (templates) - generic programming
* [Συνάντηση 7](./lab05) STL (Standard Template Library) - lambdas

<!-- ### Java

* [Εργαστήριο 5](./lab05/) Κλάσεις (classes), αντικείμενα (objects), επίπεδα προστασίας (public, package, private), κληρονομικότητα (inheritance)
* [Εργαστήριο 6](./lab06/) Διεπαφές (interfaces), παραμετρικοί τύποι (Generics), συλλογές της Java (Java Collections)  -->

---

## Εργαστηριακές ασκήσεις 2020-2021

### Άσκηση 1: Rock paper scissors (Πέτρα Χαρτί Ψαλίδι) 

Παράδοση στο [ecourse](http://ecourse.uoi.gr/course/view.php?id=1944) μέχρι τις ~~23/10/2020~~.

Χρησιμοποιήστε αντικειμενοστραφή προγραμματισμό με τη γλώσσα C++ για να υλοποιήσετε μια έκδοση του παιχνιδιού ["rock paper scissors"](https://en.wikipedia.org/wiki/Rock_paper_scissors) που να εκτελείται από τη γραμμή εντολών και στην οποία οι αντίπαλοι να είναι ο χρήστης του προγράμματος και ο υπολογιστής.  Ένας αγώνας θα έχει 7 γύρους και σε κάθε γύρο θα ζητείται από το χρήστη να εισάγει την επιλογή του που θα μπορεί να είναι R ή P ή S για rock, paper ή scissors αντίστοιχα. O υπολογιστής θα πραγματοποιεί τυχαία επιλογή και ο γύρος θα τελειώνει όταν θα υπάρχει νικητής, ο οποίος και θα εμφανίζεται στην οθόνη (USER ή MACHINE). Στο τέλος των 7 γύρων θα εμφανίζεται ο νικητής και το σκορ.

#### Λύση άσκησης 1

* [rock_paper_scissors.cpp](./lab2020f_ex1_sol/rock_paper_scissors.cpp)

### Άσκηση 2:  Complex numbers (μιγαδικοί αριθμοί)

Παράδοση στο [ecourse](http://ecourse.uoi.gr/course/view.php?id=1944) μέχρι τις ~~20/11/2020~~.

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

Β) Ελέγξτε όλες τις λειτουργίες της κλάσης με unit tests της βιβλιοθήκης catch2 και με τη χρήση της κλάσης std::complex που ορίζεται στο αρχείο επικεφαλίδας complex. Δείτε το <https://en.cppreference.com/w/cpp/numeric/complex> και το <https://github.com/catchorg/Catch2>. Μπορείτε να κατεβάσετε τη single file header από [εδώ](../catch.hpp).

Γ) Δημιουργήστε ένα GUI (Graphical User Interface) χρησιμοποιώντας το framework wxWidgets <https://www.wxwidgets.org/>. To GUI να δίνει τη δυνατότητα στο χρήστη να συμπληρώσει τα στοιχεία 2 μιγαδικών αριθμών και να επιτρέπει τη διενέργεια των πράξεων πρόσθεση, αφαίρεση, πολλαπλασιασμός και διαίρεση, πατώντας πλήκτρα σε μια γραφική διεπαφή. 

Δίνεται [κώδικας](./lab2020f_ex2) που παρέχει μια αρχική υλοποίηση της κλάσης Complex που περιέχει την υπερφόρτωση του τελεστή + και την υπερφόρτωση του τελεστή <<.  Επιπλέον δίνεται ένα παράδειγμα unit test για τον έλεγχο λειτουργίας του τελεστή +. Ο κώδικας αυτός μπορεί να χρησιμοποιηθεί ως βάση έναρξης της εργαστηριακής άσκησης. 

#### Λύση άσκησης 2

* [Λύση](./lab2020f_ex2_sol)

### Άσκηση 3: Λεξικό 

Παράδοση στο [ecourse](http://ecourse.uoi.gr/course/view.php?id=1944) μέχρι τις 18/12/2020.

Γράψτε ένα πρόγραμμα που να εμπεριέχει μια κλάση Lexicon που να διαβάζει τα περιεχόμενα ενός αρχείου με λέξεις της αγγλικής γλώσσας (το αρχείο θα περιέχει μια λέξη ανά σειρά). Το πρόγραμμα να προσφέρει μέσω ενός μενού επιλογών τις ακόλουθες λειτουργίες: 
1. Nα εμφανίζει το πλήθος και εφόσον ο χρήστης επιθυμεί όλες τις λέξεις που έχουν το πλήθος γραμμάτων που θα δίνει ο χρήστης.
2. Nα εμφανίζει το πλήθος και εφόσον ο χρήστης επιθυμεί όλες τις λέξεις που ξεκινούν με μια ακολουθία γραμμάτων που θα δίνει ο χρήστης.
3. Nα εμφανίζει το πλήθος και εφόσον ο χρήστης επιθυμεί όλες τις λέξεις που τελειώνουν με μια ακολουθία γραμμάτων που θα δίνει ο χρήστης.
4. Nα εμφανίζει το πλήθος και εφόσον ο χρήστης επιθυμεί όλες τις λέξεις που περιέχουν μια ακολουθία γραμμάτων που θα δίνει ο χρήστης τόσες συνεχόμενες φορές όσες επίσης θα δίνει ο χρήστης.
5. Nα εμφανίζει το πλήθος και εφόσον ο χρήστης επιθυμεί όλες τις λέξεις που περιέχουν σε θέσεις που θα επιλέγει ο χρήστης συγκεκριμένα γράμματα (για παράδειγμα ba-a-a σημαίνει ότι αναζητείται οποιαδήποτε λέξη που περιέχει σε οποιοδήποτε θέση τη σειρά γραμμάτων ba-a-a με το - να σημαίνει οποιοδήποτε γράμμα, οπότε τέτοιες λέξεις είναι οι bahamas και banana).

Το πρόγραμμα να διαβάζει το αρχείο εισόδου ως παράμετρο γραμμής εντολών (χρησιμοποιήστε ως αρχείο που περιέχει λέξεις της αγγλικής γλώσσας, το αρχείο "wordlist.10000.txt" που μπορείτε να μεταφορτώσετε από το <https://www.mit.edu/~ecprice/wordlist.10000>). 

Γράψτε συναρτήσεις ελέγχου στο catch2 που να ελέγχουν και τις 5 λειτουργίες του προγράμματος.

### Παράδειγμα εκτέλεσης προγράμματος

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

---

## Λυμένες εργαστηριακές ασκήσεις προηγούμενων ετών

### Άσκηση 1

* Κατασκευάστε μια κλάση με όνομα cargo (φορτίο) με μέλη δεδομένων τα ακόλουθα: 
  * id (αναγνωριστικός αριθμός φορτίου) τύπου int.
  * destination (προορισμός) τύπου string.
  * weight (βάρος) τύπου double.
  * fragile (εύθραυστο) τύπου bool.
* Δημιουργήστε προκαθορισμένο κατασκευαστή που να δίνει τις εξής τιμές: 0, "Undefined", 0, false.
* Δημιουργήστε έναν κατασκευαστή που να θέτει όλα τα μέλη δεδομένων σε τιμές που θα δέχεται ως παραμέτρους.
* Δημιουργήστε getters και setters μόνο το πεδίο weight.
* Δημιουργήστε μια συνάρτηση show() που να εμφανίζει τις τιμές όλων των πεδίων του αντικειμένου.
* Δημιουργήστε μια συνάρτηση μέλος make_safe() που εφόσον ένα φορτίο δεν είναι fragile να το κάνει και να αυξάνει το βάρος του κατά 5 κιλά (για υλικά συσκευασίας).
* Στη main:
  * Εισάγετε σε έναν πίνακα 5 θέσεων αντικείμενα cargo ως εξής:
    * 1, Patras, 1000, false
    * 2, Athens, 200, true
    * 3, Kalamata, 2000, false
    * 4, Patras, 1500, true
    * 5, Athens, 1100, false
  * Με μια επανάληψη πραγματοποιήστε κλήση της make_safe για όλα τα αντικείμενα.
  * Εμφανίστε όλα τα αντικείμενα.

#### Λύση άσκησης 1

* [cargo_example.cpp](./lab_ex1/cargo_example.cpp)

#### Επιπλέον ερωτήματα άσκησης 1

* Υπερφορτώστε τον τελεστή << έτσι ώστε να μπορεί να χρησιμοποιηθεί με το cout και να εμφανίζει τις τιμές όλων των πεδίων του αντικειμένου.
* Υπερφορτώστε τον τελεστή == έτσι ώστε να επιστρέφει true αν όλα τα πεδία δεδομένων των αντικειμένων είναι ίδια.
* Υπερφορτώστε τον τελεστή < έτσι ώστε να διατάσσει αντικείμενα cargo με βάση το βάρος τους (σε αύξουσα σειρά).
* Υπερφορτώστε και τους άλλους συγκριτικούς τελεστές.
* Ταξινομήστε τον πίνακα των αντικειμένων (χρησιμοποιήστε την STL συνάρτηση sort).
* Προσθέστε στατική μεταβλητή count που  να καταμετρά το πλήθος των αντικειμένων που δημιουργούνται. Εμφανίστε την τιμή της count στο τέλος της main.
* Διασπάστε τον κώδικα στα αρχεία cargo.hpp, cargo.cpp, driver.cpp. Μεταγλωττίστε τον κώδικα και εκτελέστε τον.
* Προσθέστε unit tests με το catch2 έτσι ώστε να ελέγχεται η ορθή υλοποίηση της συνάρτησης make_safe(). Δημιουργήστε για το λόγο αυτό το αρχείο tests.cpp.
<!-- * Χρησιμοποιήστε τη βιβλιοθήκη fmt για εμφάνιση αποτελεσμάτων στην οθόνη. -->

#### Λύση επιπλέον ερωτημάτων άσκησης 1

* [cargo.hpp](./lab_ex1_sol/cargo.hpp)
* [cargo.cpp](./lab_ex1_sol/cargo.cpp)
* [driver.cpp](./lab_ex1_sol/driver.cpp)
* [tests.cpp](./lab_ex1_sol/tests.cpp)
* [catch.hpp](./catch.hpp) θα πρέπει να υπάρχει το catch.hpp στην κατάλληλη θέση


### Άσκηση 2

Δημιουργήστε ένα πρόγραμμα που να υπολογίζει την ημερομηνία και την ημέρα της εβδομάδας για το ημερολογιακό έτος 2020. Για το σκοπό αυτό θα κατασκευαστεί η κλάση date2020.

* Συμπληρώστε την κλάση date2020 στα δύο αρχεία date2020.hpp και date2020.cpp. Η κλάση έχει δύο int ιδιωτικά μέλη δεδομένων d για την ημέρα και m  για τον μήνα. Αν η ημερομηνία δεν είναι έγκυρη ημερομηνία του 2020 τότε να θέτει m=-1 και d=-1. Υλοποίηστε την ακόλουθη διεπαφή για την κλάση  date2020:
  * date2020();
    * O προκαθορισμένος κατασκευαστής date2020() θα θέτει ως ημερομηνία 1 January 2020.
  * date2020(int d, int m);
    * Ο κατασκευαστής date2020(int d, int m) θα δέχεται ημέρα και μήνα και θα θέτει την ημερομηνία κατάλληλα.
  * void plus_days(int days);
    * Η συνάρτηση plus_days(int days) θα προσθέτει days ημέρες στην τρέχουσα ημερομηνία.
  * date2020(int d);
    * Ο κατασκευαστής date2020(int d) θα δέχεται τιμές από το 1 μέχρι και το 366 και θα θέτει την ημερομηνία ως την ημερομηνία d μέρες από την έναρξη του έτους 2020.
  * string get_day_name();
    * H συνάρτηση get_day_name() θα επιστρέφει το όνομα της ημέρας στο οποίο αντιστοιχεί η ημερομηνία.
  * void print(); (έχει ήδη υλοποιηθεί)
    * Η συνάρτηση print() θα εκτυπώνει την ημερομηνία όπως στο παράδειγμα που ακολουθεί: 15 March 2020 - (Sunday - 75).
  * int get_days_in_year(); (έχει ήδη υλοποιηθεί)
    * Η συνάρτηση get_days_in_year() θα επιστρέφει το πλήθος των ημερών από την αρχή τους έτους στο οποίο αντιστοιχεί η ημερομηνία.
* Εκτελέστε το πρόγραμμα οδηγό main.cpp και καταγράψτε την έξοδό του σε ένα αρχείο με όνομα main.out.
* Εκτελέστε τα unit tests που περιέχονται στο tests.cpp.

#### Αρχεία άσκησης

* [date2020.hpp](./lab_ex2/date2020.hpp)
* [date2020.cpp](./lab_ex2/date2020.cpp)
* [main.cpp](./lab_ex2/main.cpp)
* [tests.cpp](./lab_ex2/tests.cpp) (θα πρέπει να υπάρχει το catch.hpp στην κατάλληλη θέση ..)

Η μεταγλώττιση και η εκτέλεση του προγράμματος γίνεται ως εξής:

```bash
$ g++ date2020.cpp main.cpp -o main -std=c++11
./main

$ g++ date2020.cpp tests.cpp -o tests -std=c++11
./tests
```

#### Λύση άσκησης 2

* [date2020.hpp](./lab_ex2_sol/date2020.hpp)
* [date2020.cpp](./lab_ex2_sol/date2020.cpp)
* [main.cpp](./lab_ex2_sol/main.cpp)
* [tests.cpp](./lab_ex2_sol/tests.cpp) (θα πρέπει να υπάρχει το catch.hpp στην κατάλληλη θέση)

### Άσκηση 3 (1η εργαστηριακή άσκηση 2019-2020)

Η εκφώνηση της άσκησης βρίσκεται στο [20200217_assignment1.pdf](./lab_ex3/20200217_assignment1.pdf)

* Αρχικός κώδικας άσκησης: [account_bank.cpp](./lab_ex3/account_bank.cpp)

#### A' Λύση άσκησης 3

* [account_bank.cpp](./lab_ex3_sol/account_bank.cpp) (θα πρέπει να υπάρχει το catch.hpp στην κατάλληλη θέση)

#### B' Λύση άσκησης 3 (με διαμέριση κώδικα)

* [account_bank.hpp](./lab_ex3_sol2/account_bank.hpp)
* [account_bank.cpp](./lab_ex3_sol2/account_bank.cpp)
* [tests.cpp](./lab_ex3_sol2/tests.cpp) (θα πρέπει να υπάρχει το catch.hpp στην κατάλληλη θέση)
* [readme.txt](./lab_ex3_sol2/readme.txt)
* [makefile](./lab_ex3_sol2/makefile)

---

## Χρήση βιβλιοθηκών στη C++

### Catch2

<https://github.com/catchorg/Catch2>

[Παραδείγματα χρήσης του catch2](./../catch2_examples)

### wxWidgets

* [Εγκατάσταση του wxWidgets](../various/wxwidgets)
* [Ultra Simple Calculator](./wx_examples/usc)

#### Tutorials για wxWidgets

* <http://zetcode.com/gui/wxwidgets/>
* <https://www.wxwidgets.org/docs/tutorials/>
* [wxWiki Guides & Tutorials](https://wiki.wxwidgets.org/Guides_%26_Tutorials)

<!-- ### fmt

### spdlog -->

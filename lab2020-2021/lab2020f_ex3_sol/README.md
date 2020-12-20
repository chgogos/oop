# Λεξικό

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

## Λύση

Κώδικας

* [lexicon.hpp](./lexicon.hpp)
* [lexicon.cpp](./lexicon.cpp)
* [main.cpp](./main.cpp)
* [catch.hpp](./catch.hpp)
* [tests.cpp](./tests.cpp)

Δεδομένα εισόδου

* [wordlist.10000.txt](./wordlist.10000.txt)
* [test1.txt](./test1.txt)

Μεταγλώττιση 

    ```
    $ g++ lexicon.cpp main.cpp -o main -std=c++17
    $ g++ lexicon.cpp tests.cpp -o main -std=c++17
    ```

Εκτέλεση

    ```
    $ main.exe
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
# Παραδείγματα κώδικα και άλλα

* Παράδειγμα χρήσης δείκτη, διεύθυνσης μεταβλητής και αποαναφοράς (dereference) του δείκτη [pointers1.cpp](./cpp_playground/ex001/pointers1.cpp)
* Δείκτες σε void [pointers2.cpp](./cpp_playground/ex001/pointers2.cpp)
* Δέσμευση και αποδέσμευση μνήμης στη C [dynamic1.cpp](./cpp_playground/ex001/dynamic1.cpp)
* Στατικοί και δυναμικοί πίνακες στη C [dynamic2.cpp](./cpp_playground/ex001/dynamic2.cpp)
* Γιατί η δεικτοδότηση ξεκινά από το μηδέν στους πίνακες [zero_indexing.cpp](./cpp_playground/ex001/zero_indexing.cpp)
* Δέσμευση και αποδέσμευση μνήμης στη C++ [dynamic3.cpp](./cpp_playground/ex001/dynamic3.cpp)
* Πρόσβαση στα στοιχεία ενός πίνακα με πολλούς τρόπους [array.cpp](./cpp_playground/ex001/array.cpp)
* Δισδιάστατοι πίνακες
  * Δισδιάστατος πίνακας δεδομένων διαστάσεων ως παράμετρος πίνακα [matrix1.cpp](./cpp_playground/ex001/matrix1.cpp)
  * Δισδιάστατος πίνακας δυναμικών διαστάσεων ως παράμετρος πίνακα [matrix2a.cpp](./cpp_playground/ex001/matrix2a.cpp), [matrix2b.cpp](./cpp_playground/ex001/matrix2b.cpp)
  * Κλάση δυναμικού δισδιάστατου πίνακα με υπερφόρτωση του τελεστή [] [matrix.cpp](./various/agner_fog/matrix.cpp) - χρήσιμο για εύκολο χειρισμό δυναμικών δισδιάστατων πινάκων σε προγράμματα
* Αναφορές (references) [references.cpp](./cpp_playground/ex001/references.cpp)
* Κλήση με τιμή (call by value), κλήση με αναφορά (call by reference) [calls.cpp](./cpp_playground/ex001/calls.cpp)
* Απαριθμήσεις - enumerations
  * [enum1.cpp](./cpp_playground/ex030/enum1.cpp) παλιό στυλ
  * [enum2.cpp](./cpp_playground/ex030/enum2.cpp) νέο στυλ - enum classes
* Παράδειγμα με struct [struct_simple_example.cpp](./cpp_playground/ex002/struct_simple_example.cpp) και ισοδύναμος κώδικας με κλάση (μόνο με δημόσια μέλη) [class_simple_example.cpp](./cpp_playground/ex002/class_simple_example.cpp)
* Προ-επεξεργαστής [preprocessor.cpp](./cpp_playground/ex001/preprocessor.cpp)
* Διάσπαση κώδικα σε header και source αρχεία [Rectangle.h](./cpp_playground/ex003/Rectangle.h), [Rectangle.cpp](./cpp_playground/ex003/Rectangle.cpp), [Main.cpp](./cpp_playground/ex003/Main.cpp)
* Ενθυλάκωση, ορισμός ιδιωτικών (private) μελών, κατασκευαστές (constructors), καταστροφέας (destructor), προκαθορισμένος κατασκευαστής [Main.cpp](./cpp_playground/ex004/Main.cpp)
* Η χρήση του const
  * [const1.cpp](./cpp_playground/ex005/const1.cpp) const σε αναφορές βασικών τύπων δεδομένων
  * [const2.cpp](./cpp_playground/ex005/const2.cpp) const σε αναφορές αντικειμένων
  * [const3.cpp](./cpp_playground/ex005/const3.cpp) const σε δείκτες
  * [const4.cpp](./cpp_playground/ex005/const4.cpp) const σε δηλώσεις μεταβλητών αντικειμένων και σε συναρτήσεις μέλη κλάσεων
  * [const5.cpp](./cpp_playground/ex005/const5.cpp) const σε αναφορές που επιστρέφουν συναρτήσεις μέλη
* Κατασκευαστής με default τιμή παραμέτρου, το παράδειγμα μιας στοίβας [Stack.cpp](./cpp_playground/ex007/Stack.cpp)
* Copy constructor (shallow vs deep copy)
  * [copy_constructor1.cpp](./cpp_playground/ex010/copy_constructor1.cpp) shallow copy
  * [copy_constructor2.cpp](./cpp_playground/ex010/copy_constructor2.cpp) deep copy και copy assignment με deep copy
  * [copy_constructor3.cpp](./cpp_playground/ex010/copy_constructor3.cpp) παράδειγμα που το shallow copy είναι αρκετό
  * [copy_constructor4.cpp](./cpp_playground/ex010/copy_constructor4.cpp) παραλλαγή του προηγούμενου παραδείγματος στο οποίο γίνεται δυναμική δέσμευση μνήμης και απαιτείται deep copy
* "Αόρατες" αντιγραφές κατά την κλήση συναρτήσεων [copies.cpp](./cpp_playground/ex020/copies.cpp)
* Λίστα αρχικοποίησης (initializer list)
  * [initializer_list1.cpp](./cpp_playground/ex044/initializer_list1.cpp)
  * [initializer_list_example.cpp](./cpp_playground/ex111/initializer_list_example.cpp)
* Η χρήση του static στη C 
  * [static1.c](./cpp_playground/ex013/static1.c)
  * [static2.cpp](./cpp_playground/ex013/static2.cpp)
* Στατικά μέλη κλάσεων
  * [static_example1.cpp](./cpp_playground/ex013/static_example1.cpp)
  * [static_example2.cpp](./cpp_playground/ex013/static_example2.cpp) (πρόσβαση με static συνάρτηση στα ιδιωτικά μέλη κλάσης)
* Φίλες (friend) συναρτήσεις [friend_function1.cpp](./cpp_playground/ex012/friend_function1.cpp) και φίλες κλάσεις [friend_class1.cpp](./cpp_playground/ex012/friend_class1.cpp)
* Υπερφόρτωση τελεστών (δυαδικός τελεστής +)
  * Υπερφόρτωση τελεστή + με χρήση καθολικής συνάρτησης [operator_overload1.cpp](./cpp_playground/ex015/operator_overload1.cpp)
  * Υπερφόρτωση τελεστή + με χρήση συνάρτησης μέλους [operator_overload2.cpp](./cpp_playground/ex015/operator_overload2.cpp)
  * Υπερφόρτωση τελεστή + με χρήση friend συνάρτησης [operator_overload3.cpp](./cpp_playground/ex015/operator_overload3.cpp)
* Υπερφόρτωση τελεστών (δυαδικός τελεστής <, δυαδικός τελεστής ==)
  * [operator_overload4.cpp](./cpp_playground/ex015/operator_overload4.cpp)
* Υπερφόρτωση τελεστή << (inserter) και τελεστή >> (extractor)
  * [io_operator_overload1.cpp](./cpp_playground/ex016/io_operator_overload1.cpp) με φίλες συναρτήσεις
  * [io_operator_overload2.cpp](./cpp_playground/ex016/io_operator_overload2.cpp) με βοηθητικές συναρτήσεις
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
  * [static_cast1.cpp](./cpp_playground/ex024/static_cast1.cpp) ο συνηθισμένος τρόπος μετατροπής.
  * [dynamic_cast1.cpp](./cpp_playground/ex024/dynamic_cast1.cpp) το dynamic_cast χρησιμοποιείται για μετατροπή από μια βασική κλάση σε μια παραγόμενη κλάση (επιστρέφει nullptr σε αποτυχία)
* Inline συναρτήσεις (απλές και συναρτήσεις μέλη)
  * [inline1.cpp](./cpp_playground/ex025/inline1.cpp)
  * [inline2.cpp](./cpp_playground/ex025/inline2.cpp) ο μεταγλωττιστής ορίζει αυτόματα ως inline συναρτήσεις που ορίζονται εντός της κλάσης
* Πίνακας δεικτών προς αντικείμενα [arrays_of_pointers.cpp](./cpp_playground/ex026/arrays_of_pointers.cpp)
* Πολλαπλή κληρονομικότητα (multiple inheritance)
  * [multiple_inheritance1.cpp](./cpp_playground/ex036/multiple_inheritance1.cpp)
  * [multiple_inheritance2.cpp](./cpp_playground/ex036/multiple_inheritance2.cpp) επίλυση συγκρούσεων σε μέλη δεδομένων και σε μέλη συναρτήσεις
  * [virtual_inheritance1.cpp](./cpp_playground/ex037/virtual_inheritance1.cpp)
  * [virtual_inheritance2.cpp](./cpp_playground/ex037/virtual_inheritance2.cpp)
* std::to_string [to_string.cpp](./cpp_playground/ex033/to_string.cpp)
* Εξαιρέσεις (exceptions)
  * [exception1.c](./cpp_playground/ex038/exception1.c) asserts
  * [exception2.cpp](./cpp_playground/ex038/exception2.cpp)
  * [exception3.cpp](./cpp_playground/ex038/exception3.cpp)
  * [exception4.cpp](./cpp_playground/ex038/exception4.cpp)
  * [exception5.cpp](./cpp_playground/ex038/exception5.cpp)
  * [stl_container_out_of_range.cpp](./cpp_playground/ex046/stl_container_out_of_range.cpp) σύλληψη εξαίρεσης για αναφορά εκτός των ορίων του vector
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
  * [timing2.cpp](./cpp_playground/ex043/timing2.cpp)
  * [timing3.cpp](./cpp_playground/ex043/timing3.cpp)
* RTTI (RunTime Type Information)
  * [rtti1.cpp](./cpp_playground/ex051/rtti1.cpp) type introspection
* Δημιουργία τυχαίων τιμών
  * [random1.cpp](./cpp_playground/ex072/random1.cpp)
  * [random2.cpp](./cpp_playground/ex072/random2.cpp)
  * [random3.cpp](./cpp_playground/ex072/random3.cpp)
* Χειρισμός αρχείων
  * Αποθήκευση κειμένου σε αρχείο [file1.cpp](./cpp_playground/ex073/file1.cpp)
  * Αποθήκευση εγγραφών σε αρχείο κειμένου και ανάγνωση εγγραφών από το αρχείο [file2.cpp](./cpp_playground/ex073/file2.cpp)
  * Αποθήκευση εγγραφών σε δυαδικό αρχείο τυχαίας προσπέλασης και ανάγνωση, ενημέρωση και διαγραφή εγγραφών από το ίδιο αρχείο (χειρισμός μέσω μενού) [file3.cpp](./cpp_playground/ex073/file3.cpp)
* Χαρακτηριστικά συναρτησιακού προγραμματισμού στη C++
  * Function Pointers
    * [function_pointers1.cpp](./cpp_playground/ex001/function_pointers1.cpp)
    * [function_pointers2.cpp](./cpp_playground/ex001/function_pointers2.cpp)
    * [function_pointers3.cpp](./cpp_playground/ex001/function_pointers3.cpp)
    * [function_pointers4.cpp](./cpp_playground/ex001/function_pointers4.cpp)
    * [function_pointers5.cpp](./cpp_playground/ex001/function_pointers5.cpp)
    * [function_pointers6.cpp](./cpp_playground/ex001/function_pointers6.cpp)
    * [university2.c](./cpp_playground/ex023/university2.c)
  * Functors (function objects)
    * [functor1.cpp](./cpp_playground/ex046/functor1.cpp)
    * [functor2.cpp](./cpp_playground/ex046/functor2.cpp)
    * [functor3.cpp](./cpp_playground/ex046/functor3.cpp)
    * [functor4.cpp](./cpp_playground/ex046/functor4.cpp)
    * [functor5.cpp](./cpp_playground/ex046/functor5.cpp)
    * [generator1.cpp](./cpp_playground/ex071/generator1.cpp)
    * [generator2.cpp](./cpp_playground/ex071/generator2.cpp) παραγωγή τυχαίων αριθμών
    * [unary_functor.cpp](./cpp_playground/ex071/unary_functor.cpp) unary functor
    * [predicate.cpp](./cpp_playground/ex071/predicate.cpp) κατηγόρημα
    * [remove_if_functor.cpp](./cpp_playground/ex046/remove_if_functor.cpp)
  * Λάμδα - ανώνυμες συναρτήσεις (lambdas - closures))
    * [lambda1.cpp](./cpp_playground/ex071/lambda1.cpp)
    * [lambda2.cpp](./cpp_playground/ex071/lambda2.cpp)
    * [lambda3.cpp](./cpp_playground/ex071/lambda3.cpp)
    * [lambda4.cpp](./cpp_playground/ex071/lambda4.cpp) δήλωση lambda με διαφορετικούς τρόπους
  * Function pointers vs functors vs lambdas
    * [fp_functor_lambda.cpp](./cpp_playground/ex087/fp_functor_lambda.cpp)
  * map - filter - reduce
    * [map_filter_reduce.cpp](./cpp_playground/ex071/map_filter_reduce.cpp)
* Ακρίβεια πράξεων
  * floating points [floating_point.cpp](./cpp_playground/ex079/floating_point.cpp)
  * [floating1.cpp](./cpp_playground/ex096/floating1.cpp)
  * [floating2.cpp](./cpp_playground/ex096/floating2.cpp)
  * Όρια τύπων δεδομένων [limits.cpp](./cpp_playground/ex079/limits.cpp)
  * Χειρισμός χρηματικών ποσών μέσω ειδικής κλάσης [money.hpp](./cpp_playground/ex079/money.hpp), [main.cpp](./cpp_playground/ex079/main.cpp)
* Λεκτικά (C-strings,std::string, std::string_view)
  * [c_string1.cpp](./cpp_playground/ex085/c_string1.cpp)
  * [string1.cpp](./cpp_playground/ex085/string1.cpp)
  * [string2.cpp](./cpp_playground/ex085/string2.cpp)
  * [string_view1.cpp](./cpp_playground/ex085/string_view1.cpp)
  * [string_view2.cpp](./cpp_playground/ex085/string_view2.cpp)
* Αναδρομή
  * [stack_overflow.cpp](./cpp_playground/ex090/stack_overflow.cpp)
* Μετατροπή από πεζά σε κεφαλαία
  * [touppercase.cpp](./cpp_playground/ex091/touppercase.cpp)

## Βέλτιστες πρακτικές στη C++

* Const correctness <http://www.possibility.com/Cpp/const.html>
* Rule of three (αν μια κλάση ορίζει destructor, τότε θα πρέπει να ορίζει copy constructor και copy assignment operator)
  * <https://www.geeksforgeeks.org/rule-of-three-in-cpp/>
* Rule of five (αν μια κλάση ορίζει destructor, τότε θα πρέπει να ορίζει copy constructor, copy assignment operator, move constructor και move assignment operator)
* Rule of zero (οι κλάσεις θα πρέπει να γράφονται με τέτοιο τρόπο έτσι ώστε να μην χρειάζεται destructor, copy constructor, copy assignment operator, move constructor, move assignment operator, αλλά να χρησιμοποιούνται smart pointers και containers της STL για την αυτόματη διαχείριση των πόρων)

## STL

* Standard Template Library (περιέκτες, υποδοχείς=containers)
  * Περιέκτες ακολουθίας
    * std::array
      * [stl_array.cpp](./cpp_playground/ex046/stl_array.cpp)
    * std::vector
      * [stl_vector1.cpp](./cpp_playground/ex046/stl_vector1.cpp)
      * [stl_vector2.cpp](./cpp_playground/ex046/stl_vector2.cpp)
      * [stl_vector3.cpp](./cpp_playground/ex046/stl_vector3.cpp)
      * [stl_vector4.cpp](./cpp_playground/ex046/stl_vector4.cpp) vector και sort
      * [stl_vector5.cpp](./cpp_playground/ex046/stl_vector5.cpp) vector και iterators
      * [stl_vector_common_mistake.cpp](./cpp_playground/ex086/stl_vector_common_mistake.cpp)
    * std::list
      * [stl_list.cpp](./cpp_playground/ex046/stl_list.cpp)
      * [stl_vector_vs_list.cpp](./cpp_playground/ex046/stl_vector_vs_list.cpp)
    * std::forward_list
      * [stl_forward_list.cpp](./cpp_playground/ex046/stl_forward_list.cpp) push_front, insert_after, sort, reverse, remove_if
    * std::deque
      * [stl_deque.cpp](./cpp_playground/ex046/stl_deque.cpp)
  * Περιέκτες συσχέτισης
    * std::set
      * [stl_set.cpp](./cpp_playground/ex046/stl_set.cpp)
      * [stl_set2.cpp](./cpp_playground/ex046/stl_set2.cpp)
    * std::multiset
      * [stl_multiset.cpp](./cpp_playground/ex046/stl_multiset.cpp)
    * std::map 
      * [stl_map.cpp](./cpp_playground/ex046/stl_map.cpp)
      * [stl_map2.cpp](./cpp_playground/ex046/stl_map2.cpp)
      * [stl_map3.cpp](./cpp_playground/ex046/stl_map3.cpp) 
      * [stl_map4.cpp](./cpp_playground/ex046/stl_map4.cpp) 
    * std::multimap
      * [stl_multimap.cpp](./cpp_playground/ex046/stl_multimap.cpp)
    * std::unordered_set
      * [stl_unordered_set.cpp](./cpp_playground/ex046/stl_unordered_set.cpp)
    * std::unordered_multiset
    * std::unordered_map
    * std::unordered_multimap
  * Προσαρμογείς περιεκτών (container adaptors)
    * std::stack
      * [stl_stack.cpp](./cpp_playground/ex046/stl_stack.cpp)
    * std:queue
      * [stl_queue.cpp](./cpp_playground/ex046/stl_queue.cpp)
    * std::priority_queue
      * [stl_priority_queue.cpp](./cpp_playground/ex046/stl_priority_queue.cpp)
* Standard Template Library (επαναλήπτες=iterators)
  * random access iterator [stl_random_iterator.cpp](./cpp_playground/ex046/stl_random_iterator.cpp)
  * bidirectional iterator [stl_bidirectional_iterator.cpp](./cpp_playground/ex046/stl_bidirectional_iterator.cpp)
  * forward iterator [stl_forward_iterator.cpp](./cpp_playground/ex046/stl_forward_iterator.cpp)
  * Insertion iterators (inserters)
    * [insert_iterators.cpp](./cpp_playground/ex046/insert_iterators.cpp)
  * stream iterators
    * [stream_iterator1.cpp](./cpp_playground/ex046/stream_iterator1.cpp)
    * [stream_iterator2.cpp](./cpp_playground/ex046/stream_iterator2.cpp)
  * Χρήσιμες συναρτήσεις για iterators
    * [advance.cpp](./cpp_playground/ex046/advance.cpp) μετακίνηση iterator πολλές θέσεις μπροστά ή πίσω. 
    * [distance.cpp](./cpp_playground/ex046/distance.cpp) αφαίρεση iterators.
* Standard Template Library (αλγόριθμοι)
  * [stl_algorithm1.cpp](./cpp_playground/ex046/stl_algorithm1.cpp) std::reverse
  * [stl_algorithm2.cpp](./cpp_playground/ex046/stl_algorithm2.cpp) std::equal
  * [stl_algorithm3.cpp](./cpp_playground/ex046/stl_algorithm3.cpp) std::fill, std::copy, std::count, std::count_if, std::min_element, std::max_element, std::minmax_element, std::accumulate, std::shuffle, std::for_each, std::transform
  * [stl_algorithm4.cpp](./cpp_playground/ex046/stl_algorithm4.cpp) std::find, std::find_if, std::find_if_not, std::sort, std::binary_search, std::all_of, std::any_of, std::none_of
  * [stl_algorithm5.cpp](./cpp_playground/ex046/stl_algorithm5.cpp) non modifying STL algorithms (for_each, find, find_if, find_end, find_first_of, adjacent_find, count, count_if, mismatch, equal, search, search_n)
  <!-- * [stl_algorithm6.cpp](./cpp_playground/ex046/stl_algorithm6.cpp) modifying STL algorithms () -->
  * [stl_algorithm7.cpp](./cpp_playground/ex046/stl_algorithm7.cpp) sort + search STL algorithms (random_shuffle, sort, stable_partition, lower_bound, upper_bound, equal_range, binary_search)
  <!-- * [stl_algorithm8.cpp](./cpp_playground/ex046/stl_algorithm8.cpp) merge STL algorithms () -->
  * [stl_algorithm9.cpp](./cpp_playground/ex046/stl_algorithm9.cpp) heap (make_heap, pop_heap, push_heap, is_heap, sort_heap)
  * [stl_algorithm10.cpp](./cpp_playground/ex046/stl_algorithm10.cpp) παράδειγμα με αντικείμενα και STL
  * [stl_algorithm11.cpp](./cpp_playground/ex046/stl_algorithm11.cpp) δημιουργία 1.000 ακεραίων τιμών στο διάστημα [0,1.000.000], εμφάνιση των 10 μεγαλύτερων άρτιων τιμών
  * [stl_algorithm12.cpp](./cpp_playground/ex046/stl_algorithm12.cpp) εύρεση μέγιστου και ελάχιστου στοιχείου ενός vector με διάφορους τρόπους
* Ζεύγη (pairs), πλειάδες (tuples)
  * [pair.cpp](./cpp_playground/ex032/pair.cpp)
  * [tuple1.cpp](./cpp_playground/ex032/tuple1.cpp)
  * [tuple2.cpp](./cpp_playground/ex032/tuple2.cpp)
  * [tuple3.cpp](./cpp_playground/ex032/tuple3.cpp) επιστροφή δύο αποτελεσμάτων από μια συνάρτηση με 10 διαφορετικούς τρόπους
* C vs C++ παράδειγμα κώδικα (ελάχιστο, μέγιστο, αναζήτηση, ταξινόμηση) σε C και ισοδύναμου κώδικα σε C++
  * [max_search_sort.c](./various/FROM_C_TO_CPP/max_search_sort.c) με insertion sort 
    * [max_search_qsort.c](./various/FROM_C_TO_CPP/max_search_qsort.c) με χρήση της quicksort για την ταξινόμηση
  * [max_search_sort.cpp](./various/FROM_C_TO_CPP/max_search_sort.cpp) STL!!!

## Regular Expressions 

* <http://www.cplusplus.com/reference/regex/>
* <https://regex101.com/>

### Παραδείγματα κώδικα με regular expressions στη C++

* [regex1.cpp](./various/regex/regex1.cpp)
* [regex2.cpp](./various/regex/regex2.cpp)

## Σχέσεις αντικειμένων - UML - αρχές καλής σχεδίασης

* Σχέσεις μεταξύ αντικειμένων
  * IS_A (inheritance=κληρονομικότητα) [isa.cpp](./cpp_playground/ex080/isa.cpp)
  * HAS-A (composition=σύνθεση) [composition1.cpp](./uml/composition1.cpp)
  * HAS-A (composition with pointer = σύνθεση με δείκτη) [composition2.cpp](./uml/composition2.cpp)
  * HAS-A (aggregation with reference = συνάθροιση με αναφορά) [aggregation1.cpp](./uml/aggregation1.cpp)
  * HAS_A (aggregation with pointer = συνάθροιση με δείκτη) [aggregation2.cpp](./uml/aggregation2.cpp)
* Παραδείγματα κώδικα και UML
  * Μια κλάση: η κλάση account που αφορά έναν λογαριασμό τράπεζας
    * [διάγραμμα UML](./uml/uml1.png)
    * [account.cpp](./cpp_playground/ex078/account.cpp) 
  * Δύο κλάσεις και one-way association μεταξύ τους: employee και company (η επιχείρηση μπορεί να έχει πολλούς υπαλλήλους - δίνεται η δυνατότητα μετάβασης από την επιχείρηση στους υπαλλήλους της)
    * [διάγραμμα UML](./uml/uml2.png)
    * [employee.hpp](./cpp_playground/ex076/employee.hpp)
    * [employee.cpp](./cpp_playground/ex076/employee.cpp)
    * [company.hpp](./cpp_playground/ex076/company.hpp)
    * [company.cpp](./cpp_playground/ex076/company.cpp)
    * [main.cpp](./cpp_playground/ex076/main.cpp)
  * Δύο κλάσεις και two-way association μεταξύ τους: researcher και paper (ένας ερευνητής μπορεί να έχει δημοσιεύσει πολλά άρθρα και ένα άρθρο μπορεί να έχει συγγραφεί από πολλούς ερευνητές - δίνεται η δυνατότητα μετάβασης από τον ερευνητή στα άρθρα του καθώς και από τα άρθρα στους ερευνητές που τα έχουν συγγράψει)
    * [διάγραμμα UML](./uml/uml3.png)
    * [paper.hpp](./cpp_playground/ex077/paper.hpp)
    * [paper.cpp](./cpp_playground/ex077/paper.cpp)
    * [researcher.hpp](./cpp_playground/ex077/researcher.hpp)
    * [researcher.cpp](./cpp_playground/ex077/researcher.cpp)
    * [main.cpp](./cpp_playground/ex077/main.cpp)
* Σύζευξη (coupling)
  * [tight_coupling1.cpp](./cpp_playground/ex034/tight_coupling1.cpp) ισχυρή σύζευξη :( 
  * [tight_coupling2.cpp](./cpp_playground/ex034/tight_coupling2.cpp) ισχυρή σύζευξη :( 
    * [διάγραμμα UML](./uml/coupling1.png)
  * [loose_coupling.cpp](./cpp_playground/ex034/loose_coupling.cpp) χαλαρή σύζευξη :)
    * [διάγραμμα UML](./uml/coupling2.png)
* Παράδειγμα κυκλικής εξάρτησης (circular dependency) και επίλυση με forward declaration
  * Χωρίς διαμέριση κώδικα: [single_file.cpp](./cpp_playground/ex053/single_file.cpp)
  * Με διαμέριση κώδικα: 
    * [account.hpp](./cpp_playground/ex053/account.hpp)
    * [customer.hpp](./cpp_playground/ex053/customer.hpp)
    * [circular_dependency.cpp](./cpp_playground/ex053/circular_dependency.cpp)
* Anemic classes (anti-pattern)
  * [anemic_class.cpp](./cpp_playground/ex056/anemic_class.cpp) δημιουργία αναιμικής κλάσης
  * [struct_only.cpp](./cpp_playground/ex056/struct_only.cpp) λύση του προβλήματος με ένα απλό struct

## Design Patterns

* Creational
  * Factory
    * [factory.cpp](./cpp_playground/ex069/factory.cpp)
  * Builder
  * Singleton
    * [Singleton.cpp](./cpp_playground/ex011/Singleton.cpp)
    * [meyers_singleton.hpp](./cpp_playground/ex061/meyers_singleton.hpp)
    * [meyers_singleton.cpp](./cpp_playground/ex061/meyers_singleton.cpp)
* Structural
  * Adapter: Μετατροπή του interface (διεπαφής) μιας κλάσης σε ένα άλλο interface που οι πελάτες της κλάσης αναμένουν. Επιτρέπει σε κλάσεις που δεν θα μπορούσαν να λειτουργήσουν μαζί λόγω μη συμβατών interfaces, να λειτουργήσουν.
    * [adapter.cpp](./cpp_playground/ex064/adapter.cpp) Στο παράδειγμα υπάρχουν 2 κλάσεις, η my_class1 και η my_class2, με μη συμβατά interfaces με αυτό που περιμένει η κλάση tester.
  * Bridge
  * Composite
  * Decorator
  * Facade
    * [facade.cpp](./cpp_playground/ex070/facade.cpp)
  * Flyweight
* Behavioral
  * Chain of responsibility
  * Command
    * [command1.cpp](./cpp_playground/ex066/command1.cpp)
    * [command.hpp](./cpp_playground/ex067/command.hpp), [main.cpp](./cpp_playground/ex067/main.cpp)
  * Mediator
  * Observer
    * [observer.cpp](./cpp_playground/ex075/observer.cpp)
  * State
  * Strategy
    * [strategy.cpp](./cpp_playground/ex065/strategy.cpp)

<!-- ## Antipatterns -->

## Βασικές αρχές OOP

* Αφαίρεση (abstraction)
* Ενθυλάκωση (encapsulation)
* Πολυμορφισμός (polymorphism)
* Κληρονομικότητα (inheritance)

## Καλές αρχές λογισμικού

### S.O.L.I.D. principles

  * **S**ingle Responsibility Principle (SRP). Κάθε μονάδα λογισμικού (π.χ. συναρτήσεις, κλάσεις) πρέπει να έχει μια μόνο καλά ορισμένη υπευθυνότητα.
    * <https://hackernoon.com/you-dont-understand-the-single-responsibility-principle-abfdd005b137>
      * Παράδειγμα εφαρμογής του Single Responsibility Principle (SRP):
        * [no_srp.cpp](./various/SOLID/SRP/no_srp.cpp) παραβίαση της αρχής SRP
        * [srp.cpp](./various/SOLID/SRP/srp.cpp) SRP
  * **O**pen-Closed Principle (OCP). Κάθε μονάδα λογισμικού (π.χ. συναρτήσεις, κλάσεις) πρέπει να είναι ανοικτή για επέκταση (να μπορούν να προστίθενται νέες δυνατότητες) και κλειστή για αλλαγές (ο κώδικας που έχει ήδη γραφεί να μην χρειάζεται να τροποποιηθεί προκειμένου να ενσωματώσει τις επεκτάσεις).
    * <https://hackernoon.com/the-open-closed-principle-c3dc45419784>
    * Παράδειγμα εφαρμογής του Open Closed Principle: 
      * [no_open_closed_principle1.cpp](./various/SOLID/OCP/no_open_closed_principle1.cpp) παραβίαση της αρχής OCP
      * [no_open_closed_principle2.cpp](./various/SOLID/OCP/no_open_closed_principle2.cpp) παραβίαση της αρχής OCP
      * [open_closed_principle1.cpp](./various/SOLID/OCP/open_closed_principle1.cpp) OCP
      * [open_closed_principle2.cpp](./various/SOLID/OCP/open_closed_principle2.cpp) OCP
  * **L**iskov Substitution Principle (LSP). Τα αντικείμενα ενός προγράμματος θα πρέπει να μπορούν να αντικατασταθούν από στιγμιότυπα υποκλάσεων χωρίς να παραβιάζεται η ορθότητα του προγράμματος. Οι συναρτήσεις που χρησιμοποιούν δείκτες ή αναφορές σε βασικές κλάσεις (Base) θα πρέπει να είναι σε θέση να χρησιμοποιούν αντικείμενα της παραγόμενης κλάσης (Derived) χωρίς να γνωρίζουν ότι έχουν  να κάνουν με τέτοια αντικείμενα.
    * <https://hackernoon.com/liskov-substitution-principle-a982551d584a>
    * Παράδειγμα εφαρμογής του Liskov Substitution Principle (LSP):
      * [lsp1.cpp](./cpp_playground/ex050/lsp1.cpp) παραβίαση της αρχής LSP
      * [lsp2.cpp](./cpp_playground/ex050/lsp2.cpp) LSP
      * [lsp3.cpp](./cpp_playground/ex050/lsp3.cpp) LSP
  * **I**nterface Segregation Principle (ISP). Κανείς "πελάτης" ενός interface δεν θα πρέπει να εξαναγκάζεται να εξαρτάται από μεθόδους που δεν χρησιμοποιεί.
    * <https://hackernoon.com/interface-segregation-principle-bdf3f94f1d11>
    * Παράδειγμα εφαρμογής Interface Segregation Principle (ISP):
      * [isp1.cpp](./cpp_playground/ex052/isp1.cpp) παραβίαση της αρχής ISP
      * [isp2.cpp](./cpp_playground/ex052/isp2.cpp) ISP
  * **D**ependency Inversion Principle (DIP). Τα υψηλού επιπέδου τμήματα λογισμικού δεν θα πρέπει να στηρίζονται σε χαμηλού επιπέδου λεπτομέρειες. Τα τμήματα λογισμικού σε όλα τα επίπεδα ιεραρχίας θα πρέπει να στηρίζονται σε αφαιρέσεις.
    * <https://hackernoon.com/dependency-inversion-principle-e402e5b69e70>
    * Παράδειγμα εφαρμογής του Dependency Inversion Principle (DIP):
      * [owner.hpp](./cpp_playground/ex054/owner.hpp)
      * [account.hpp](./cpp_playground/ex054/account.hpp)
      * [customer.hpp](./cpp_playground/ex054/customer.hpp)
      * [dependency_inversion.cpp](./cpp_playground/ex054/dependency_inversion.cpp)

### Μερικές ακόμα καλές αρχές λογισμικού

* DRY (Don't Repeat Yourself =  Μην επαναλαμβάνεις τον εαυτό σου). Η επανάληψη του ίδιου κώδικα σε διάφορα σημεία προκαλεί προβλήματα στη συντήρηση του λογισμικού.
* YAGNI (You Ain't Gonna Need It = Δεν πρόκειται να το χρειαστείς). Θα πρέπει να υλοποιούνται οι απαραίτητες λειτουργίες και μόνο αυτές.
  * <https://martinfowler.com/bliki/Yagni.html>
* Law of Demeter (αρχή της ελάχιστης δυνατής γνώσης).
  * Παράδειγμα εφαρμογής του Law of Demeter
    * [lod1.cpp](./cpp_playground/ex055/lod1.cpp) παραβίαση του LoD
    * [lod2.cpp](./cpp_playground/ex055/lod2.cpp) LoD
* Information Hiding (απόκρυψη πληροφορίας). Ένα τμήμα κώδικα Α που καλεί ένα τμήμα κώδικα Β δεν θα πρέπει να "γνωρίζει" εσωτερικά θέματα της λειτουργίας του Β.
* PLoP (Principle of Least Privilege = Αρχή του ελάχιστου δικαιώματος) κάθε τμήμα θα πρέπει να μπορεί να προσπελάσει μόνο πληροφορίες και πόρους που απαιτούνται για να φέρει εις πέρας το ρόλο που οφείλει να επιτελεί και τίποτα περισσότερο.

## TDD με τη βιβλιοθήκη Catch2

* TDD (Test Driven Development) με το [catch2](https://github.com/catchorg/Catch2) 
  * [Rectangle.hpp](./cpp_playground/ex014/Rectangle.hpp), [TestRectangle.cpp](./cpp_playground/ex014/TestRectangle.cpp) απλό παράδειγμα TDD
  * [tdd1.cpp](./cpp_playground/ex057/tdd1.cpp) -> [tdd2.cpp](./cpp_playground/ex057/tdd2.cpp) -> [tdd3.cpp](./cpp_playground/ex057/tdd3.cpp) -> [tdd4.cpp](./cpp_playground/ex057/tdd4.cpp) -> [tdd5.cpp](./cpp_playground/ex057/tdd5.cpp) -> [tdd6.cpp](./cpp_playground/ex057/tdd6.cpp) -> [tdd7.cpp](./cpp_playground/ex057/tdd7.cpp) -> [tdd8.cpp](./cpp_playground/ex057/tdd8.cpp) -> [tdd9.cpp](./cpp_playground/ex057/tdd9.cpp) -> [tdd10.cpp](./cpp_playground/ex057/tdd10.cpp) -> [tdd11.cpp](./cpp_playground/ex057/tdd11.cpp) -> [tdd12.cpp](./cpp_playground/ex057/tdd12.cpp) -> [tdd13.cpp](./cpp_playground/ex057/tdd13.cpp) -> [tdd14.cpp](./cpp_playground/ex057/tdd14.cpp), [arabic_to_roman.hpp](./cpp_playground/ex057/arabic_to_roman.hpp) -> [demo.cpp](./cpp_playground/ex057/demo.cpp)


## Η βιβλιοθήκη fmt για εύκολη μορφοποίηση εξόδου (python-like)

* Παραδείγματα χρήσης της βιβλιοθήκης fmt
  * [fmt1.cpp](./cpp_playground/ex027/fmt1.cpp)
  * [fmt2.cpp](./cpp_playground/ex027/fmt2.cpp)

## Static dispatch (ealry binding) vs. dynamic dispatch (late binding)

Topics: vtables, vpointers

* [Understanding Virtual Tables in C++](https://pabloariasal.github.io/2017/06/10/understanding-virtual-tables/) 

---

## Σημειώσεις - Συγγράμματα

* [The C++ Programming Language (4th Edition)](http://www.stroustrup.com/4th.html)
* [Η γλώσσα προγραμματισμού C++ (4η αμερικανική έκδοση)](http://www.klidarithmos.gr/h-glwssa-programmatismoy-cplus-4h-ekdosh)
* [Εισαγωγή στη γλώσσα προγραμματισμού C++14, Σταμάτης Σταματιάδης](https://www.materials.uoc.gr/el/undergrad/courses/ETY215/notes.pdf)
* [C++ Notes for Professionals book](https://goalkicker.com/CPlusPlusBook/)
* [Δομές δεδομένων και αλγόριθμοι με τη C++, Γκόγκος Χρήστος](https://github.com/chgogos/ceteiep_dsa/raw/master/ceteiep_dsa_book.pdf)

## Παρουσιάσεις

* [Modern C++ Object-Oriented Programming -  Margit ANTAL 2018](./ma2018/CPP_v1.1.pdf)
* Programming in C++ — The C++ Language, Libraries, Tools, and Other Topics by Michael Adams, Department of Electrical and Computer Engineering University of Victoria
  * [2019-02-04.pdf](https://www.ece.uvic.ca/~frodo/cppbook/downloads/lecture_slides_for_programming_in_c++-2019-02-04.pdf)
* [C++ for C programmers - Duncan Mac-Vicar P.](https://en.opensuse.org/images/b/b9/C---for-C-programmers.pdf)

## Ενδιαφέρουσες σελίδες

* Παρακολούθηση εκτέλεσης κώδικα <http://pythontutor.com/cpp.html>
* <https://isocpp.org/get-started>
* <https://isocpp.org/std/status>

## Online C++ compilers

* [wandbox.org](https://wandbox.org/)
* [compiler explorer](http://godbolt.org)
* [coliru](http://coliru.stacked-crooked.com/)
* [C++ shell](http://cpp.sh/)
* [repl.it](https://repl.it/languages/cpp)
* [onlinegdb](https://www.onlinegdb.com/)
* [techiedelight](https://techiedelight.com/compiler/)
* [rextester - compile c++ gcc online](https://rextester.com/l/cpp_online_compiler_gcc)

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

<!-- * <https://web.cs.dal.ca/~jin/3132/assignments/style.html> -->

## C++ Guidelines

* [C++ Core Guidelines](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md)
* GSL: Guidelines Support Library
  * [Microsoft GSL](https://github.com/Microsoft/GSL)

## Static code analysis

* [cppcheck](http://cppcheck.sourceforge.net/)
* [clang static analyzer](http://clang-analyzer.llvm.org/)

## Test Driven Development

* [Catch2](https://github.com/catchorg/Catch2)
* [CppUnit](http://cppunit.sourceforge.net/doc/cvs/cppunit_cookbook.html)
* [Boost.Test](https://www.boost.org/doc/libs/1_69_0/libs/test/doc/html/index.html)
* [CUTE](https://cute-test.com/)
* [Google Test](https://github.com/google/googletest)

## UML (Unified Modeling Language)

* Πηγές
  * [UML Association vs Aggregation vs Composition](https://www.visual-paradigm.com/guide/uml-unified-modeling-language/uml-aggregation-vs-composition/)
  * <https://www.uml-diagrams.org/>
* Λογισμικά για σχεδίαση UML
  * [UMLET](https://www.umlet.com/)
    * [UMLETINO](http://www.umletino.com/umletino.html)
  * [Plant UML](http://plantuml.com/)
  * [Visual Paradigm - Community Edition](https://www.visual-paradigm.com/)
  * [Modelio](https://www.modelio.org/)
  * [ArgoUML](http://argouml.tigris.org/)
  * [BOUML](http://argouml.tigris.org/)
  * [Violet UML](http://alexdp.free.fr/violetumleditor/page.php)
  * [Umbrello](https://umbrello.kde.org/)

## Βιβλιοθήκες

* Catch2 (A modern, C++-native, header-only, test framework for unit-tests, TDD and BDD ...)
  * <https://github.com/catchorg/Catch2>

* fmt (Small, safe and fast formatting library)
  * <http://fmtlib.net/latest/index.html>

* folly (An open-source C++ library developed and used at Facebook)
  * <https://github.com/facebook/folly>

## Λογισμικά - εργαλεία

### IDEs (Integrated Development Environments)

#### Visual Studio

* [Visual Studio with C++ 2019 Community Edition](https://visualstudio.microsoft.com/vs/features/cplusplus/)

#### CLION

* [Clion](https://www.jetbrains.com/clion/)

  ΒΗΜΑΤΑ ΕΓΚΑΤΑΣΤΑΣΗΣ:
  1. Μετάβαση στη σελίδα <https://www.jetbrains.com/community/education/> (Jetbrains.com -> Support -> Education)
  2. Κλικ στο "Apply for Free Student Pack"
  3. Ανάγνωση οδηγιών και κλικ στο "Apply Now"
  4. Προσθήκη στοιχείων:
        Apply with: UNIVERSITY EMAIL ADDRESS
        Status: I'm a student
        Level of study: Undergraduate
        Is Computer Science or Engineering your major field of study?: YES
        Graduation date: Διαλέγουμε μία ημερομηνία, αρκεί να είναι μετά από τουλάχιστον ένα έτος από τη σημερινή ημερομηνία και στην οποία εξακολουθούμε να διατηρούμε τη φοιτητική ιδιότητα.
        Email address: Δηλώνουμε το email τύπου xyz0012345@uoi.gr που μας αντιστοιχεί.
        Αποδοχή: I have read and I accept the JetBrains Account Agreement
  5. Επιβεβαίωση μέσω email για το εκπαιδευτικό πακέτο, αποδοχή όρων χρήσης
  6. Δημιουργία λογαριασμού με το email που δηλώσαμε
  7. Κατεβάζουμε τα προγράμματα που θέλουμε (πχ. Clion)
  8. Εγκατάσταση προγράμματος
  9. Κατά την εκκίνηση κάνουμε σύνδεση με τον λογαριασμό που φτιάξαμε στο βήμα 6, ώστε να αναγνωρίσει την άδεια που διαθέτουμε.

Τα παραπάνω βήματα εγκατάστασης έχουν γραφεί από τον φοιτητή του τμήματος και βοηθό διδασκαλίας (2019-2020), Σπύρο Στραβοράβδη.

#### Eclipse 

* [Eclipse CDT](https://www.eclipse.org/cdt/)

#### Qt Creator 

* [Qt Creator](https://www.qt.io/download)

#### Netbeans

* [Netbeans](https://netbeans.org/features/cpp/)

#### Codeblocks

* [codeblocks](http://www.codeblocks.org/)

### Codelite

* [codelite](https://codelite.org/)

#### Geany

* [Geany](https://www.geany.org/)

#### DevC++

* [Dev-Cpp](https://github.com/Embarcadero/Dev-Cpp)

### Μεταγλωττιστές για τη C++

  * gcc <https://gcc.gnu.org/>
    * <http://tdm-gcc.tdragon.net/> για Windows
    * <http://www.mingw.org/> για Windows
  * clang <http://clang.llvm.org/get_started.html>
  * [Microsoft C++ compiler](https://visualstudio.microsoft.com/visual-cpp-build-tools/)
  * [Intel C++ compiler](https://software.intel.com/en-us/c-compilers)
  * [Embarcadero C++ compiler](https://www.embarcadero.com/free-tools/ccompiler)

[C++ compiler support](https://en.cppreference.com/w/cpp/compiler_support)

### Editors

#### Visual Studio Code

* To VSCode στα Windows μπορεί να λειτουργήσει μεταξύ άλλων: 
  * είτε με το [μεταγλωττιστή C/C++ gcc](http://tdm-gcc.tdragon.net/) - Οδηγίες [Using GCC with MinGW](https://code.visualstudio.com/docs/cpp/config-mingw)
  * είτε με το [μεταγλωττιστή C/C++ της Microsoft](https://visualstudio.microsoft.com/visual-cpp-build-tools/) - Οδηγίες: [Configure VS Code for Microsoft C++](https://code.visualstudio.com/docs/cpp/config-msvc)

* [Visual Studio Code by Microsoft](https://code.visualstudio.com/)
  * Extensions (ms-vscode.cpptools, vadimcn.vscode-lldb, formulahendry.code-runner)

    ```console
    # Ctrl + P (quick open)
    ext install ms-vscode.cpptools
    ext install vadimcn.vscode-lldb
    ext install formulahendry.code-runner
    # Ctrl + , (settings dialog)
    Extensions > Run Code configuration Here
        Run in Terminal: enable
        Save All Files Before Run: enable
        Clear Previous Output: enable
    Ctrl + Alt + N => compiles and executes current file
    ```

#### Άλλοι editors

* [Sublime Text](https://www.sublimetext.com/)
* [Atom](https://atom.io/)
* [Notepad++](https://notepad-plus-plus.org/)

### Build tools

* [Make for Windows](http://gnuwin32.sourceforge.net/packages/make.htm)
* CMAKE (An open-source, cross-platform family of tools designed to build, test and package software)
  * <https://cmake.org/>
  * <https://github.com/pr0g/cmake-examples>

## DEBUG 

* [ΠΑΡΑΔΕΙΓΜΑΤΑ ΑΠΟΣΦΑΛΜΑΤΩΣΗΣ (DEBUG)](./various/DEBUG_EXAMPLES/README.md) 

## GIT + GITHUB

* [Git & GitHub Class](http://git-class.gr/)
* [A Plumber’s Guide to Git](https://alexwlchan.net/a-plumbers-guide-to-git/)

<!-- * [Learn Git from Scratch](https://labex.io/courses/learn-git-from-scratch) -->


## Περιβάλλον Linux μέσα από Windows

* [How to install Linux on Windows with WSL](https://learn.microsoft.com/en-us/windows/wsl/install)
* [VirtualBox](https://www.virtualbox.org/) + Linux Distribution (Ubuntu, XUbuntu, Mint, Suse, Debian, ...)
* [Vagrant](https://www.vagrantup.com/)
* [Docker](https://www.docker.com/)
* [Cygwin](https://www.cygwin.com/)

## Java

* [techiedelight.com - online Java Compiler](https://techiedelight.com/compiler/)
* [onlinegdb - online Java Compiler](https://www.onlinegdb.com/online_java_compiler)

<!-- * [Εγκατάσταση JDK + IDE](https://vasnastos.github.io/Object_Oriented_Programming-CPP-Java/javainstallation.html) -->

## Τεκμηρίωση γλώσσας C++ και STL

* [https://devdocs.io/](https://devdocs.io/) και με δυνατότητα για offline χρήση
* [zeal](https://zealdocs.org/) για offline χρήση
* [https://en.cppreference.com/w/](https://en.cppreference.com/w/)
* [https://www.cplusplus.com/reference/](https://www.cplusplus.com/reference/)

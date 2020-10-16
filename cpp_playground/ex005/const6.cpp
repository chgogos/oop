// const σε μεταβλητές
#include <iostream>

using namespace std;

class Student
{
public:
    string name;

    Student(string n) : name(n){};
};

int main()
{
    // σε μεταβλητές το const είτε τοποθετηθεί πρώτα είτε μετά τον τύπο δεδομένων
    // υποδηλώνει ότι τα δεδομένα δεν μπρορούν να τροποποιηθούν μετά την αρχικοποίηση
    const int a = 5;
    int const b = 5;

    // a = 6; // error: assignment of read-only variable 'a'
    // b = 6; // error: assignment of read-only variable 'b'

    // δεν επιτρέπεται να αλλάξει η τιμή του c ούτε τα περιεχόμενά του
    const Student c("Nikos");
    Student d("Petros");

    // c = d; // error: passing 'const Student' as 'this' argument discards qualifiers [-fpermissive]
    // c.name = "Kostas"; // error: no match for 'operator=' (operand types are 'const string' {aka 'const std::__cxx11::basic_string<char>'} and 'const char [7]')
}
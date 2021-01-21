// Δημιουργήστε μια κλάση A με ένα ακέραιο ιδιωτικό μέλος x. 
// Συμπληρώστε την κατάλληλη συνάρτηση έτσι ώστε να μετατρέπεται ένα αντικείμενο της κλάσης Α σε λεκτικό με περιεχόμενο το x.

#include <iostream>
#include <sstream>

using namespace std;

class A
{
private:
    int x;

public:
    A(int x) : x(x) {}
    operator std::string() const
    {
        std::stringstream ss;
        ss << x;
        return ss.str();
    }
};

int main(){
    A obj(42);
    cout << string(obj) << endl;
}

/*
42
*/
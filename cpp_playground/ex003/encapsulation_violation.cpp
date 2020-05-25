#include <iostream>

// παράδειγμα παραβίασης της ενθυλάκωσης που προσφέρουν οι κλάσεις
class my_class {
    private:
        int a;
    public:
        my_class() : a(10) {}
        int get_a() {
            return a;
        }
};

struct my_struct {
    int a;
};

int main(){
    my_class obj;

    // μπορεί να γίνει και αυτό
    my_struct *p = (my_struct*)&obj;
    std::cout << "Access to private member " << p->a << std::endl;
    p->a=15; // τροποποίηση του ιδιωτικού μέλους της κλάσης my_class
    std::cout << obj.get_a() << std::endl; // 

    return 0;
}

/*
Access to private member 10
15
*/
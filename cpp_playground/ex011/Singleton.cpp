#include <iostream>

class Singleton{
    private:
        int counter;
        static Singleton *instance;

        Singleton(): counter(0) {
            std::cout << "Constructor called" << std::endl;
        }
    public:
        ~Singleton(){
            std::cout << "Destructor called" << std::endl;
        }

        static Singleton& get_instance(){
            if (!instance)
                instance= new Singleton();
            return *instance;
        }

        void increment(int x){
            counter += x;
        }

        void print(){
            std::cout << "Current value of counter is " << counter << std::endl;
        }
};

Singleton *Singleton::instance = 0;

int main(){
    Singleton::get_instance().print();
    Singleton::get_instance().increment(10);
    Singleton::get_instance().print();
    Singleton::get_instance().increment(20);
    Singleton::get_instance().print();
    return 0;
}

/*
Constructor called
Current value of counter is 0
Current value of counter is 10
Current value of counter is 30
*/
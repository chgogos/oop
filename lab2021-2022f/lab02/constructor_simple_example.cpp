#include <iostream>

using namespace std;

class A{
    private:
        int x;
    public:
        A(int a): x(a) {
            cout << "Constructor called for object " << this <<endl;
        }
        ~A(){
            cout << "Destructor called for object " << this <<endl;
        }
};

int main(){ 
    for (int i=0;i<5;i++){
        A obj(5);
    }
    cout << "program ended!" << endl;
}
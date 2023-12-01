#include <iostream>
#include <vector>
using namespace std;

template <class O>
void fun(vector<O> v, O x){
    for(int i=0;i<v.size();i++){
        if (v[i]==x){
            cout << "Position " << i << endl;
            return;
        }
    }
    cout << "Not found" << endl;
}

class Person{
    private:
        string name;
    public:
        Person(string n) : name(n) {}
        bool operator==(const Person& other){
            return this->name == other.name;
        }
};


int main(){
    vector<int> v = {7,3,4,2,1,9};
    fun(v, 9);
    
    vector<string> v2 = {"nikos", "maria"};
    fun(v2, string("nikos"));

    vector<Person> v3 ={Person("Kostas"), Person("Niki"), Person("Giannis")};
    fun(v3, Person("Nikiforos"));
}
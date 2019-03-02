#include <iostream>
#include <sstream>

class Person
{
  private:
    std::string name;
    int age;

  public:
    Person() = default;
    Person(std::string n, int a) : name(n), age(a) {}

    // μετατροπή Person σε std::string
    operator std::string() const
    {
        std::stringstream ss;
        ss << "Name: " << name << " age: " << age;
        return ss.str();
    }
};

int main()
{
    Person p1("Nikos", 30);
    std::string s = p1;
    std::cout << s << std::endl;
    return 0;
}

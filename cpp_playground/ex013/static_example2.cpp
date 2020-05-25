#include <iostream>

class MyClass
{
  private:
    int x;

  public:
    int get_x()
    {
        return x;
    }
    void set_x(int v)
    {
        x = v;
    }
    static void func(MyClass &c)
    {
        c.x++;
    }
};

int main()
{

    MyClass obj1;
    obj1.set_x(5);
    std::cout << "1. " << obj1.get_x() << std::endl;
    
    // αλλαγή ιδιωτικού μέλους αντικειμένου με στατική συνάρτηση της κλάσης
    MyClass::func(obj1);
    std::cout << "2. " << obj1.get_x() << std::endl;
    return 0;
}

/*
1. 5
2. 6
*/
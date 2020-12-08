#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct student
{
    string name;
    int age;
};

int main()
{

    vector<student> v{{"maria", 19}, {"nikos", 20}, {"kostas", 18}};
    for (auto s : v)
    {
        cout << s.name << " " << s.age << endl;
    }
    sort(begin(v), end(v), [](student s1, student s2) { return s1.age > s2.age; });
    cout << "SORTED" << endl;
    for (auto s : v)
    {
        cout << s.name << " " << s.age << endl;
    }
}

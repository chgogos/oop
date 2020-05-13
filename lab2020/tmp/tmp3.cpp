#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

// επιστροφή του πλήθους των εμφανίσεων της μικρότερης τιμής
template <class T>
void occurences(vector<T> v, int &c, T &min)
{
    min = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] < min)
            min = v[i];
    }
    c = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == min)
            c++;
    }
}

class player
{
public:
    string name;
    int time_played;

    bool operator<(const player &other)
    {
        return time_played < other.time_played;
    }
    bool operator==(const player &other)
    {
        return time_played == other.time_played;
    }
    operator string() const{
        stringstream ss;
        ss << name << " - " << time_played;
        return ss.str();
    }
};

int main()
{
    vector<int> v1{2, 6, 9, 2, 3, 2, 9, 2};
    int c1, min1;
    occurences(v1, c1, min1);
    cout << "Min: " << min1 << " occurs: " << c1 << endl;

    vector<double> v2{2.1, 6.3, 1.1, 2.1, 1.1, 2.0, 9.1, 2.5};
    int c2;
    double min2;
    occurences(v2, c2, min2);
    cout << "Min: " << min2 << " occurs: " << c2 << endl;

    vector<player> v3{{"nikos", 30}, {"maria", 5}, {"kostas", 60}, {"niki", 5}};
    int c3;
    player p;
    occurences(v3, c3, p);
    cout << "Min: " << p.time_played << " occurs: " << c3 << endl;

    for (player a_player : v3)
    {
        cout << a_player.name << " " << a_player.time_played << endl;
        string ps = a_player;
        cout << ps << endl;
    }
}
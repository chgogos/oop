#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>


template <class T>
int occurences_of_min(std::vector<T> v)
{
    auto x = min_element(v.begin(), v.end());
    return count(v.begin(), v.end(), *x);
}

class player
{
public:
    std::string name;
    int time_played;
    bool operator<(const player &other) const
    {
        return time_played < other.time_played;
    }
    bool operator==(const player &other) const
    {
        return time_played == other.time_played;
    }
    operator std::string() const
    {
        std::stringstream ss;
        ss << name << " - " << time_played;
        return ss.str();
    }
};

int main()
{
    std::vector<int> v1{1, 6, 3, 1, 7, 8, 1, 3};
    int oc1 = occurences_of_min(v1);
    std::cout << "1. Result=" << oc1 << std::endl;

    std::vector<player> v2{{"nikos", 53}, {"petros", 68}, {"kostas", 53}, {"john", 54}};
    int oc2 = occurences_of_min(v2);
    std::cout << "2. Result=" << oc2 << std::endl;
    for (int i = 0; i < v2.size(); i++)
    {
        std::cout << (std::string)v2[i] << std::endl;
    }

    return 0;
}

/*
1. Result=3
2. Result=2
nikos - 53
petros - 68
kostas - 53
john - 54
*/
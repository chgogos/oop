// https://stackoverflow.com/questions/17016175/c-unordered-map-using-a-custom-class-type-as-the-key

#include <iostream>
#include <unordered_map>

using namespace std;

struct Key
{
    string first;
    string second;
    int third;

    bool operator==(const Key &other) const
    {
        return (first == other.first && second == other.second && third == other.third);
    }
};
namespace std
{
    template <>
    struct hash<Key>
    {
        size_t operator()(Key m) const
        {
            return ((hash<string>()(m.first) ^ (hash<string>()(m.second) << 1)) >> 1) ^ (hash<int>()(m.third) << 1);
        }
    };
} // namespace std

int main()
{
    unordered_map<Key, string> m = {
        {{"John", "Doe", 12}, "example"},
        {{"Mary", "Sue", 21}, "another"}};

    for (pair<Key, string> kv : m)
    {
        cout << "Key:(" << kv.first.first << " " << kv.first.second << " " << kv.first.third << ")->" << kv.second << endl;
    }
}
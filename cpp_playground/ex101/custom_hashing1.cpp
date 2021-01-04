// https://stackoverflow.com/questions/17016175/c-unordered-map-using-a-custom-class-type-as-the-key


#include <iostream>
#include <unordered_map>

using namespace std;

struct Key
{
    std::string first;
    std::string second;
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
        std::size_t operator()(const Key &k) const
        {
            using std::hash;
            using std::size_t;
            using std::string;

            // Compute individual hash values for first,
            // second and third and combine them using XOR
            // and bit shifting:

            return ((hash<string>()(k.first) ^ (hash<string>()(k.second) << 1)) >> 1) ^ (hash<int>()(k.third) << 1);
        }
    };
} // namespace std

int main()
{
    std::unordered_map<Key, std::string> m = {
        {{"John", "Doe", 12}, "example"},
        {{"Mary", "Sue", 21}, "another"}};

    for(pair<Key, string> kv: m){
        cout << "Key:(" << kv.first.first << " " << kv.first.second << " " << kv.first.third << ")->" << kv.second << endl;
    }
}
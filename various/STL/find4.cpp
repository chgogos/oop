#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> v{1, 2, 7, 0, 3, 3, 2, 1, 4, 7, 8, 2, 4, 4, 1, 9, 6, 7, 2};
    vector<int> v2{7, 8, 9};
    vector<int> v3{1, 4, 7};
    auto result = find_if(begin(v), end(v), [](int x) { return x % 2 == 0; });
    if (result != end(v))
        cout << "1. (find_if): " << *result << " at position " << result - begin(v) << endl;
    result = find_if_not(begin(v), end(v), [](int x) { return x % 2 == 0; });
    if (result != end(v))
        cout << "2. (find_if_not): " << *result << " at position " << result - begin(v) << endl;
    result = find_first_of(begin(v), end(v), begin(v2), end(v2));
    if (result != end(v))
        cout << "3. (find_first_of): " << *result << " at position " << result - begin(v) << endl;
    result = search(begin(v), end(v), begin(v3), end(v3));
    if (result != end(v))
        cout << "4. (search): " << *result << " at position " << result - begin(v) << endl;
    // δύο 4 στη σειρά
    result = search_n(begin(v), end(v), 2, 4);
    if (result != end(v))
        cout << "5. (search_n): " << *result << " at position " << result - begin(v) << endl;
    result = adjacent_find(begin(v), end(v));
    if (result != end(v))
        cout << "6. (adjacent_find): " << *result << " at position " << result - begin(v) << endl;
}
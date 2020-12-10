#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(10, 42);

    // 1ος τρόπος εμφάνισης στοιχείων vector
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << "CAPACITY=" << v.capacity() << endl;

    // να προστεθεί στο τέλος του vector για κάθε στοιχείο του το προηγούμενο στοιχείο
    // αυξημένο κατά 1 για 10 στοιχεία
    // 42, 42, ..., 42, 43, 44, 45, ..., 52 (20 τιμές)

    for (int i = 43; i <= 52; i++)
    {
        v.push_back(i);
    }

    // 2ος τρόπος εμφάνισης στοιχείων vector
    for (int i=0;i<v.size();i++)
    {
        cout << v[i] << " ";
    }
    cout << "CAPACITY=" << v.capacity() << endl;

    // 3ος τρόπος εμφάνισης στοιχείων vector (με iterator)
    for(auto it=v.begin();it!=v.end();it++){
        cout << *it << " ";
    }
    cout << "CAPACITY=" << v.capacity() << endl;

}

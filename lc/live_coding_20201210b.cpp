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
    cout << endl;

    // να προστεθεί στο τέλος του vector για κάθε στοιχείο του το προηγούμενο στοιχείο
    // αυξημένο κατά 1 για 10 στοιχεία
    // 42, 42, ..., 42, 43, 44, 45, ..., 52 (20 τιμές)
}

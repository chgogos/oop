// Υπερφόρτωση του τελεστή << (αριστερή ολίσθηση)

#include <iostream>

using namespace std;

int main()
{
    int x = 5;
    for (int i = 0; i < 5; i++)
    {
        int y = x << i;
        cout << "Shift left " << i << " positions gives " << y << endl;
    }
}
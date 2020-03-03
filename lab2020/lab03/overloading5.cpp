// Υπερφόρτωση του τελεστή << από τη C++ (ως αριστερή ολίσθηση σε ακεραίους και ως τελεστής εισαγωγής σε streams)

#include <iostream>

using namespace std;

int main()
{
    int x = 5;
    for (int i = 0; i < 5; i++)
    {
        int y = x << i;                                                 // οριστερή ολίσθηση (left shift)
        cout << "Shift left " << i << " positions gives " << y << endl; // τελεστής εισαγωγής (insertion operator)
    }
}
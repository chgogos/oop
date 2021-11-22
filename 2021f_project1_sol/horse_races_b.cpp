#include <iostream>
#include "horse.hpp"
#include "arena.hpp"

using namespace std;

int main(int argc, char *argv[])
{
    int h = 4;  // πλήθος αλόγων
    int r = 10; // πλήθος γύρων αγώνα
    if (argc == 3) // έλεγχος αν έχει περάσει ο χρήστης τιμές για τα άλογα και τους γύρους
    {
        h = atoi(argv[1]);
        r = atoi(argv[2]);
        if (h == 0 || h > 10 || r == 0 || r > 20) // έλεγχος αν δεν ικανοποιούνται οι περιορισμοί της εκφώνησης
        {
            cerr << "Wrong input values" << endl;
            exit(-1); // τερματισμός προγράμματος
        }
    }

    arena ar(h, r);
    ar.display_horses();
    ar.race();
    ar.display_standings();
}
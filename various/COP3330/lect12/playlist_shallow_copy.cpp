#include <iostream>
#include <string>

using namespace std;

class song
{
public:
    string title;
    int duration;
};

class playlist
{
private:
    int array_size;
    int num_songs = 0;
    song *plist = nullptr;

public:
    playlist(int as) : array_size(as), plist(new song[as])
    {
        cout << "Constructor playlist(int) called" << endl;
    }
    ~playlist()
    {
        cout << "delete array of songs of PLAYLIST object at " << this << endl;
        delete[] plist;
        plist = nullptr;
        cout << "array of songs of PLAYLIST object at " << this << " actually deleted" << endl;
    }

    void add_song(string t, int d)
    {
        if (num_songs >= array_size)
        {
            cerr << "Song not added, maximum playlist size reached" << endl;
            return;
        }
        plist[num_songs].title = t;
        plist[num_songs].duration = d;
        num_songs++;
    }

    friend ostream &operator<<(ostream &os, const playlist &pl)
    {
        os << "---------------------------" << endl;
        os << "PLAYLIST object at " << &pl << endl;
        for (int i = 0; i < pl.num_songs; i++)
            os << pl.plist[i].title << " " << pl.plist[i].duration << endl;
        os << "---------------------------" << endl;
        return os;
    }
};

// Στο παράδειγμα που ακολουθεί δημιουργούνται 3 αντικείμενα playlist.
// Λόγω της χρήσης των copy constructor και copy assignment (που πραγματοποιούν shallow copy εφόσον δεν έχουν οριστεί ρητά) τα αντικείμενα περιέχουν δείκτες προς τον ίδιο πίνακα αντικειμένων song.
// Συνεπώς αλλαγές σε ένα στοιχείο του πίνακα αντικειμένων song από ένα από τα αντικείμενα playlist εμφανίζονται ότι έχουν γίνει και στα άλλα.
// Το πρόβλημα γίνεται χειρότερο καθώς οι destructors θα επιδιώξουν αποδέσμευση του ίδιου δυναμικά δεσμευμένου πίνακα 3 φορές (η πρώτη θα επιτύχει και οι άλλες δύο θα αποτύχουν, πιθανά σιωπηλά).

int main()
{
    playlist a_playlist(5);
    a_playlist.add_song("s1", 130);
    a_playlist.add_song("s2", 210);
    cout << a_playlist << endl;

    playlist b_playlist(a_playlist); // κλήση του copy constructor
    b_playlist.add_song("s3", 115);
    cout << a_playlist << endl; // το αντικείμενο song("s3", 115) δεν εμφανίζεται στη λίστα των τραγουδιών του a_playlist διότι το num_songs για το a_playlist παραμένει 2
    cout << b_playlist << endl;

    playlist c_playlist(10);
    c_playlist = a_playlist;       // κλήση του copy assignment
    c_playlist.add_song("s4", 90); // "διαγραφή" του αντικειμένου song("s3", 115)
    cout << a_playlist << endl;
    cout << b_playlist << endl;
    cout << c_playlist << endl;
}

/*
Constructor playlist(int) called
---------------------------
PLAYLIST object at 0x79fd40
s1 130
s2 210
---------------------------

---------------------------
PLAYLIST object at 0x79fd40
s1 130
s2 210
---------------------------

---------------------------
PLAYLIST object at 0x79fd30
s1 130
s2 210
s3 115
---------------------------

Constructor playlist(int) called
---------------------------
PLAYLIST object at 0x79fd40
s1 130
s2 210
---------------------------

---------------------------
PLAYLIST object at 0x79fd30
s1 130
s2 210
s4 90
---------------------------

---------------------------
PLAYLIST object at 0x79fd20
s1 130
s2 210
s4 90
---------------------------

delete array of songs of PLAYLIST object at 0x79fd20
array of songs of PLAYLIST object at 0x79fd20 actually deleted
delete array of songs of PLAYLIST object at 0x79fd30
*/
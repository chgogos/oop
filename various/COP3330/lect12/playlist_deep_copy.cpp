// rule of three
// destructor, copy constructor, copy assignment

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
    }
    
    // copy constructor
    playlist(const playlist &other)
    {
        array_size = other.array_size;
        num_songs = other.num_songs;
        plist = new song[array_size];
        for (int i = 0; i < num_songs; i++)
        {
            plist[i].title = other.plist[i].title;
            plist[i].duration = other.plist[i].duration;
        }
    }
    
    // copy assignment operator
    playlist &operator=(const playlist &other)
    {
        array_size = other.array_size;
        num_songs = other.num_songs;
        if (plist != nullptr)
            delete[] plist;
        plist = new song[array_size];
        for (int i = 0; i < num_songs; i++)
        {
            plist[i].title = other.plist[i].title;
            plist[i].duration = other.plist[i].duration;
        }
        return *this;
    }
    
    ~playlist()
    {
        cout << "delete array of songs" << endl;
        delete[] plist;
        cout << "array of songs deleted" << endl;
    }

    void add_song(string t, int d)
    {
        if (num_songs >= array_size)
            return;
        plist[num_songs].title = t;
        plist[num_songs].duration = d;
        num_songs++;
    }

    friend ostream &operator<<(ostream &os, const playlist &pl)
    {
        os << "PLAYLIST " << &pl << endl;
        for (int i = 0; i < pl.num_songs; i++)
            os << pl.plist[i].title << " " << pl.plist[i].duration << endl;
        return os;
    }
};

int main()
{
    playlist a_playlist(5);
    a_playlist.add_song("s1", 130);
    a_playlist.add_song("s2", 210);
    cout << a_playlist << endl;

    playlist b_playlist(a_playlist); // κλήση του copy constructor
    cout << b_playlist << endl;

    playlist c_playlist(10);
    c_playlist = a_playlist; // κλήση του copy assignment
    cout << a_playlist << endl; 
}

/*
PLAYLIST 0x63fda0
s1 130
s2 210

PLAYLIST 0x63fd90
s1 130
s2 210

PLAYLIST 0x63fda0
s1 130
s2 210

delete array of songs
array of songs deleted
delete array of songs
array of songs deleted
delete array of songs
array of songs deleted
*/
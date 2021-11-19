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

    // deleted copy constructor
    playlist(const playlist &other) = delete;

    // deleted copy assignment operator
    playlist &operator=(const playlist &other) = delete;

    ~playlist()
    {
        cout << "delete array of songs" << endl;
        delete[] plist;
        cout << "array of songs deleted" << endl;
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

    // playlist b_playlist(a_playlist); // error: use of deleted function 'playlist::playlist(const playlist&)'
    // cout << b_playlist << endl;

    // playlist c_playlist(10);
    // c_playlist = a_playlist;
    // cout << a_playlist << endl; // error: use of deleted function 'playlist& playlist::operator=(const playlist&)
}
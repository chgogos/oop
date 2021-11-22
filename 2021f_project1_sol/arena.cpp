#include <chrono>
#include <random>
#include <algorithm>

#include "arena.hpp"

#define DNF 999

vector<string> arena::horse_names = {"Blitz", "Bolt", "Goliath", "Hercules",
                                     "Rogue", "Danger", "Raider", "Storm", "Nitro", "Hulk"};

arena::arena(int h, int r) : h(h), r(r)
{
    for (int i = 0; i < h; i++)
    {
        positions.push_back(0);
        finish_positions.push_back(-1);
    }
    unsigned seed = chrono::steady_clock::now().time_since_epoch().count();
    random_generator = default_random_engine{seed};
    std::shuffle(begin(horse_names), end(horse_names), random_generator); // Ανακάτεμα vector με ονόματα αλόγων

    std::uniform_int_distribution<int> dist(50, 100); // γεννήτρια παραγωγής τυχαίων ακέραιων αριθμών από 50 μέχρι και 100
    for (int i = 0; i < h; i++)
    {
        int ss = dist(random_generator); // τυχαία επιλεγμένη τιμή για startup
        int pw = dist(random_generator); // τυχαία επιλεγμένη τιμή για power
        int st = dist(random_generator); // τυχαία επιλεγμένη τιμή για stamina
        horse a_horse(i + 1, horse_names[i], ss, pw, st);
        horses.push_back(a_horse);
    }
}

void arena::display_arena() const
{
    for (size_t i = 0; i < positions.size(); i++)
    {
        for (int j = 0; j < r; j++)
        {
            if (positions[i] == j)
            {
                cout << i + 1;
            }
            else
            {
                cout << ".";
            }
        }
        cout << endl;
    }
}

void arena::race(bool fast_forward)
{
    std::uniform_int_distribution<int> dist(0, 100);
    bool race_terminated = false;
    int step = 0;
    int rank = 1;
    int horses_finished = 0;
    display_arena();
    if (!fast_forward) // Έλεγχος αν έχει δωθεί στην τιμή fast_forward true. Αν περαστεί true παραλείπεται το μπλοκ εντολών της if
    {
        cout << "Press <ENTER> to advance one step";
        cin.get(); // Λήψη οποιασδήποτε εισόδου από το χρήστη, συμπεριλαμβανομέων και κενών χαρακτήρων
    }
    while (!race_terminated) // Αν περαστεί true δεν εκτελείται το μπλοκ εντολών
    {
        for (int i = 0; i < h; i++)
        {
            if (finish_positions[i] != -1)
                continue;
            if (horses[i].move_forward(step, dist(random_generator)))
            {
                positions[i]++;
                if (positions[i] == r - 1)
                {
                    finish_positions[i] = rank;
                    rank++;
                    horses_finished++;
                }
            }
        }
        step++;
        display_arena();
        if (step == 2 * r || horses_finished == h)
        {
            race_terminated = true;
        }
        else if (!fast_forward)
        {
            cout << "Press <ENTER> to advance one step";
            cin.get();
        }
        else
        {
            cout << "==========" << endl;
        }
    }
    for (int i = 0; i < h; i++)
    {
        if (positions[i] != r - 1)
            finish_positions[i] = DNF;
        standings.push_back({horses[i], finish_positions[i]});
    }

    std::sort(standings.begin(), standings.end(), [](auto &r1, auto &r2)
              { return r1.second < r2.second; });
}

void arena::display_standings() const
{
    for (auto &h_r : standings)
    {
        if (h_r.second == DNF)
            cout << "DNF - " << h_r.first << endl;
        else
            cout << h_r.second << " - " << h_r.first << endl;
    }
}

vector<pair<horse, int>> arena::get_standings() const
{
    return standings;
}

horse arena::get_horse_by_index(int i) const
{
    return horses[i];
}

void arena::display_horses() const
{
    cout << "Race horses" << endl;
    for (auto &h : horses)
    {
        cout << h << endl;
    }
}
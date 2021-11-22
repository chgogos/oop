#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <chrono>
#include <utility>
#include <algorithm>
#include "horse.hpp"

#define DNF 999

using namespace std;

void display_arena(const vector<int> &positions, int rounds)
{
    for (int i = 0; i < positions.size(); i++)
    {
        for (int j = 0; j < rounds; j++)
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

int main(int argc, char *argv[])
{
    int h = 4;  // πλήθος αλόγων
    int r = 10; // πλήθος γύρων αγώνα
    if (argc == 3)
    {
        h = atoi(argv[1]);
        r = atoi(argv[2]);
        if (h == 0 || h > 10 || r == 0 || r > 20)
        {
            cerr << "Wrong input values" << endl;
            exit(-1);
        }
    }
    cout << "Horses = " << h << " rounds = " << r << endl;

    vector<string> horse_names = {"Blitz", "Bolt", "Goliath", "Hercules",
                                  "Rogue", "Danger", "Raider", "Storm", "Nitro", "Hulk"};

    unsigned seed = chrono::steady_clock::now().time_since_epoch().count();
    auto rng = default_random_engine{seed};
    shuffle(begin(horse_names), end(horse_names), rng);

    std::uniform_int_distribution<int> dist(50, 100); // γεννήτρια παραγωγής τυχαίων ακέραιων αριθμών από 50 μέχρι και 100
    std::uniform_int_distribution<int> dist2(0, 100); // γεννήτρια παραγωγής τυχαίων ακέραιων αριθμών από 0 μέχρι και 100

    vector<horse> horses;        // Διάνυσμα με τα άλογα που συμμετέχουν στον αγώνα
    vector<int> positions;       // Τρέχουσα θέση κάθε αλόγου στον αγώνα (γύρος στον οποίο βρίσκεται κατά τον αγώνα)
    vector<int> finish_position; // Θέση τερματισμού κάθε αλόγου
    for (int i = 0; i < h; i++)
    {
        int ss = dist(rng); // τυχαία επιλεγμένη τιμή για startup
        int pw = dist(rng); // τυχαία επιλεγμένη τιμή για power
        int st = dist(rng); // τυχαία επιλεγμένη τιμή για stamina
        horse a_horse(i + 1, horse_names[i], ss, pw, st);
        horses.push_back(a_horse);
        positions.push_back(0);
        finish_position.push_back(-1);
    }

    for (auto &h : horses)
    {
        cout << h << endl;
    }

    bool race_terminated = false;
    int step = 0;
    int rank = 1;
    int horses_finished = 0;
    display_arena(positions, r);
    cout << "Press any key to advance one step";
    cin.get();
    while (!race_terminated)
    {
        for (int i = 0; i < h; i++)
        {
            if (finish_position[i] != -1)
                continue;
            if (horses[i].move_forward(step, dist2(rng)))
            {
                positions[i]++;
                if (positions[i] == r - 1)
                {
                    finish_position[i] = rank;
                    rank++;
                    horses_finished++;
                }
            }
        }
        step++;
        display_arena(positions, r);
        if (step == 2 * r || horses_finished == h)
        {
            race_terminated = true;
        }
        else
        {
            cout << "Press any key to advance one step";
            cin.get();
        }
    }

    vector<pair<string, int>> rankings;
    for (int i = 0; i < h; i++)
    {
        if (positions[i] != r - 1)
            finish_position[i] = DNF;
        string name_id = horses[i].get_name() + " (" + to_string(horses[i].get_id()) + ")";
        rankings.push_back({name_id, finish_position[i]});
    }

    std::sort(rankings.begin(), rankings.end(), [](auto &r1, auto &r2)
              { return r1.second < r2.second; });

    for (auto &h_r : rankings)
    {
        if (h_r.second == DNF)
            cout << "DNF - " << h_r.first << endl;
        else
            cout << h_r.second << " - " << h_r.first << endl;
    }
}
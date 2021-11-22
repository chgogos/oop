#ifndef ARENA_HPP
#define ARENA_HPP

#include <vector>
#include <random>
#include "horse.hpp"

using namespace std;

class arena
{
private:
    static vector<string> horse_names;

    int h;
    int r;
    default_random_engine random_generator;
    vector<horse> horses;
    vector<int> positions;        // θέση κάθε αλόγου κατά τη διάρκεια του αγώνα (τιμές από 0 μέχρι r-1)
    vector<int> finish_positions; // Θέση τερματισμού κάθε αλόγου
    vector<pair<horse, int>> standings;

public:
    arena(int h, int r);

    horse get_horse_by_index(int i) const;

    void race(bool fast_forward = false);

    vector<pair<horse, int>> get_standings() const;

    void display_horses() const;

    void display_arena() const;

    void display_standings() const;
};

#endif
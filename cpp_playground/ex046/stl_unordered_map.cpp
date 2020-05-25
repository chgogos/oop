#include <string>
#include <iostream>
#include <unordered_map>

int main()
{
    std::unordered_map<std::string, int> months2019 = {
        {"Jan", 31},
        {"Feb", 28},
        {"Mar", 31},
        {"Apr", 30},
    };

    months2019["May"] = 31;

    // η χρήση του months2019["Jun"] εισάγει την εγγραφή Jun->0 στο months2019
    // εφόσον η εγγραφή αυτή δεν υπάρχει ήδη στο map
    std::string m = "Jun";
    std::cout << "Checkpoint 1. " << months2019[m] << std::endl;

    // έλεγχος για το εάν η εγγραφή months2019["Jul"] υπάρχει στο map
    m = "Jul";
    if (!months2019.count(m))
        std::cout << "Checkpoint 2. Month " << m << " does not exist" << std::endl;

    std::cout << "Checkpoint 3." << std::endl;
    for (auto kv : months2019)
    {
        std::cout << kv.first << " " << kv.second << std::endl;
    }

    return 0;
}

/*
Checkpoint 1. 0
Checkpoint 2. Month Jul does not exist
Checkpoint 3.
May 31
Jan 31
Mar 31
Feb 28
Jun 0
Apr 30
*/
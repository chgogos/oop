#include <iostream>
#include <random>
#include <ctime>

using namespace std;

class Game
{
private:
    int rounds;
    int hs; // human score
    int cs; // computer score
public:
    Game() : rounds(7), hs(0), cs(0) {}
    void play()
    {
        srand(time(NULL));
        char a[] = {'R', 'P', 'S'};
        int i = 0;
        while (i < rounds)
        {
            int r = rand() % 3;
            cout << "Enter choice: ";
            char choice;
            cin >> choice;
            choice = toupper(choice);
            cout << "Round " << i + 1 << " user entered " << choice << " random number generated " << r << " " << a[r] << endl;
            if (choice != 'X')
            {
                i++; // συνέχισε αν ο χρήστης δεν εισάγει x ή X
            }
            // hs++ // αν κερδίζει ο παίκτης
            // cs++ // αν κερδίζει ο υπολογιστής
        }
        cout << "HUMAN:" << hs << " COMPUTER: " << cs << endl;
    }
};

int main()
{
    Game a_game;
    a_game.play();
}

/*
Enter choice: s
Round 1 user entered S random number generated 0 R
Enter choice: a
Round 2 user entered A random number generated 1 P
Enter choice: A
Round 3 user entered A random number generated 1 P
Enter choice: X
Round 4 user entered X random number generated 2 S
Enter choice: a
Round 4 user entered A random number generated 1 P
Enter choice: s
Round 5 user entered S random number generated 2 S
Enter choice: s
Round 6 user entered S random number generated 2 S
Enter choice: a
Round 7 user entered A random number generated 0 R
HUMAN:0 COMPUTER: 0
*/
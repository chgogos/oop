#include <iostream>
#include <random>
#include <chrono>
#include <cctype> // toupper

using namespace std;

class game
{
private:
    int rounds;
    int wins_human = 0;
    int wins_computer = 0;

    char random_selection()
    {
        mt19937 engine(chrono::system_clock::now().time_since_epoch().count());
        uniform_int_distribution<int> distribution(0, 2);
        int r = distribution(engine);
        char actions[] = {'R', 'P', 'S'};
        return actions[r];
    }

    string deabbreviate(char c)
    {
        if (c == 'R')
            return "Rock";
        else if (c == 'P')
            return "Paper";
        else
            return "Scissors";
    }

public:
    game(int r) : rounds(r) {}

    void play()
    {
        for (int i = 1; i <= rounds; i++)
        {
            cout << "############################" << endl;
            cout << "ROUND: " << i << endl;
            char human_choice, computer_choice;
            bool have_winner = false;
            while (!have_winner)
            {
                do
                {
                    cout << "Please enter your choice (R, P or S): ";
                    cin >> human_choice;
                    human_choice = toupper(human_choice);
                    if ((human_choice != 'R' && human_choice != 'P' && human_choice != 'S'))
                    {
                        cout << "Wrong choice, try again" << endl;
                    }
                } while (human_choice != 'R' && human_choice != 'P' && human_choice != 'S');
                computer_choice = random_selection();
                cout << "The computer selected " << deabbreviate(computer_choice) << " while human selected " << deabbreviate(human_choice);
                if (human_choice == 'P' && computer_choice == 'R')
                {
                    wins_human++;
                    have_winner = true;
                    cout << " --> HUMAN WINS" << endl;
                }
                else if (human_choice == 'P' && computer_choice == 'S')
                {
                    wins_computer++;
                    have_winner = true;
                    cout << " --> COMPUTER WINS" << endl;
                }
                else if (human_choice == 'R' && computer_choice == 'P')
                {
                    wins_computer++;
                    have_winner = true;
                    cout << " --> COMPUTER WINS" << endl;
                }
                else if (human_choice == 'R' && computer_choice == 'S')
                {
                    wins_human++;
                    have_winner = true;
                    cout << " --> HUMAN WINS" << endl;
                }
                else if (human_choice == 'S' && computer_choice == 'R')
                {
                    wins_computer++;
                    have_winner = true;
                    cout << " --> COMPUTER WINS" << endl;
                }
                else if (human_choice == 'S' && computer_choice == 'P')
                {
                    wins_human++;
                    have_winner = true;
                    cout << " --> HUMAN WINS" << endl;
                }
                else
                {
                    cout << " --> IT IS A DRAW" << endl;
                }
                cout << "Human: " << wins_human << " Computer: " << wins_computer << endl;
            }
            if (abs(wins_human - wins_computer) > rounds - i)
                break;
        }
        if (wins_human > wins_computer)
        {
            cout << "THE FINAL WINNER IS THE HUMAN" << endl;
        }
        else if (wins_human < wins_computer)
        {
            cout << "THE FINAL WINNER IS THE COMPUTER" << endl;
        }
        else
        {
            cout << "DRAW" << endl;
        }
    }
};

int main()
{
    game g(7);
    g.play();
}
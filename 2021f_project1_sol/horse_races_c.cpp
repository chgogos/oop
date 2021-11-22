#include <iostream>
#include <limits> // numeric_limits
#include <ios>    // streamsize  see (https://www.tutorialspoint.com/what-is-the-use-of-cin-ignore-in-cplusplus)
#include "horse.hpp"
#include "arena.hpp"

using namespace std;

int main()
{
    int h = 8;  // πλήθος αλόγων
    int r = 10; // πλήθος γύρων αγώνα

    char yn;
    int amount, initial_amount;
    do
    {
        cout << "Enter initial amount: ";
        cin >> initial_amount;
        if (cin.fail()) // Έλεγχος αν ο χρήστης εισήγαγε λάθος τύπο δεδομένων
        {
            cerr << "Error - amount should be a number in [1, 1.000.000]" << endl;
            cin.clear(); // https://stackoverflow.com/questions/5131647/why-would-we-call-cin-clear-and-cin-ignore-after-reading-input
            // Καθαρισμός του flag που έχει τεθεί. Αν δεν καθαριστεί το πρόγραμμα δεν θα μπορεί να πάρει είσοδο από το χρήστη
        }
        else if (initial_amount <= 0 || initial_amount > 1000000)
        {
            cerr << "Error - amount should be a number in [1, 1.000.000]" << endl;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Καθαρισμός του buffer εισόδου πριν την επόμενη είσοδο
    } while (initial_amount <= 0 || initial_amount > 1000000);
    amount = initial_amount;
    cout << "You deposited  " << amount << " euros" << endl;
    while (amount > 0)
    {
        arena ar(h, r);
        ar.display_horses();
        int selected_horse_id, bet;
        do
        {
            cout << "Enter horse number: ";
            cin >> selected_horse_id;
            if (cin.fail())
            {
                cerr << "Error - Please give an integer from 1 to " << h << endl;
                cin.clear();
            }
            else if (selected_horse_id <= 0 || selected_horse_id > h)
            {
                cerr << "Error - Please give an integer from 1 to " << h << endl;
            }
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } while (selected_horse_id <= 0 || selected_horse_id > h);
        do
        {
            cout << "Enter bet: ";
            cin >> bet;
            if (cin.fail())
            {
                cerr << "Error - You can bet only up to " << amount << " euros" << endl;
                cin.clear();
                bet = -1;
            }
            else if (bet <= 0 || bet > amount)
            {
                cerr << "Error - You can bet only up to " << amount << " euros" << endl;
            }
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } while (bet <= 0 || bet > amount);
        cout << "You bet " << bet << " euros on horse " << ar.get_horse_by_index(selected_horse_id - 1).get_name() << ". Good luck!" << endl;
        do
        {
            cout << "Do you want to see the race step by step (y/n)? ";
            cin >> yn;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            if (yn != 'n' && yn != 'y')
            {
                cerr << "Error - Please insert y for yes or n for no" << endl;
            }
        } while (yn != 'n' && yn != 'y');
        cout << "The race is about to start" << endl;
        ar.race(yn == 'n');
        ar.display_standings();
        int finish_position = -1;
        for (int i = 0; i < h; i++)
        {
            auto st = ar.get_standings()[i];
            if (st.first.get_id() == selected_horse_id)
            {
                finish_position = i;
            }
        }
        if (finish_position == 0)
        {
            cout << ":) You have won " << bet << " euros!" << endl;
            amount += bet;
        }
        else if (finish_position <= 2)
        {
            cout << ":| You get your money back" << endl;
        }
        else
        {
            cout << ":( You have lost " << bet << " euros" << endl;
            amount -= bet;
        }
        if (amount == 0)
        {
            cout << "You have no money, bye" << endl;
            break;
        }
        cout << "You now have " << amount << " euros. Do you want to continue (y/n)? ";
        do
        {
            cin >> yn;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            if (yn != 'n' && yn != 'y')
            {
                cerr << "Error - Please insert y for yes or n for no" << endl;
            }
        } while (yn != 'n' && yn != 'y');
        if (yn == 'n')
            break;
    }
    cout << "You started with " << initial_amount << " euros and now you have " << amount << " euros" << endl;
}
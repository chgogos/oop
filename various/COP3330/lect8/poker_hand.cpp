#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

/* πίνακας 13 δεικτών σε χαρακτήρες αρχικοποιημένο να δείχνει προς λεκτικά 
με τις ονομασίες των τραπουλόχαρτων */
const char *card_string[13] = {"Ace", "Two", "Three", "Four",
                               "Five", "Six", "Seven", "Eight",
                               "Nine", "Ten", "Jack", "Queen",
                               "King"};
const char *suit_string[4] = {"heart", "spade", "diamond", "club"};

/* παρόμοιο με #define HEART=0, SPADE=1, DIAMOND=2... */
enum card_suit
{
    HEART = 0,
    SPADE,
    DIAMOND,
    CLUB
};

/* κλάση για ένα τραπουλόχαρτο*/
class Card
{
    friend ostream &operator<<(ostream &, Card);

public:
    Card(int s = HEART, int v = 1);

private:
    int suit;
    int value; /* 1-12 */
};

Card::Card(int s, int v)
{
    suit = s;
    value = v;
}

ostream &operator<<(ostream &os, Card c)
{
    os << "[" << card_string[c.value - 1] << " of " << suit_string[c.suit] << "s]";
    return os;
}

class PokerHand
{
    friend ostream &operator<<(ostream &, PokerHand);

public:
    PokerHand();

private:
    Card c1, c2, c3, c4, c5;
};

PokerHand::PokerHand()
{

    int val, suit;

    val = 1 + rand() % 13;
    suit = rand() % 4;
    c1 = Card(suit, val);

    val = 1 + rand() % 13;
    suit = rand() % 4;
    c2 = Card(suit, val);

    val = 1 + rand() % 13;
    suit = rand() % 4;
    c3 = Card(suit, val);

    val = 1 + rand() % 13;
    suit = rand() % 4;
    c4 = Card(suit, val);

    val = 1 + rand() % 13;
    suit = rand() % 4;
    c5 = Card(suit, val);
}

ostream &operator<<(ostream &os, PokerHand ph)
{
    os << "Poker Hand  --" << ph.c1 << ph.c2 << ph.c3 << ph.c4 << ph.c5 << "--\n";
    return os;
}

int main()
{

    /* αρχικοποίηση τυχαίας ακολουθίας τιμών */
    srand(time(NULL));
    PokerHand p;

    cout << p;
    return 0;
}

/* έξοδος
Poker Hand  --[Ten of clubs][Ten of hearts][Jack of diamonds][Three of hearts][King of spades]--
*/
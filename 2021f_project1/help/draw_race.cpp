#include <iostream>

using namespace std;

void draw(int positions[], int horses, int rounds)
{
    for (int i = 0; i < horses; i++)
    {
        cout << "|";
        for (int j = 0; j < rounds; j++)
        {
            if (j == positions[i])
                cout << i;
            else
                cout << ".";
        }
        cout << "|" << endl;
    }
}

int main()
{

    int rounds = 20;
    int horses = 5;
    int positions[] = {0, 2, 0, 3, 1};

    draw(positions, horses, rounds);
    for (int r = 1; r < 5; r++)
    {
        cout << "press any key to continue";
        cin.get();
        for (int i = 0; i < 5; i++)
        {
            positions[i]++;
        }
        draw(positions, horses, rounds);
    }
}
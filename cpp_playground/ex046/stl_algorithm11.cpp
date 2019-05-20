// δημιουργία 1.000 ακεραίων τιμών στο διάστημα [0,1.000.000]
// εμφάνιση των 10 μεγαλύτερων άρτιων τιμών

#include <iostream>
#include <random>
#include <algorithm>
#include <numeric>

#define N 1000

int main()
{
    std::random_device rd;
    // std::mt19937 eng(rd());
    std::mt19937 eng(123456789L); // ίδιες τυχαίες τιμές κάθε φορά
    std::uniform_int_distribution<int> dist(1, 1000000);
    int a[N];
    for (int i = 0; i < N; i++)
    {
        a[i] = dist(eng);
    }

    // α' τρόπος
    std::cout << "CHECKPOINT 1" << std::endl;
    std::sort(a, a + N, std::greater<int>());
    int c = 0;
    for (int i = 0; i < N; i++)
    {
        if (a[i] % 2 == 0)
        {
            std::cout << a[i] << std::endl;
            c++;
            if (c == 10)
            {
                break;
            }
        }
    }

    // β' τρόπος
    std::cout << "CHECKPOINT 2" << std::endl;

    std::sort(a, a + N, std::greater<int>());
    std::remove_if(std::begin(a), std::end(a), [](int x) { return x % 2 == 1; });
    for (int i = 0; i < 10; i++)
    {
        std::cout << a[i] << std::endl;
    }

    return 0;
}
#include <iostream>
#include <stdlib.h>

using namespace std;

main()
{
    int i;

    for (i = 0; i < 10; i++)
    {
        try
        {
            if (i % 4 == 0)
                throw i;
            else if (i % 2 == 0)
                throw 'a';
            else
                throw 0.5;
        }
        catch (int e)
        {
            cout << "get int exception no: " << e << endl;
        }
        catch (char)
        {
            cout << "get char exception\n";
        }
        catch (...)
        {
            cout << "get other exception\n";
        }
    }
}

/*
get int exception no: 0
get other exception
get char exception
get other exception
get int exception no: 4
get other exception
get char exception
get other exception
get int exception no: 8
get other exception
*/

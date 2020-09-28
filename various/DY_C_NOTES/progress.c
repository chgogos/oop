#include <unistd.h>
#include <stdio.h>

int main()
{
    for (int i = 0; i <= 100; i+=10)
    {
        sleep(1);        
        printf("%d%% complete\r", i);
    }
}
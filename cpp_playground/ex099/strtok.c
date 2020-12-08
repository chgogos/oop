#include <stdio.h>
#include <string.h>

int main()
{
    char myString[] = "The quick brown fox";
    char *p = strtok(myString, " ");
    while (p)
    {
        printf("%s\n", p);
        p = strtok(NULL, " ");
    }
}

/*
The
quick
brown
fox
*/
#include <iostream>

using namespace std;

void mystrcpy(char *dst, const char *src)
{
    if (*src == '\0')
    {
        *dst = *src;
        return;
    }
    *dst = *src;
    mystrcpy(dst + 1, src + 1);
}

main()
{
    char res[100];
    mystrcpy(res, "Hello world.\n");
    cout << res << endl;
}
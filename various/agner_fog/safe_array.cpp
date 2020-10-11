// https://docs.microsoft.com/en-us/windows/win32/api/errhandlingapi/nf-errhandlingapi-fatalappexita

#include <iostream>
#include <windows.h>

template <typename T, unsigned int N>
class SafeArray
{
protected:
    T a[N];

public:
    SafeArray()
    {
        memset(a, 0, sizeof(a));
    }
    int Size()
    {
        return N;
    }
    T &operator[](unsigned int i)
    {
        if (i >= N)
        {
            // return *(T *)0; // unconventional way of returning an error
            FatalAppExitA(0, "Array index out of range"); // Windows
        }
        return a[i];
    }
};

int main()
{
    SafeArray<float, 10> list;
    for (int i = 0; i <= 10; i++)
    {
        std::cout << list[i] << std::endl;
    }
}
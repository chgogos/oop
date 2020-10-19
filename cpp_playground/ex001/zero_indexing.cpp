#include <iostream>

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    std::cout << "Address of array: " << a << std::endl;

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Item " << i << " is at address: " << &a[i] << " and has value " << a[i] << " " << *(a + i) << " " << *(i + a) << " " << i[a] << std::endl;
    }

    return 0;
}

/*
Address of array: 0x62fe00
Item 0 is at address: 0x62fe00 and has value 1 1 1 1
Item 1 is at address: 0x62fe04 and has value 2 2 2 2
Item 2 is at address: 0x62fe08 and has value 3 3 3 3
Item 3 is at address: 0x62fe0c and has value 4 4 4 4
Item 4 is at address: 0x62fe10 and has value 5 5 5 5
*/
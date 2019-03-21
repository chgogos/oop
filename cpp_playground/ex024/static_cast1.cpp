#include <iostream>

int main()
{
    double d = 3.1415;
    int i1 = d;                   // implicit μετατροπή double σε int
    int i2 = (int)d;              // explicit μετατροπή double σε int
    int i3 = static_cast<int>(d); // explicit μετατροπή double σε int

    std::cout << "1. " << i1 << std::endl;
    std::cout << "2. " << i2 << std::endl;
    std::cout << "3. " << i3 << std::endl;

    int *p1 = &i1;
    std::cout << "4. " << *p1 << std::endl;

    // δείκτης double που δείχνει σε int τιμή (λάθος)
    double *p2 = (double *)&i1;
    std::cout << "5. " << *p2 << std::endl;

    // error: static_cast from 'int *' to 'double *' is not allowed
    // double *p3 = static_cast<double*>(&i1);

    return 0;
}

// templated συνάρτηση που να δέχεται έναν πίνακα 5 θέσεων με στοιχεία τύπου Τ
// και ένα στοιχείο προς αναζήτηση και να επιστρέφει πόσες φορές υπάρχει το
// στοιχείο στον πίνακα

#include <iostream>

using namespace std;

template <typename T>
int my_fun(T* a, int size, T key){
    int c = 0;
    for(int i=0;i<size;i++){
        if (a[i]==key){
            c++;
        }
    }
    return c;
}

int main()
{
    int a[]={2,3,2,2,4,5,7,8,9,2};
    int res = my_fun(a, 10, 2);
    cout << res << endl;

    double b[5]={2.1,3.2,2.1,2.4,4.5};
    res = my_fun(b, 5, 2.1);
    cout << res << endl;
}


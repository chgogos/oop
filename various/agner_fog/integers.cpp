// 7.2 
#include <iostream>
#include <stdint.h>

using namespace std;

int main(){

    // εξαρτάται από το σύστημα (16-bit ή 32-bit ή 64-bit) και τον compiler
    cout << "char " <<  sizeof(char) * 8 << endl;
    cout << "short " <<  sizeof(short) * 8 << endl;
    cout << "int " <<  sizeof(int) * 8 << endl;
    cout << "long " <<  sizeof(long) * 8 << endl;
    cout << "long long " <<  sizeof(long long) * 8 << endl;

    cout << "int8_t " <<  sizeof(int8_t) * 8 << endl;
    cout << "int16_t " <<  sizeof(int16_t) * 8 << endl;
    cout << "int32_t " <<  sizeof(int32_t) * 8 << endl;
    cout << "int64_t " <<  sizeof(int64_t) * 8 << endl;

    // 32bits σε 32-bit συστήματα, 64bits σε 64-bit συστήματα
    cout << "size_t " <<  sizeof(size_t) * 8 << endl;

}
// #include <iostream>

#define max(a,b) (((a)>(b)) ? (a) : (b))

// εκτελώντας την εντολή 
// g++ -E preprocessor.cpp
// επιστρέφεται ο κώδικας μετά την εφαρμογή του preprocessor

int main(){
    int x = 5, y=7;
    int z= max(x,y);

    // std::cout << z << std::endl;

    return 0;
}

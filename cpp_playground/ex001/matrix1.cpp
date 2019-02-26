#include <iostream>

using namespace std;

void print1(int m[3][2]){
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++)
            cout << m[i][j] << " ";
    }   
    cout << endl;
}

void print2(int m[][2]){
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++)
            cout << m[i][j] << " ";
    }   
    cout << endl;
}

void print3(int (*m)[2]){
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++)
            cout << m[i][j] << " ";
    }   
    cout << endl;
}

int main(){
    int mat[3][2]={{1,2},{3,4},{5,6}};
 
    print1(mat);
    print2(mat);
    print3(mat);    
}
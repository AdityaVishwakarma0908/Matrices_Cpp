#include <iostream>
using namespace std; // this only for representation of NxN and MxN zero matrix

void Zero_Matrix_1(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << "0 ";
        }
        cout << endl;
    }
}

void Zero_Matrix_2(int n,int m) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cout << "0 ";
        }
        cout << endl;
    }
}

int main() {
    return 0;
}
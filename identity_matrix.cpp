#include <iostream>
using namespace std; // this only for representation of NxN identity matrix

void I_Matrix(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if (i==j) {
                cout << "1 ";
            } else {
                cout << "0 ";
            }
        } 
        cout << endl;
    }
}


int main() {
    return 0;
}
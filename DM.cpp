#include <iostream>
using namespace std;

class Diagonal_Matrix { // Diagonal matrix class
private:
    int *A;
    int n;

public:

    Diagonal_Matrix() {
        n = 5;
        A = new int[5];
    }
    Diagonal_Matrix(int n) {
        this->n = n;
        A = new int[n]();
    } 
    ~Diagonal_Matrix() {
        delete[] A;
    }
 
    void Set(int i, int j, int ele);
    int Get(int i, int j);
    void Display();
};

void Diagonal_Matrix::Display() { // Diagonal function::for display diagonal matrix
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if (i == j && i <= n && j <= n) {
                if (A[i]) {
                    cout << A[i] << " ";
                } else {
                    cout << "0 ";
                }
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}
void Diagonal_Matrix::Set(int i, int j, int ele) { // Diagonal function::for set elements in diagonal matrix
    if (i == j && i <= n && j <= n) {
        A[i-1] = ele;
    }
}
int Diagonal_Matrix::Get(int i, int j) { // Diagonal function::for get element form given position diagonal matrix
    if (i == j && i <= n && j <= n) {
        return A[i-1];
    } else {
        return 0;
    }
}

int main() {
    return 0;
}

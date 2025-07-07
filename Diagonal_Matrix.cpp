#include <iostream>
using namespace std;

class Diagonal_Matrix { // Diagonal matrix class
private:
    int *A;
    int n;
    
public:
    Diagonal_Matrix(); // default constructor
    Diagonal_Matrix(int n); // parameterized constructor
    ~Diagonal_Matrix(); // distructor
    void Set(int i, int j, int ele);
    int Get(int i, int j);
    int Del(int i, int j);
    void Display();

};

Diagonal_Matrix::Diagonal_Matrix() { // default constructor
    n = 5;
    A = new int[5];
}
Diagonal_Matrix::Diagonal_Matrix(int n) { // parameterized constructor
    this->n = n;
    A = new int[n]();
}
Diagonal_Matrix::~Diagonal_Matrix() { // distructor
    delete[] A;
}
void Diagonal_Matrix::Display() { // Diagonal function::for display diagonal matrix
    cout << endl;
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
int Diagonal_Matrix::Del(int i, int j) { // Diagonal function::for deleting diagonal elements
    int x = -1;
    if (i == j && i <= n && j <= n) {
        x = A[i-1];
        A[i-1] = 0;
    }
    return x;
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
    Diagonal_Matrix D(3);
    D.Set(1,3,1);
    D.Set(1,1,2);
    D.Set(3,3,3);
    D.Set(1,2,4);
    D.Display();
    cout << D.Del(1,1);
    D.Display();
    cout << D.Del(3,3);
    D.Display();


    D.~Diagonal_Matrix();
    return 0;
}

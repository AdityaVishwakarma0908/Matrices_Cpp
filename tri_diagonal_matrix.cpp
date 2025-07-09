#include <iostream>
using namespace std;

class Tri_Diagonal_Matrix { // Tri diagonal matrix class
    private:
    int *A;
    int n;

public:
    Tri_Diagonal_Matrix();
    Tri_Diagonal_Matrix(int n);
    ~Tri_Diagonal_Matrix();
    void Set(int i, int j, int ele);
    int Get(int i, int j);
    int Del(int i, int j);
    void Display();
};

Tri_Diagonal_Matrix::Tri_Diagonal_Matrix() { //default constructor
    n = 5;
    A = new int[15]();
}

Tri_Diagonal_Matrix::Tri_Diagonal_Matrix(int n) { // paarameterized constructor
    this->n = n;
    A = new int[n*(n+1)/2]();
}

Tri_Diagonal_Matrix::~Tri_Diagonal_Matrix() { // distructor
    delete[] A;
}

void Tri_Diagonal_Matrix::Display() { // Tri diagonal function::for display diagonal matrix
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            if (i-j==1 && i <= n && j <= n) {
                cout << A[i-2] << " ";
            } else if (i-j==0 && i <= n && j <= n) {
                cout << A[(n-2)+i] << " ";
            } else if (i-j==-1 && i <= n && j <= n) {
                cout << A[(2*n-2)+i] << " ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}
int Tri_Diagonal_Matrix::Del(int i,int j) { // Tri diagonal function::for deleting elements in tri diagonal matrix
    int x;
    if (i >= 1 && j >= 1 && i <= n && j <= n && i-j==1) {
        x = A[i-2];
        A[i-2] = 0;
        return x;
    } else if (i >= 1 && j >= 1 && i <= n && j <= n && i-j==0) {
        x = A[(n-2)+i];
        A[(n-2)+i] = 0;
        return x;
    } else if (i >= 1 && j >= 1 && i <= n && j <= n && i-j==-1) {
        x = A[(2*n-2)+i];
        A[(2*n-2)+i] = 0;
        return x;
    } 
}
void Tri_Diagonal_Matrix::Set(int i, int j, int ele) {  // Tri diagonal function::for set elements in tri diagonal matrix
    if (i >= 1 && j >= 1 && i <= n && j <= n && i-j==1) {
        A[i-2] = ele;
    } else if (i >= 1 && j >= 1 && i <= n && j <= n && i-j==0) {
        A[(n-2)+i] = ele;
    } else if (i >= 1 && j >= 1 && i <= n && j <= n && i-j==-1) {
        A[(2*n-2)+i] = ele;
    } 
}
int Tri_Diagonal_Matrix::Get(int i, int j) { // Tri diagonal function::for get element form given position tri diagonal matrix
    if (i >= 1 && j >= 1 && i <= n && j <= n && i-j==1) {
        return A[i-2];
    } else if (i >= 1 && j >= 1 && i <= n && j <= n && i-j==0) {
        return A[(n-2)+i];
    } else if (i >= 1 && j >= 1 && i <= n && j <= n && i-j==-1) {
        return A[(2*n-2)+i];
    } 
}

int main() {
    Tri_Diagonal_Matrix tdm;
    tdm.Display();
    cout << endl;
    tdm.Set(1,2,7);
    tdm.Display();
    cout << endl;
    tdm.Del(1,2);
    tdm.Display();

    return 0;
}
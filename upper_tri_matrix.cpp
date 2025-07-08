#include <iostream>
using namespace std;

class Upper_Matrix { // Upper triangle matrix class
private:
    int *A;
    int n;

public:
    Upper_Matrix();
    Upper_Matrix(int n);
    ~Upper_Matrix();

    void Set(int i, int j, int ele);
    int Get(int i, int j);
    int Del(int i, int j);
    void Display();
};

Upper_Matrix::Upper_Matrix() { // defalut constructor
    n = 5;
    A = new int[15]();
}

Upper_Matrix::Upper_Matrix(int n) { // parapeterized constructor
    this->n = n;
    A = new int[n*(n+1)/2]();
}

Upper_Matrix::~Upper_Matrix() { //distructor
    delete[] A;
}

void Upper_Matrix::Display() { // Upper triangle function::for display Upper tri matrix
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            if (i <= j && i <= n && j <= n) {
                cout << A[(j*(j-1)/2) + i-1] << " ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}
void Upper_Matrix::Set(int i, int j, int ele) { // Upper triangle function::for set elements in Upper tri matrix
    if (i >= 1 && j >= 1 && i <= n && j <= n && i <= j) {
        A[(j*(j-1)/2) + (i-1)] = ele;
    }
}

int Upper_Matrix::Del(int i, int j) { // Upper triangle function::for delete elements form Upper tri matrix
    int x=-1;
    x = A[(j*(j-1)/2) + (i-1)];
    A[(j*(j-1)/2) + (i-1)] = 0;
    return x;
}

int Upper_Matrix::Get(int i, int j) { // Upper triangle function::for get element form given position Upper tri matrix
    if (i <= j && i <= n && j <= n) {
        return A[(j*(j-1)/2) + i-1];
    } else {
        return 0;
    }
}

int main() {
    Upper_Matrix um;
    um.Set(2,4,9);
    cout << um.Del(2,4);
    um.Display();

    return 0;
}
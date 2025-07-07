#include <iostream>
using namespace std;

class Lower_Matrix { // Lower triangle matrix class
private:
    int *A;
    int n;

public:
    Lower_Matrix() {
        n = 5;
        A = new int[15]();
    }
    Lower_Matrix(int n) {
        this->n = n;
        A = new int[n*(n+1)/2]();
    }
    ~Lower_Matrix() {
        delete[] A;
    }

    void Set(int i, int j, int ele);
    int Get(int i, int j);
    void Display();
};

void Lower_Matrix::Display() { // Lower triangle function::for display diagonal matrix
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            if (i >= j && i <= n && j <= n) {
                cout << A[(i*(i-1)/2) + (j-1)] << " ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}
void Lower_Matrix::Set(int i, int j, int ele) { // Lower triangle function::for set elements in diagonal matrix
    if (i >= 1 && j >= 1 && i <= n && j <= n && i >= j) {
        A[(i*(i-1)/2) + (j-1)] = ele;
    }
}
int Lower_Matrix::Get(int i, int j) { // Lower triangle function::for get element form given position diagonal matrix
    if (i >= j && i <= n && j <= n) {
        return A[(i*(i-1)/2) + (j-1)];
    } else {
        return 0;
    }
}

int main() {
    return 0;
}
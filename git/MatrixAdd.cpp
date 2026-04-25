#include <iostream>
using namespace std;

class Matrix {
    int a[2][2];

public:
    void input() {
        cout << "Enter 4 elements:\n";
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                cin >> a[i][j];
    }

    void add(Matrix m) {
        int res[2][2];

        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                res[i][j] = a[i][j] + m.a[i][j];

        cout << "Result:\n";
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++)
                cout << res[i][j] << " ";
            cout << endl;
        }
    }
};

int main() {
    Matrix m1, m2;
    m1.input();
    m2.input();
    m1.add(m2);
}
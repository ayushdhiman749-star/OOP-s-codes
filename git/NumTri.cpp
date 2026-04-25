#include <iostream>
using namespace std;

class NumberTriangle {
public:
    void print(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << j << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    NumberTriangle obj;
    obj.print(4);
    return 0;
}
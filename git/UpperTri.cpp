#include <iostream>
using namespace std;

class InvertedTriangle {
public:
    void print(int n) {
        for (int i = n; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                cout << "* ";
            }
            cout << endl;
        }
    }
};

int main() {
    InvertedTriangle obj;
    obj.print(4);
    return 0;
}
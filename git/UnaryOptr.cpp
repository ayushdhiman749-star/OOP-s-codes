#include <iostream>
using namespace std;

class Number {
    int n;

public:
    Number(int a) {
        n = a;
    }

    void operator-() {
        n = -n;
    }

    void display() {
        cout << n << endl;
    }
};

int main() {
    Number n(5);
    -n;
    n.display();
    return 0;
}
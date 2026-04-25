#include <iostream>
using namespace std;

template <class T, class U>
class Test {
    T a;
    U b;

public:
    Test(T x, U y) {
        a = x;
        b = y;
    }

    void display() {
        cout << a << " " << b << endl;
    }
};

int main() {
    Test<int, float> t1(10, 5.5);
    t1.display();

    return 0;
}
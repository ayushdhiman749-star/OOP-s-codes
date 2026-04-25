#include <iostream>
using namespace std;

class Demo {
public:
    int *ptr;

    Demo(int val) {
        ptr = new int(val);
    }
};

int main() {
    Demo d1(10);
    Demo d2 = d1;  // Shallow copy

    *d2.ptr = 50;

    cout << *d1.ptr << endl; // also changes!
    return 0;
}
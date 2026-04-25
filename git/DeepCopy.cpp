#include <iostream>
using namespace std;

class Demo {
    int *ptr;

public:
    Demo(int val) {
        ptr = new int;
        *ptr = val;
    }

    Demo(const Demo &d) {
        ptr = new int;
        *ptr = *d.ptr;
    }

    void display() {
        cout << *ptr << endl;
    }
};

int main() {
    Demo d1(10);
    Demo d2 = d1;

    d1.display();
    d2.display();
    return 0;
}
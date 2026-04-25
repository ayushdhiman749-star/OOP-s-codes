#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Default Constructor" << endl;
    }

    Demo(int a) {
        cout << "One parameter constructor: " << a << endl;
    }

    Demo(int a, int b) {
        cout << "Two parameter constructor: " << a << ", " << b << endl;
    }
};

int main() {
    Demo d1;
    Demo d2(5);
    Demo d3(3, 4);
    return 0;
}
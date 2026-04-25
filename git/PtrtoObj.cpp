#include <iostream>
using namespace std;

class Demo {
public:
    int x = 10;

    void show() {
        cout << x << endl;
    }
};

int main() {
    Demo d;
    Demo *ptr = &d;

    ptr->show();

    return 0;
}
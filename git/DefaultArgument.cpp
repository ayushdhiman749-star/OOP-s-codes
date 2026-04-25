#include <iostream>
using namespace std;

class Demo {
public:
    int show(int a = 10, int b = 20) {
        return a + b;
    }
};

int main() {
    Demo d;
    cout << d.show() << endl;
    cout << d.show(5, 5) << endl;
    return 0;
}
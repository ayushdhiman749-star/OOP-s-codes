#include <iostream>
using namespace std;

class Test {
    int n;

public:
    Test(int a) {
        n = a;
    }

    friend void display(Test t);
};

void display(Test t) {
    cout << "Value: " << t.n;
}

int main() {
    Test t(50);
    display(t);
    return 0;
}
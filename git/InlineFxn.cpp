#include <iostream>
using namespace std;

class Test {
public:
    inline int square(int n) {
        return n * n;
    }
};

int main() {
    Test t;
    cout << "Square: " << t.square(5);
    return 0;
}
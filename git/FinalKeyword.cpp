#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() final {
        cout << "Final Function\n";
    }
};

// class Derived : public Base {
//     void show() {} // ERROR (cannot override final)
// };

int main() {
    Base b;
    b.show();
    return 0;
}
#include <iostream>
#include <memory>
using namespace std;

class Demo {
public:
    Demo() { cout << "Constructor\n"; }
    ~Demo() { cout << "Destructor\n"; }
};

int main() {
    unique_ptr<Demo> ptr = make_unique<Demo>();
    return 0;
}
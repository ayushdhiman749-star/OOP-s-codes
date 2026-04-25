#include <iostream>
using namespace std;

int main() {
    try {
        throw 10;
    }
    catch(int x) {
        cout << "Integer: " << x << endl;
    }
    catch(...) {
        cout << "Unknown Exception\n";
    }
    return 0;
}
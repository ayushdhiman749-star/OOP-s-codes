#include <iostream>
using namespace std;

template <class T, class U>
void display(T a, U b) {
    cout << a << " " << b << endl;
}

int main() {
    display(10, 5.5);
    display("Hello", 100);
    return 0;
}
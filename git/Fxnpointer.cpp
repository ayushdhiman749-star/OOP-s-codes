#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    int (*ptr)(int, int) = add;
    cout << ptr(3, 4);
    return 0;
}
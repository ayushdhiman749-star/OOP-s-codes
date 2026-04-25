#include <iostream>
using namespace std;

int main() {
    try {
        try {
            throw 5;
        }
        catch(int x) {
            cout << "Inner Catch: " << x << endl;
            throw;
        }
    }
    catch(int x) {
        cout << "Outer Catch: " << x << endl;
    }
    return 0;
}
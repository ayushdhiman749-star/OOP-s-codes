#include <iostream>
using namespace std;

class Demo {
public:
    static int count;

    Demo() {
        count++;
    }
};

int Demo::count = 0;

int main() {
    Demo d1, d2, d3;
    cout << "Total objects: " << Demo::count << endl;
    return 0;
}
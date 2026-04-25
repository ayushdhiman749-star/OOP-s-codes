#include <iostream>
#include <vector>
using namespace std;

class Demo {
public:
    int x;
    Demo(int a) { x = a; }
};

int main() {
    vector<Demo> v;

    v.push_back(Demo(10));
    v.push_back(Demo(20));

    for(auto obj : v)
        cout << obj.x << " ";

    return 0;
}
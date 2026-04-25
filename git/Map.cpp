#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m;

    m[1] = "Ayush";
    m[2] = "Rahul";

    for(auto i : m)
        cout << i.first << " " << i.second << endl;

    return 0;
}
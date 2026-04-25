#include <iostream>
#include <string>
using namespace std;

class StringDemo {
    string s;

public:
    void input() {
        cout << "Enter string: ";
        cin >> s;
    }

    void display() {
        cout << "String is: " << s << endl;
    }
};

int main() {
    StringDemo s;
    s.input();
    s.display();
    return 0;
}
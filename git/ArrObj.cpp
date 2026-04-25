#include <iostream>
using namespace std;

class Student {
    int rollno;

public:
    void input() {
        cin >> rollno;
    }

    void display() {
        cout << "Roll No: " << rollno << endl;
    }
};

int main() {
    Student s[3];

    for (int i = 0; i < 3; i++)
        s[i].input();

    for (int i = 0; i < 3; i++)
        s[i].display();

    return 0;
}
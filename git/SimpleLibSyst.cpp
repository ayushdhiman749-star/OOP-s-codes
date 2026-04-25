#include <iostream>
using namespace std;

class Book {
    int id;
    string name;

public:
    void input() {
        cout << "Enter Book ID and Name: ";
        cin >> id >> name;
    }

    void display() {
        cout << "ID: " << id << " Name: " << name << endl;
    }
};

int main() {
    Book b[2];

    for (int i = 0; i < 2; i++)
        b[i].input();

    for (int i = 0; i < 2; i++)
        b[i].display();

    return 0;
}
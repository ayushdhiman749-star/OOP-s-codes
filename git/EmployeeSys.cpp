#include <iostream>
using namespace std;

class Employee {
public:
    int basic;

    void get() {
        cout << "Enter Salary: ";
        cin >> basic;
    }
};

class Salary : public Employee {
public:
    void calculate() {
        int total = basic + (0.2 * basic) + (0.1 * basic);
        cout << "Salary: " << total << endl;
    }
};

int main() {
    Salary s;
    s.get();
    s.calculate();
    return 0;
}
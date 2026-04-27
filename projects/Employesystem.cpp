#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

// Employee Class
class Employee {
public:
    int id;
    string name;
    float salary;

    // Constructor
    Employee(int i, string n, float s) {
        id = i;
        name = n;
        salary = s;
    }

    // Display function
    void display() {
        cout << "ID: " << id << ", Name: " << name << ", Salary: " << salary << endl;
    }
};

// System Class
class EmployeeSystem {
    vector<Employee> empList;

public:
    // Add employee
    void addEmployee() {
        int id;
        string name;
        float salary;

        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Salary: ";
        cin >> salary;

        Employee e(id, name, salary);
        empList.push_back(e);
    }

    // Display all employees
    void displayEmployees() {
        for (int i = 0; i < empList.size(); i++) {
            empList[i].display();
        }
    }

    // Save to file
    void saveToFile() {
        ofstream file("employees.txt");

        for (int i = 0; i < empList.size(); i++) {
            file << empList[i].id << " "
                 << empList[i].name << " "
                 << empList[i].salary << endl;
        }

        file.close();
        cout << "Data saved to file\n";
    }

    // Load from file
    void loadFromFile() {
        ifstream file("employees.txt");

        int id;
        string name;
        float salary;

        while (file >> id >> name >> salary) {
            Employee e(id, name, salary);
            empList.push_back(e);
        }

        file.close();
        cout << "Data loaded from file\n";
    }
};

// Main function
int main() {
    EmployeeSystem system;
    int choice;

    do {
        cout << "\n1. Add Employee\n2. Display\n3. Save\n4. Load\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            system.addEmployee();
            break;
        case 2:
            system.displayEmployees();
            break;
        case 3:
            system.saveToFile();
            break;
        case 4:
            system.loadFromFile();
            break;
        case 5:
            cout << "Exiting...";
            break;
        default:
            cout << "Invalid choice";
        }

    } while (choice != 5);

    return 0;
}
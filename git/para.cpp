#include<iostream>
using namespace std;

class Student{
public:
    int roll;

    Student(int r){
        roll = r;
    }
};

int main(){
    Student s1(10);
    cout << s1.roll;
    return 0;
}
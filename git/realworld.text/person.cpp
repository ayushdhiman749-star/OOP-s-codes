#include <iostream>
using namespace std;

class person{
    public:
    string name;

    void DisplayName(){
        cout<<"Name:"<<name<<endl;

    }
};

class Student : public person{
    public :
    int rollno;

    void displayRollNo(){
        cout<<"Roll no is :"<<rollno<<endl;
    }
};

int main(){
    Student s1;
    s1.name = "ayush";
    s1.rollno = 1;

    s1.DisplayName();
    s1.displayRollNo();
}

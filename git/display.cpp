#include <iostream>
using namespace std;

class Student{
    public:
    int roll;
    string name;
    void input ()
    {
        cin>>roll>>name;
    }
    void display()
    {
        cout<<roll<<name;
    }
};
int main(){
    Student s1;
    s1.input();
    s1.display();
    return 0;
}
#include <iostream>
using namespace std;

class Student
{
  public:
  int RollNo;
  string Name;
  int Marks;
 void input(){
    cin>>RollNo>>Name>>Marks;
 }
 void display()
 {
    cout<<RollNo<<Name<<Marks;
 }
};

int main(){
    Student s1;
    s1.input();
    s1.display();
}

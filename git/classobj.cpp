#include <iostream>
using namespace std;

class Student
{
 public:
 int RollNo;
 string name;

};

int main(){
Student s1;
s1.RollNo = 1;
s1.name = "ayush";
cout<<s1.RollNo<<""<<s1.name;
return 0;
}
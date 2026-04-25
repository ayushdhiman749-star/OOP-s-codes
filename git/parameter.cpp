#include <iostream>
using namespace std;
class Student 
{
    public:
    int Roll;

    Student(int r){
        Roll = r;
    }
};

int main(){
    Student s1(10);
    cout<<s1.Roll;
    return 0;
}
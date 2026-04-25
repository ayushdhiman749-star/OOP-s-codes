#include <iostream>
using namespace std;

class Base{
    public :
    virtual void Display(){
        cout<<"Base display";
    }
};

class Derived : public Base{
 public :
 void Display(){
    cout<<"Derived display";
 }
};


int main(){
    Base *b;
    Derived d;

    b = &d;

    b-> Display();
}
#include <iostream>
using namespace std;

class Animal{
    public :
    void Eat(){
        cout<<"Animal eats :"<<endl;
    }
};

class Dog : public Animal{
    public :
    void Bark(){
        cout<<"dog barks"<<endl;
    }
};

int main(){
    Dog d;
    d.Eat();d.Bark();
}
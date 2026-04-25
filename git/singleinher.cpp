#include<iostream>
using namespace std;

class A{
public:
    void show(){
        cout<<"Base class";
    }
};

class B : public A{
};

int main(){
    B obj;
    obj.show();
    return 0;
}
#include <iostream>
using namespace std;

class A{
    public:
    void ShowA()
    {
        cout<<"class A";
    }
};

class B{public:
    void ShowB(){
        cout<<"class b"<<endl;
    }
};

class C : public A,public B{

};


int main(){
    C obj;
    obj.ShowA();
    obj.ShowB();
}
#include <iostream>
using namespace std;

class A{
    public:
    void Show(){
        cout<<"Base class"<<endl;
    }
};
class B: public A{

};

class c : public A{

};

int main(){
    B b;
    c c;

    b.Show();
    c.Show();
}
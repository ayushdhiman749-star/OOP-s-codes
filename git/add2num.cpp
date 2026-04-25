#include <iostream>
using namespace std;
class Add{
    public:
    int a,b;
    void Input(){
        cout<<"enter two numbers:";
        cin>>a>>b;
    }
    void sum(){
        cout<<"sum = "<<a +b;
    }


};

int main(){
    Add obj;
    obj.Input();
    obj.sum();
    return 0;
}
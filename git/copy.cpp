#include<iostream>
using namespace std;

class Demo{
public:
    int x;

    Demo(int a){
        x = a;
    }

    Demo(Demo &d){
        x = d.x;
    }
};

int main(){
    Demo d1(5);
    Demo d2 = d1;

    cout << d2.x;
}
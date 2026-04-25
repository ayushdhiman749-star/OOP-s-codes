#include <iostream>
using namespace std;

class Number{
    public:
    int x;

    Number(int a){
        x = a;
    }
    Number operator +(Number n)
    {
        return Number (x + n.x);
    }
};

int main(){
    Number n1(5), n2(10);
    Number n3 = n1 + n2;

    cout<<n3.x;
}
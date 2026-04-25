#include <iostream>
using namespace std;

class Product{
    public:
    static int count;

    Product(){
        count++;
    }
};

int product:count = 0;

int main(){
    Product p1,p2,p3;

    cout<<"Total products :"<<Product : count;
}
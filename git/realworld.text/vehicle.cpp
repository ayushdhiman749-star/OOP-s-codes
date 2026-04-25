#include <iostream>
using namespace std;

class Vehicle {
    public:
    int speed;

    void ShowSpeed(){
        cout<<"speed:"<<speed<<endl;
    }

};

class Car: public Vehicle{
    public :
    string brand;

    void ShowBrand(){
        cout<<"brand:"<<brand<<endl;
    }
};

int main(){
    Car c;
    c.speed = 120;
    c.brand= "BMW";

    c.ShowSpeed();
    c.ShowBrand();
}
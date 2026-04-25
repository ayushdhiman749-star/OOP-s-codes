#include <stdio.h>
#include <iostream>
using namespace std;

class product{
    protected:
    int id;
    string name;
    float price;

    public :
    void Inputproduct(){
        cout<<"enter product id :";
        cin>>id;

        cout<<"enter product name :";
        cin>>name;

        cout<<"enter product price :";
        cin>>price;

    }

    void DisplayProduct(){
        cout<<"Product id :"<<id<<endl;
        cout<<"Product name :"<<name<<endl;
        cout<<"Product price :"<<price<<endl;
    } 

};

class Electronics : public product
{
private:
int warranty;
public:
void InputElectronics(){
    DisplayProduct();

    cout<<"Warranty :"<<warranty<<"months"<<endl;
}
};

int main(){
    Electronics e;
    e.InputElectronics();
    e.DisplayProduct();

    return 0;
}
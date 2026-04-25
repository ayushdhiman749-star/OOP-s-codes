#include <iostream>
using namespace std;

class Product{
    public:
    int id;
    string name;
    void Input(){
        cin>>id>>name;
    }

    void Display(){
        cout<<id<<""<<name<<endl;
    }
};

int main(){
    Product p[5];
 
    for(int i = 0; i<5; i++){
        p[i].Input();
    }

    for(int i = 0; i<5; i++)
    {
        p[i].Display();
    }
}
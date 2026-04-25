#include <iostream>
using namespace std;

class Item{
    public:
    string name;
    int qty;
    float price;

    void input(){
        cin>>name;
        cin>>qty;
        cin>>price;
    }
    void TotalValue(){
        cout<<"total value = "<<qty* price; 
    }
};

int main(){
    Item i;

    i.input();
    i.TotalValue();
}
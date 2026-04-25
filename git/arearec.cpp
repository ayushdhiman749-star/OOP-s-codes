#include<iostream>
using namespace std;

class Rectangle
{
public:
    int length,width;

    int area()
    {
        return length*width;
    }
};

int main()
{
    Rectangle r;

    cin>>r.length>>r.width;

    cout<<"Area = "<<r.area();
} 
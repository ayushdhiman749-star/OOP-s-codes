#include<iostream>
using namespace std;

class Demo
{
public:
    ~Demo()
    {
        cout<<"Destructor called";
    }
};

int main()
{
    Demo d;
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int a[5], sum = 0;

    for(int i = 0; i< 5; i++)
    {
        cin>>a[i];
    }
    for(int i = 0;i<5;i++)
    {
        sum = sum + a[i];
    }
    cout<<"average is "<<sum/2;
    return 0;

}
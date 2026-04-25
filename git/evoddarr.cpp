#include <iostream>
using namespace std;

int main(){
    int a[10],n,even = 0,odd = 0;
    cin>>n;
    for(int i = 0; i<5;i++)
    {
        cin>>a[i];
    }
    for(int i =0 ; i<n;i++)
    {
     if(a[i] % 2 ==0){
        even++;
     }
     else
     {
        odd++;
    }
    }
    cout<<"even is :"<<even;
    cout<<"odd  is :"<<odd;
    return 0;
}
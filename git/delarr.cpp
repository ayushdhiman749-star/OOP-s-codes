#include <iostream>
using namespace std;

int main(){
    int a[10],n,pos;
    cout<<"enter a number of element:";
    cin>>n;

    for(int i = 0; i<5;i++)
    {
        cin>>a[i];
    }
    cout<<"enter a position of delete :";
    cin>>pos;

    for(int i = pos -1;i<n-1;i++)
    {
       a[i] = a[i + 1];
       n--;
    }
    for(int i = 0; i<n;i++){
        cout<<a[i]<<"";
    }
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int n,rev = 0;
    cout<<"enter a number";
    cin>>n;
    int temp = n;

    while(n>0){
        rev = rev*10 + n%10;
        n = n / 10;

    }
    if(temp == rev ){
        cout<<"palinmdrome";

    }
    else{
        cout<<"not palindrome";
    }
    return 0;
}
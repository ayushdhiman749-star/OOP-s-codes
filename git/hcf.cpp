#include <iostream>
using namespace std;
 
int hcf(int a, int b){
    if(a == 0){
        return b;
    }
     if(b == 0){
        return a;
    }
    int min,i;
    min = (a<b)?a:b;
    for(i = min; i>= 1; --i){
        if(a % i == 0 && b % i == 0){
            return i;
        }
    }
}



int main(){
     int a,b;
     cout<<"enter two number :"<<endl;
     cin>>a>>b;
     cout<<hcf(a,b);
     return 0;
}
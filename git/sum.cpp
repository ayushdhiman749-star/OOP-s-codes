#include <iostream>
using namespace std;

int main(){
    int n, sum= 0;
    cout<<"enter a number ;"<<endl;
    cin>>n;

    for(int i = 0; i<=n; i++){
        sum+= i;

}
cout<<"sum is : "<<sum;
return 0;
}
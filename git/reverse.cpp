// #include <iostream>
// using namespace std;
// int main(){
//     int n,rev = 0;
//     cout<<"enter a number : "<<endl;
//     cin>>n;

//     while(n>0){
//         rev = rev*10 + n% 10;
//         n = n /10;

//     }
//     cout<<"reverse is :"<<rev;
//     return 0;

// }

//  by using for loop:
#include <iostream>
using namespace std;
int main(){
    int n,rev = 0;
    cout<<"enter a number";
    cin>>n;

    for(; n>0; ){
        rev = rev*10 + n % 10;
        n = n/ 10;
    }
    cout<<rev;
    return 0;
}
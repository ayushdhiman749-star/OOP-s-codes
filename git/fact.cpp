// #include <iostream>
// using namespace std;

// int main(){
//     int n,i,fact = 1;
//     cout<<"enter a number "<<endl;
//     cin>>n;

//     for(i = 1; i<=n;i++){
//         fact = fact*i;
     
//     }
//        cout<<"factorial is : "<<fact;
//     return 0;
// }

// using recursion
#include <iostream>
using namespace std;

int factorial(int n){
    if(n<=1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

    int main(){
        int number;
        cout<<"enter a number :"<<endl;
        cin>>number;

        cout<<"factorial is : "<<factorial(number);
        return 0;
    }

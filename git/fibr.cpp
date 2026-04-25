#include <iostream>
using namespace std;


int fib(int n){
    int fibnm1 = fib(n - 1);
    int fibnm2 = fib(n - 2);
    int fibn = fibnm1 + fibnm2;
    return fibn;


}

int main(){
    int fib(3);
    return 0;
}
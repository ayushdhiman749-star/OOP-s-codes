#include <iostream>
using namespace std;

class ArrayReverse {
public:
    void reverse(int arr[], int n) {
        for (int i = n - 1; i >= 0; i--) {
            cout << arr[i] << " ";
        }
    }
};

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = 4;

    ArrayReverse obj;
    obj.reverse(arr, n);

    return 0;
}
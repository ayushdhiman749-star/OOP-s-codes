#include <iostream>
using namespace std;

class ArraySum {
public:
    int sum(int arr[], int n) {
        int total = 0;
        for (int i = 0; i < n; i++) {
            total += arr[i];
        }
        return total;
    }
};

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    ArraySum obj;
    cout << "Sum = " << obj.sum(arr, 5);
    return 0;
}
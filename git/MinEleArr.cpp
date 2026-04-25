#include <iostream>
using namespace std;

class MinElement {
public:
    int findMin(int arr[], int n) {
        int min = arr[0];

        for (int i = 1; i < n; i++) {
            if (arr[i] < min) {
                min = arr[i];
            }
        }

        return min;
    }
};

int main() {
    int arr[] = {3, 7, 2, 9, 5};
    int n = 5;

    MinElement obj;
    int result = obj.findMin(arr, n);

    cout << "Minimum element is: " << result;

    return 0;
}
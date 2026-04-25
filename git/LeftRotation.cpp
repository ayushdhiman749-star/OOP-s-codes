#include <iostream>
using namespace std;

class LeftRotate {
public:
    void rotate(int arr[], int n) {
        int first = arr[0];

        for (int i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        arr[n - 1] = first;

        // Print rotated array
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
    }
};

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = 4;

    LeftRotate obj;
    obj.rotate(arr, n);

    return 0;
}
#include <iostream>
using namespace std;

class MaxElement {
public:
    int findMax(int arr[], int n) {
        int max = arr[0];

        for (int i = 1; i < n; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }

        return max;
    }
};

int main() {
    int arr[] = {10, 25, 5, 40, 15};
    int n = 5;

    MaxElement obj;
    int result = obj.findMax(arr, n);

    cout << "Maximum element is: " << result;

    return 0;
}
#include <iostream>
using namespace std;

class MissingNumber {
public:
    int findMissing(int arr[], int n) {
        int total = n * (n + 1) / 2;
        int sum = 0;

        for (int i = 0; i < n - 1; i++) {
            sum += arr[i];
        }

        return total - sum;
    }
};

int main() {
    int arr[] = {1, 2, 4, 5};

    MissingNumber obj;
    cout << "Missing Number = " << obj.findMissing(arr, 5);

    return 0;
}
#include <iostream>
using namespace std;

class SubarraySum {
public:
    void findSubarray(int arr[], int n, int target) {
        for (int i = 0; i < n; i++) {
            int sum = 0;

            for (int j = i; j < n; j++) {
                sum += arr[j];

                if (sum == target) {
                    cout << "Found from index " << i << " to " << j;
                    return;
                }
            }
        }
        cout << "Not found";
    }
};

int main() {
    int arr[] = {1, 4, 20, 3, 10, 5};

    SubarraySum obj;
    obj.findSubarray(arr, 6, 33);

    return 0;
}
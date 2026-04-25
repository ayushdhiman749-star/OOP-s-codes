#include <iostream>
using namespace std;

class ArrayManipulation {
public:
    void solve() {
        int n = 5;
        int arr[7] = {0};

        arr[1] += 100; arr[4] -= 100;
        arr[2] += 100; arr[5] -= 100;
        arr[3] += 100; arr[6] -= 100;

        int maxVal = 0, sum = 0;

        for (int i = 1; i <= n; i++) {
            sum += arr[i];
            if (sum > maxVal) {
                maxVal = sum;
            }
        }

        cout << "Maximum value = " << maxVal;
    }
};

int main() {
    ArrayManipulation obj;
    obj.solve();
    return 0;
}
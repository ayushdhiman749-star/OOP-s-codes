#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {3,7,2,9,5};
    int maxVal = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }

    cout << "Max: " << maxVal;
}
#include <iostream>
#include <vector>
using namespace std;

class AddTwoNumbers {
public:
    vector<int> add(vector<int>& a, vector<int>& b) {
        vector<int> result;
        int i = 0, carry = 0;

        while (i < a.size() || i < b.size() || carry) {
            int sum = carry;

            if (i < a.size()) sum += a[i];
            if (i < b.size()) sum += b[i];

            result.push_back(sum % 10);
            carry = sum / 10;
            i++;
        }
        return result;
    }
};

int main() {
    AddTwoNumbers obj;
    vector<int> a = {2,4,3};
    vector<int> b = {5,6,4};

    vector<int> res = obj.add(a, b);

    for (int x : res) cout << x << " ";
}
#include <iostream>
#include <vector>
using namespace std;

class SparseArray {
public:
    void countQueries(vector<string> str, vector<string> query) {
        for (string q : query) {
            int count = 0;

            for (string s : str) {
                if (s == q) {
                    count++;
                }
            }

            cout << count << endl;
        }
    }
};

int main() {
    vector<string> str = {"aba", "baba", "aba", "xzxb"};
    vector<string> query = {"aba", "xzxb", "ab"};

    SparseArray obj;
    obj.countQueries(str, query);

    return 0;
}
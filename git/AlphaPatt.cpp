#include <iostream>
using namespace std;

class AlphabetPattern {
public:
    void print(int n) {
        for (int i = 0; i < n; i++) {
            char ch = 'A';

            for (int j = 0; j <= i; j++) {
                cout << ch << " ";
                ch++;
            }

            cout << endl;
        }
    }
};

int main() {
    AlphabetPattern obj;
    obj.print(4);
    return 0;
}
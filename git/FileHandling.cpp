#include <iostream>
#include <fstream>
using namespace std;

class Data {
    int x;

public:
    void input() {
        cin >> x;
    }

    void write() {
        ofstream f("file.dat", ios::binary);
        f.write((char*)&x, sizeof(x));
        f.close();
    }

    void read() {
        ifstream f("file.dat", ios::binary);
        f.read((char*)&x, sizeof(x));
        cout << x << endl;
        f.close();
    }
};

int main() {
    Data d;
    d.input();
    d.write();
    d.read();
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    string x[] = {"C", "O", "D", "I", "N", "G"};
    int size = sizeof(x) / sizeof(x[0]);

    for (int i = 0; i < size; i++) {
        cout << "Index " << i << ": " << x[i] << endl;
    }

    return 0;
}


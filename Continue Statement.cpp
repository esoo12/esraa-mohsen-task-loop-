#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number to skip: ";
    cin >> n;

    for (int i = 0; i <= 12; i++) {
        if (i == n) {
            continue;
        }
        cout << i << endl;
    }

    return 0;
}


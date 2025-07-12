#include <iostream>
using namespace std;

int main() {
    int length = 11;
    int width = 13;

    cout << "Area = " << length * width << endl;
    cout << "Perimeter = " << 2 * (length + width) << endl;


    width = 15;

    cout << "After changing width to 15:" << endl;
    cout << "Area = " << length * width << endl;
    cout << "Perimeter = " << 2 * (length + width) << endl;

    return 0;
}

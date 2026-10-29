#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10, c = 15;
    if (a < b && b < c || a > c) {
        cout << "A";
    } else if (a++ < b-- && ++c > 15) {
        cout << "B";
    } else {
        cout << "C";
    }
    cout << a << b << c;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int x = 2;
    int result = 0;
    switch (x) {
        case 1:
            result += 10;
        case 2:
            result += 20;
        case 3:
            result += 30;
            break;
        case 4:
            result += 40;
        default:
            result += 100;
    }
    cout << result;
    return 0;
}
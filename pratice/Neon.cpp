#include<iostream>
using namespace std;

int main(){
    int n, sum = 0, square;
    cin >> n ;
    square = n * n;

    while (square > 0) {
        int lastDigit = square % 10;
        sum += lastDigit;
        square /= 10;
    }
    cout << ((sum == n) ? "Yes" : "No") << endl;
    return 0;
}
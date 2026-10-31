#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n ;
    while (n> 0) {
        // last digit fetch
        int lastDigit = n % 10;

        //print the last digit
        cout << lastDigit << " " ;

        //lastDigit remove
        n = n / 10;
    }
    return 0;
}
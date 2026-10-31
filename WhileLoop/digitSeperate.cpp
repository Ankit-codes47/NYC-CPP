#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n ;

    int divisor = 1;

    while(n/ divisor >= 10){
        divisor *= 10;
    }

    while (divisor > 0) {
        int digit = n/ divisor;
        cout << digit << " " ;

        n = n % divisor;
        divisor = divisor /10;
    }
    return 0;
}
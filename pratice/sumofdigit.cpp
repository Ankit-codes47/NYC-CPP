#include<iostream>
using namespace std;

int main() {
     long long n ;
     int sum = 0, i;
     cin >> n;
     int lastD;

     while(n > 0){
          lastD = n % 10;
          sum += lastD;
          n /= 10;
     }
     cout << sum << endl;
     return 0;
}
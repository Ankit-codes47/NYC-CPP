#include<iostream>
using namespace std;

int main(){
     int n;
     cin >> n;

     long long f = 0, s = 1, sum = 0;

     for (int i = 0; i <= 2 * n; i++){
          if( i >= 2 && i % 2 == 0){
               sum += f;
          }
          long long next = f + s;
          f = s;
          s = next;
     }
     cout << sum  << endl;
     return 0;
}
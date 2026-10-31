#include<iostream>
using namespace std;

int main() {
     int n, x, d, count = 0;
     cin >> n >> x;
     for(int i = 1; i <= n; i++){
          d = 0;
          for(int j = 1; j <= i; j++){
               if( i % j == 0){
                    d++;
               }
          }
          if(d == x){
               count++;
          }
     }
     cout << count << endl;
     return 0;
}
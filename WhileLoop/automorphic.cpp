#include<iostream>
using namespace std;

int main() {
     int n;
     cin >> n;

     int sq = n * n;
     int isAutoMorphic = 1; //Always ture

     while(n > 0) {
          if( n % 10 != sq % 10){
               isAutoMorphic = 0;
               break;
          }
          n /= 10;
          sq /= 10;
     }
     cout << ((isAutoMorphic == 1) ? "Automorphic" : "Not Automorphic") << endl;
     return 0;
}
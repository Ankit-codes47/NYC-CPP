#include<iostream>
using namespace std;

int main() {
     int a, b, HCF = 1;
     cin >> a >> b ;
     for(int i = 1; i <= a && i <= b; i++){
          if(a % i == 0 && b % i == 0){
               HCF = i;
          }
     }
     cout << HCF << endl;
     return 0;
}
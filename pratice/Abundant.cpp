#include<iostream>
using namespace std;

int main() {
     int a, sum = 0;
     cin >> a;

     for(int i = 1; i < a; i++){
          if(a % i == 0){
               sum += i;
          }
     }
     if(sum > a){
          cout << "Yes" << endl;
     }else{
          cout << "No" << endl;
     }
     return 0;
}
#include<iostream>
using namespace std;

int main() {
     int n;
     cin >> n;

     int ori = n;
     int sum = 0;

     if(n == 0){
          sum = 1;
     }

     while(n>0){
          int lastD = n % 10;
          int fact = 1;

          for(int i = 1; i <= lastD; i++){
               fact *= i;
          }
          sum += fact;
          n /= 10;
     }
     cout <<((sum == ori) ? "Strong Number" : "Not a Strong Number") << endl;
     return 0;
}
#include<iostream>
using namespace std;

int main() {
     int n, sum = 0, ori;
     cin >> n;
     ori = n;
     while(n > 0){
          int lastD = n % 10;
          sum += lastD;
          n /= 10;
     }
     if(ori % sum == 0){
          cout << "Yes" << endl;
     }else{
          cout << "No" << endl;         
     }

     return 0;
}
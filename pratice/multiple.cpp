#include<iostream>
using namespace std;

int main() {
     int n, i;
     cin >> n;

     int multiple;

     for(i = 1; i <= 10; i++){
          multiple = n * i;
          cout << n << " x " << i << " = " << multiple << endl;
     }
     return 0;
}
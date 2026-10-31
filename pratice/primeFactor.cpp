#include<iostream>
using namespace std;

int main() {
     int n;
     cin >> n;
     if (n == 0){
         cout << "No prime factors" << endl;
     }else if(n == 1) {
         cout << "No prime factors" << endl;
     }else{
         for(int i = 2; i <= n ; i++){
            while(n % i == 0) {
                cout << i << " ";
                n = n / i;
            }
        }
     }
     return 0;
}
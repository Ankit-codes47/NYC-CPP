#include<iostream>
#include<cmath>
using namespace std;

int main() {
     int n;
     cin >> n;

     int root = sqrt(n);

     if(root * root == n){
          cout << "Yes" << endl;
     }else{
          cout << "No" << endl;
     }
     return 0;
}
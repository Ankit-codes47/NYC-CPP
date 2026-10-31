#include<iostream>
#include<cmath>
using namespace std;

int main() {
     int A, B, i;
     cin >> A >> B;
     int result;
     for(i = 1; i <= B; i++){
          result = pow(A,i);
     }
     cout << result << endl;
     return 0;
}
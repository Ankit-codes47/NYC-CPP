#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0, sum = 0, ori = n;

    if(n == 0){
        count = 1;
    }

    while(n>0){
        count++;
        n /= 10;
    }

    n = ori;
    
    while(n >0){
        int lastD = n % 10;
        // digit raised to the power c
        sum += pow(lastD, count);
        n /= 10;
    }
    // n = ori;
    cout <<((sum == ori) ? "ArmStrong Number" : "Not a ArmStrong Number") << endl;
    return 0;
}
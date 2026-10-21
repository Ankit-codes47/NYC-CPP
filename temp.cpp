#include<iostream>
#include<iomanip>
using namespace std;

int main() {
     double C, F;
     cin >> C ;
     F = (C * 9 / 5 ) + 32;
     cout << fixed << setprecision(2) << F << endl;
     return 0;
}
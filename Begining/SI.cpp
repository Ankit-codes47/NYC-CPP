#include<iostream>
#include<iomanip>
using namespace std;

int main() {
     double p, r, t, si;
     cin >> p >> r >> t;
     si = (p * r * t) / 100;
     cout << fixed << setprecision(2) << si << endl;
     return 0;
}
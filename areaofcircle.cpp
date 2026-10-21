#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {
     double r, area;
     cin >> r ;
     area = acos(-1) * r * r;
     cout << fixed << setprecision(2) << area << endl;
     return 0;
}
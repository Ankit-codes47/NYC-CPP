#include<iostream>
#include<iomanip>
using namespace std;

int main() {
     double l, w, area;
     cin >> l >> w ;
     area = l * w ;
     cout << fixed << setprecision(2) << area << endl;
     return 0;
}
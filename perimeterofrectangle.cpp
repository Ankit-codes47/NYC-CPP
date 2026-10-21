#include<iostream>
#include<iomanip>
using namespace std;

int main() {
     double length, width,  perimeter;
     cin >> length >> width ;
     perimeter = 2 * ( length + width );
     cout << fixed << setprecision(2) << perimeter << endl;
     return 0;
}